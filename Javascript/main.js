//const { Module } = require("module");

$(document).on("click", "#genButton", function () {
  getCppValues();
  //writeInputToFile();
  // runExternalCFile();
});

function getCppValues() {
  var transport = document.getElementById("trSelect");
  var steep = document.getElementById("steepSelect");
  var tireAge = document.getElementById("tiSelect");

  var petrolUse = getCarPetrolU(transport.value);
  var carMake = getCarMake(transport.value);
  var carModel = getCarModel(transport.value);
  var carClass = getCarClass(transport.value);
  var steepVariable = getSteepVariable(steep.value);
  var tireVariable = getTireVariable(tireAge.value);

  console.log(
    "Petrol usage per 100km:" +
      petrolUse +
      "\n" +
      "Killowatt hour conversion per 100km: " +
      Module.ccall("sConversionPetrolKWH", "number", "number", [petrolUse])
  );

  var kwhHKmPet = Module.ccall("sConversionPetrolKWH", "number", "number", [petrolUse]);

  var kwhHKmEv = 21.499;

  console.log(
    "Cost per km for petrol: " +
      Module.ccall("genCostPerKmPetrol", "number", "number", [petrolUse])
  );

  var costKmPet = Module.ccall("genCostPerKmPetrol", "number", "number", [petrolUse]);

  var costLPet = 23.845;

  var costKwhKmEv = 0.286;

  console.log(
    "Energy usage per km for petrol: " +
      Module.ccall("genEnergyUsagePeKmPetrol", "number", "number", [petrolUse])
  );

  var enUseKmPet = Module.ccall("genEnergyUsagePeKmPetrol", "number", "number", [petrolUse]);

  var enUseKmEv = 773.982;

  //price graphs

  const priceLabels = ["Petrol Cost Per Km", "KiloWatt Hour Cost per Km"];

  const priceData = {
    labels: priceLabels, 
    datasets:[
      {
        label: "Cost Comparison between " + carMake + " " + carModel + " and Average Electric Alternative Cost(Petrol vs KiloWatt Hours)",
        backgroundColor:[
          "rgb(242, 184, 75)", 
          "rgb(75, 242, 108)"
        ],
        borderColor:[
          "rgb(242, 184, 75)", 
          "rgb(75, 242, 108)"
        ],
        data:[
          costKmPet, costKwhKmEv
        ],
      },
    ],
  };

  const priceConfig = {
    type: "bar",
    data: priceData,
    options:{},
  };

  const priceChart = new Chart (document.getElementById("priceChart"), priceConfig);



  //energy consumption graphs

  //energy conversion graphs

}

function writeInputToFile() {
  var canGenerate = true;
  var dataTitle = "User Input";
  var transport = document.getElementById("trSelect");
  var tireAge = document.getElementById("tiSelect");
  var steep = document.getElementById("steepSelect");
  var speedV = document.getElementById("aSpeed");
  var option1 = document.querySelector("#option1:checked");
  var option2 = document.querySelector("#option2:checked");
  var option3 = document.querySelector("#option3:checked");

  var outputString;

  if (option1 != null) {
    option1 = true;
  }
  if (option2 != null) {
    option2 = true;
  }
  if (option3 != null) {
    option3 = true;
  }

  outputString = dataTitle.concat(
    "\n",
    transport.value,
    "\n",
    tireAge.value,
    "\n",
    steep.value,
    "\n",
    speedV.value,
    "\n",
    option1,
    "\n",
    option2,
    "\n",
    option3
  );

  if (speedV.value == 0) {
    alert("Please enter a value for speed");
    canGenerate = false;
  }
  if (option1 == null && option2 == null && option3 == null) {
    alert("Please select at least one option for comparison.");
    canGenerate = false;
  }

  if (canGenerate) {
    var outputTF = new Blob([outputString], {
      type: "text/plain;charset=utf-8",
    });
    //saveAs(outputTF, "output.txt");
    //   fs.writeFileSync("output.txt", outputString);
    //write("output.txt", outputString);
    console.log("text file generated");
  }
}
