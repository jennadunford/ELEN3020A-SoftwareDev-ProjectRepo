//const { Module } = require("module");
//makeAnimatedGraph();

$(document).on("click", "#reloadButton", function () {
  location.reload();
});
$(document).on("click", "#genButton", function () {
  getCppValues();
});

function getCppValues() {
  var transport = document.getElementById("trSelect");

  var petrolUse = getCarPetrolU(transport.value);
  var carMake = getCarMake(transport.value);
  var carModel = getCarModel(transport.value);

  console.log(
    "Petrol usage per 100km:" +
      petrolUse +
      "\n" +
      "Killowatt hour conversion per 100km: " +
      Module.ccall("sConversionPetrolKWH", "number", "number", [petrolUse])
  );

  var kwhHKmPet = Module.ccall("sConversionPetrolKWH", "number", "number", [
    petrolUse,
  ]);

  var kwhHKmEv = 21.499;

  console.log(
    "Cost per km for petrol: " +
      Module.ccall("genCostPerKmPetrol", "number", "number", [petrolUse])
  );

  var costKmPet = Module.ccall("genCostPerKmPetrol", "number", "number", [
    petrolUse,
  ]);

  var costLPet = 23.845;

  var costKwhKmEv = 0.286;

  console.log(
    "Energy usage per km for petrol: " +
      Module.ccall("genEnergyUsagePeKmPetrol", "number", "number", [petrolUse])
  );

  var enUseKmPet = Module.ccall(
    "genEnergyUsagePeKmPetrol",
    "number",
    "number",
    [petrolUse]
  );

  var enUseKmEv = 773.982;

  var carText = document.getElementById("vehicleName");
  carText.textContent = "The" + "\xa0" + carMake + "\xa0" + carModel;

  Chart.defaults.color = "#fff";

  Chart.defaults.plugins.legend.position = "bottom";
  Chart.defaults.plugins.legend.align = "start";
  Chart.defaults.plugins.legend.textDirection = "rtl";

  Chart.defaults.font.size = 14;

  //price graphs

  const priceLabel1 = ["Petrol Cost Per Km VS KiloWatt Hour Cost per km"];
  const priceLabel2 = ["KiloWatt Hour Cost per Km"];

  const eConsumpLabel1 = [
    "Energy Consumption of " +
      carMake +
      " " +
      carModel +
      " VS Average Electric Vehicle",
  ];
  const eConsumpLabel2 = ["Average Electric Vehicle"];

  const eConverLabel1 = [
    carMake +
      " " +
      carModel +
      " kWH used over 100km VS Average Electric Vehicle ",
  ];
  const eConverLabel2 = ["Average Electric Vehicle"];

  const priceData = {
    labels: priceLabel1,
    priceLabel2,
    datasets: [
      {
        label: [carMake + " " + carModel + " Petrol Cost per 1km"],
        fill: false,
        backgroundColor: ["rgb(242, 184, 75)"],
        borderColor: ["rgb(242, 184, 75)"],
        data: [costKmPet],
      },
      {
        label: ["Average Electric vehicle cost per 1km"],
        fill: false,
        backgroundColor: ["rgb(75, 242, 108)"],
        borderColor: ["rgb(75, 242, 108)"],
        data: [costKwhKmEv],
      },
    ],
  };

  const priceConfig = {
    type: "bar",
    data: priceData,
  };

  const priceChart = new Chart(
    document.getElementById("priceChart"),
    priceConfig
  );

  const eConsumpData = {
    labels: eConsumpLabel1,
    eConsumpLabel2,
    datasets: [
      {
        label: ["Energy Usage: " + carMake + " " + carModel],
        backgroundColor: ["rgb(242, 184, 75)"],
        borderColor: ["rgb(242, 184, 75)"],
        data: [enUseKmPet],
      },
      {
        label: ["Energy Usage: Average Electric Alternative"],
        backgroundColor: ["rgb(75, 242, 108)"],
        borderColor: ["rgb(75, 242, 108)"],
        data: [enUseKmEv],
      },
    ],
  };

  const eConsumpConfig = {
    type: "bar",
    data: eConsumpData,
  };

  const eConsumpChart = new Chart(
    document.getElementById("eConsumpChart"),
    eConsumpConfig
  );

  const eConverData = {
    labels: eConverLabel1,
    eConverLabel2,
    datasets: [
      {
        label: [carMake + " " + carModel + " generated kWH"],
        backgroundColor: ["rgb(242, 184, 75)"],
        borderColor: ["rgb(242, 184, 75)"],
        data: [kwhHKmPet],
      },
      {
        label: ["Average Electric Alternative kWH used"],
        backgroundColor: ["rgb(75, 242, 108)"],
        borderColor: ["rgb(75, 242, 108)"],
        data: [kwhHKmEv],
      },
    ],
  };

  const eConverConfig = {
    type: "bar",
    data: eConverData,
  };

  const eConverChart = new Chart(
    document.getElementById("eConverChart"),
    eConverConfig
  );

  // eConverChart.defaults.global.defaultFontColor = "#fff";

  //eConverChart.defaults.global.defaultFontColor = "rgb(251,72,196)";
  //eConverData.defaults.font.size = 50;

  //energy consumption graphs

  //energy conversion graphs

  let text = document.getElementsByClassName("text");
  for (var i = 0; i < text.length; i++) {
    text[i].classList.add("fade-in");
  }

  var petrolText = document.getElementById("petrolValue");
  petrolText.innerHTML = petrolUse + "L";
  var kwhText = document.getElementById("kwHValue");
  kwhText.innerHTML = kwhHKmEv;
  console.log(carMake);
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

function makeAnimatedGraph() {
  const animateData = {
    datasets: [
      {
        backgroundColor: ["rgb(237, 97, 146)"],
        borderColor: ["rgb(237, 97, 146)"],
        data: 5,
      },
      {
        backgroundColor: ["rgb(119, 207, 105)"],
        borderColor: ["rgb(119, 207, 105)"],
        data: 3,
      },
      {
        backgroundColor: ["rgb(143, 113, 209)"],
        borderColor: ["rgb(143, 113, 209)"],
        data: 8,
      },
      {
        backgroundColor: ["rgb(237, 97, 146)"],
        borderColor: ["rgb(237, 97, 146)"],
        data: 6,
      },
    ],
    options: {
      animations: {
        tension: {
          duration: 50,
          easing: "easeInElastic",
          from: 1,
          to: 10,
          loop: true,
        },
      },
    },
  };

  const animateConfig = {
    type: "bar",
    data: animateData,
  };

  const animateChart = new Chart(
    document.getElementById("animateChart"),
    animateConfig
  );
}
