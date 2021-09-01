import react from "react";
import reactDom from "react-dom";
import Header from "./Header"
import Footer from "./Footer";
import Post from "./post";

function App() {
    return (
        <div>
            <Header />
            
            <Post heading= "Heading 1"
            body="Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat."
            author="Lakshay Chawla"
            />

<Post heading= "Heading 1"
            body="Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat."
            author="Lakshay Chawla"
            />
            
            <Footer />
        </div>
    );
}

export default App;