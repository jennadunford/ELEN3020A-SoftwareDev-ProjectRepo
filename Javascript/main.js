//USING A JS LIBRARY

var fso = new FSO(1024 * 1024 * 1024, true); // Create 1GB of temp storage

var fsq = fso.createQueue();

// Queues process commands sequentially,
// prepare your queue like so:
fsq.mkdir(
  "//wsl.localhost/Ubuntu/home/jennadunfordELEN3020A-SoftwareDev-ProjectRepo/JavascriptOutputTesting"
);
fsq.write(
  "//wsl.localhost/Ubuntu/home/jennadunfordELEN3020A-SoftwareDev-ProjectRepo/JavascriptOutputTesting/new.txt",
  " Jenna wrote to this"
);
fsq.read(
  "//wsl.localhost/Ubuntu/home/jennadunfordELEN3020A-SoftwareDev-ProjectRepo/JavascriptOutputTesting/new.txt",
  function (data) {
    console.log(data);
  }
);

// Finally, execute asynchronously.
fsq.execute();
//END OF JS LIBRARY EXAMPLE
//This does seem to *work* but the github says it is depreceated should look into other options
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
  //   fs.writeFileSync("output.txt", outputString);
  //write("output.txt", outputString);
  console.log("text file generated");
}
