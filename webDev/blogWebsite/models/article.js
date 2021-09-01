const mongoose = require("mongoose")

const articleSchema = new mongoose.Schema({
    title: {
        type: String,
        required: true
    },
    authorName: {
        type: String,
        required: true
    },
    email: {
        type: String
    },
    blogPost: {
        type: String,
        required: true
    },
    builtOn: {
        type: Date,
        default: Date.now
    }
})

module.exports = mongoose.model('Article', articleSchema);