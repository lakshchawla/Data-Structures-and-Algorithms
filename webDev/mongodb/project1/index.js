const mongoose = require('mongoose');

mongoose.connect("mongodb://localhost:27017/fruitsDB", { useNewUrlParser: true, useUnifiedTopology: true });

const fruitSchema = new mongoose.Schema({
    name: {
        type: String,
        required: [true, "Please check your data entry, no name specified!"]
    },
    rating: {
        type: Number,
        min: 1,
        max: 10
    },
    review: String
});

const personSchema = new mongoose.Schema({
    name: String,
    age: Number,
    gender: Boolean,
    email: String,
    favFruit: fruitSchema
});

const Fruit = mongoose.model("fruits", fruitSchema);

const Person = mongoose.model("people", personSchema);

const peaches = new Fruit({
    name: "peaches",
    rating: 10,
    review: "Tasty"
});

const lakshay = new Person({
    name: "Lakshay Chawla",
    age: 18,
    gender: false,
    email: "lakshay@mail.com",
    favFruit: peaches
});

lakshay.save();


// peaches.save();

// Fruit.find(function(err, fruits) {

//     mongoose.connection.close();
//     fruits.forEach(function(fruit) {
//         console.log(fruit.name);
//     });
// })