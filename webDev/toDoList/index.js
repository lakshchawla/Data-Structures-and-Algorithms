    const express = require('express');
const bodyParser = require('body-parser');
const { urlencoded } = require('express');

const app = express();
var items = [];
app.set('view engine', 'ejs');

app.use(bodyParser.urlencoded({ extended: true }));

app.get('/', function(req, res) {

    var options = { weekday: 'long', year: 'numeric', month: 'long', day: 'numeric' };
    var today = new Date();

    var day = today.toLocaleDateString('en-us', options);

    res.render("list", {
        kindOfDay: day,
        newListItem: items,
    })
});

app.post('/', function(req, res) {
    var item = req.body.__AddItem;
    items.push(item);

    res.redirect('/');
})

app.listen(3000, function() {
    console.log("Server is running on port 3000");
})