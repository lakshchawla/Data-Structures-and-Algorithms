var f_name = prompt("Enter your first name: ");
var l_name = prompt("Enter your last  name: ");
var age = prompt("Enter age: ");
var height = prompt("Enter your height: ");
var pet = prompt("Pet name: ");

var nameCond = null;
var ageCond = null;
var heightCond = null;
var petCond = null;


if (f_name[0] === l_name[0]) {   
    nameCond = true;
}

if (age > 20 && age < 30) {
    ageCond = true;
}

if (height > 165 && height < 179) {
    heightCond = true;
}

if (pet[pet.length - 1] === "y") {
    petCond = true;
}

if (nameCond && ageCond && heightCond && petCond) {
    console.log("Hello Mr. Spy");
}