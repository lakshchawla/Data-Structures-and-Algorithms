var hoverOver = document.getElementById("hoverOn");
var Click = document.getElementById("clickIt");
var dblClick = document.getElementById("dblClickIt");

// console.log("Connected")

hoverOver.addEventListener('mouseover', function() {
    hoverOver.textContent = "Pointer is currently over the text";
    hoverOver.style.color = "red";
})

hoverOver.addEventListener('mouseout', function() {
    hoverOver.textContent = "Hover your cursor here";
    hoverOver.style.color = "black";
})

snglClick = document.getElementById("clickIt");

snglClick.addEventListener('click', function() {
    snglClick.inn = "You clicked here";
    snglClick.style.color = "blue";

})