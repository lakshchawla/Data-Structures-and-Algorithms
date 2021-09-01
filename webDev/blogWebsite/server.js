const express = require("express");
const Article = require('./models/article')
const articleRouter = require('./routes/articles');
const ejs = require('ejs');
const { response } = require('express');
const mongoose = require('mongoose');

mongoose.connect('mongodb://localhost/blog', {
    useNewUrlParser: true,
    useUnifiedTopology: true
});

const app = express();

app.use(express.urlencoded({
    extended: false
}))
app.use(express.static("public"));
app.set('view engine', 'ejs');


app.get("/", function(req, res) {
    res.render("articles/main")
})

app.use('/articles', articleRouter)

app.listen(3000, function() {
    console.log('Server is running on port 3000');
});