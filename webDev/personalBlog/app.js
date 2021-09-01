const express = require("express");
const articleRouter = require('./routes/articles');
const ejs = require('ejs');
const { response } = require('express');

const app = express();

app.use('/articles', articleRouter)
app.use(express.static("public"));
app.set('view engine', 'ejs');


app.get("/", function(req, res) {
    res.render("home");
})

app.listen(3000, function() {
    console.log('Server is running on port 3000');
});