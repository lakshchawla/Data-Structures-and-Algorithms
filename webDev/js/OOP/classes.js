var emp{
    name = "Lakshay Chawla",
    job = "Developer",
    age = 18,

    show: function() {
        console.log("Name of employee is " + this.name);
        console.log("He is working as a" + this.job);
        console.log("His age is " + this.age);
    }
}

emp.show()