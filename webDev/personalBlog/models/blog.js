const mongoose = require('mongoose');

const blogSchema = new mongoose.Schema({
    title: {
        type: String,
        required: true
    },
    description: {
        type: String,
        required: true
    },
    builtOn: {
        type: Date,
        default: Date.apply.now
    },
    email: {
        type: text
    }

})