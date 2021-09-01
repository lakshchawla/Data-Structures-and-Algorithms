const express = require('express')
const Article = require('./../models/article')
const router = express.Router()

router.get('/new', async(req, res) => {
    res.render('articles/new');
});

router.post('/', (req, res) => {
    const article = new Article({
        title: req.body.Title,
        authorName: req.body.AuthorName,
        email: req.body.Email,
        blogPost: req.body.BlogPost
    })
    try {
        article.save();
        res.redirect(`/articles/${article.id}`);

    } catch (error) {
        res.render('articles/new', {
            article: article
        })
    }
})

module.exports = router