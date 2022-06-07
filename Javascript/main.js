$(document).on("click", "#genButton", function (e) {
  writeInputToFile();
});

function writeInputToFile() {
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

  var outputTF = new Blob([outputString], { type: "text/plain;charset=utf-8" });
  saveAs(outputTF, "output.txt");
  // fs.writeFileSync("output.txt", outputString);

  console.log("text file generated");
}
