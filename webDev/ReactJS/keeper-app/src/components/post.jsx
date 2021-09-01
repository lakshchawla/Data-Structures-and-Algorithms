import react from "react";
import reactDom from "react-dom";

function Post(props) {
    return (
        <div className = "Post">
            <h2>{props.heading}</h2>
            <p>{props.body}</p>
            <br />
            <em>{props.author}</em>
        </div>
    );
}

export default Post;