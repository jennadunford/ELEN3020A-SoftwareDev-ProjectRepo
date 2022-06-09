function getCarMake(id) {
  switch (id) {
    case "car1":
      return "Honda";
    case "car2":
      return "Kia";
    case "car3":
      return "Mazda";
    case "car4":
      return "Toyota";
    case "car5":
      return "Mini";
  }
}

function getCarModel(id) {
  switch (id) {
    case "car1":
      return "Accord";
    case "car2":
      return "Forte(MPI)";
    case "car3":
      return "CX-3";
    case "car4":
      return "Prius V";
    case "car5":
      return "Cooper 5 Door";
  }
}

function getCarClass(id) {
  switch (id) {
    case "car1":
      return "L";
    case "car2":
      return "M";
    case "car3":
      return "C";
    case "car4":
      return "WM";
    case "car5":
      return "S";
  }
}

function getCarPetrolU(id) {
  switch (id) {
    case "car1":
      return 7.2;
    case "car2":
      return 7.1;
    case "car3":
      return 7.6;
    case "car4":
      return 5.8;
    case "car5":
      return 7.9;
  }
}

function getTireVariable(id) {
  switch (id) {
    case "tire1":
      return 0.013;
    case "tire2":
      return 0.02;
    case "tire3":
      return 0.03;
    case "tire4":
      return 0.3;
  }
}

function getSteepVariable(id) {
  switch (id) {
    case "steep1":
      return 0.5;
    case "steep1":
      return 1;
    case "steep1":
      return 2;
    case "steep1":
      return 3.4;
  }
}
