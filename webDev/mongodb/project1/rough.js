const MongoClient = require('mongodb').MongoClient;
const assert = require('assert');

const url = 'mongodb://localhost:27017';

const dbName = 'fruitsDB';

const client = new MongoClient(url, { useUnifiedTopology: true });

client.connect(function(err) {
    assert.equal(null, err);
    console.log("Successfully connectef to sever");

    const db = client.db(dbName);

    insertDocuments(db, function() {
        client.close();
    });
});

const insertDocuments = function(db, callback) {
    const collection = db.collection('fruits');

    collection.insertMany([
        { "_id": 1, "name": "apples", "rating": 7, "review": "An apple a day, keeps doctor away" },
        { "_id": 2, "name": "Avocado", "rating": 9, "review": "Yummy and healthy" },
        { "_id": 3, "name": "Banana", "rating": 10, "review": "A complete fruit" },
    ], function(err, result) {
        assert.equal(err, null);
        assert.equal(3, result.ops.n);
        assert.equal(3, result.ops.length);
        console.log("Intserted 3 docs into the collection");
        callback(result);
    });
}