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
