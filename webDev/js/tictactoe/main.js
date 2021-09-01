var crossImg = "<svg xmlns='http://www.w3.org/2000/svg' width='50' height='50' fill='currentColor' class='bi bi-x-circle-fill' viewBox='0 0 16 16'><path d='M16 8A8 8 0 1 1 0 8a8 8 0 0 1 16 0zM5.354 4.646a.5.5 0 1 0-.708.708L7.293 8l-2.647 2.646a.5.5 0 0 0 .708.708L8 8.707l2.646 2.647a.5.5 0 0 0 .708-.708L8.707 8l2.647-2.646a.5.5 0 0 0-.708-.708L8 7.293 5.354 4.646z'/></svg>";
var zeroImg = "<svg xmlns='http://www.w3.org/2000/svg' width='80' height='80' fill='currentColor' class='bi bi-record-fill' viewBox='0 0 16 16'><path fill-rule='evenodd' d='M8 13A5 5 0 1 0 8 3a5 5 0 0 0 0 10z'/></svg>";

var markPos = document.querySelectorAll("td");


var markPos1 = document.getElementById("pos1");
var markPos2 = document.getElementById("pos2");
var markPos3 = document.getElementById("pos3");
var markPos4 = document.getElementById("pos4");
var markPos5 = document.getElementById("pos5");
var markPos6 = document.getElementById("pos6");
var markPos7 = document.getElementById("pos7");
var markPos8 = document.getElementById("pos8");
var markPos9 = document.getElementById("pos9");

// var PositionArray = [markPos1, markPos2, markPos3, markPos4, markPos5, markPos6, markPos7, markPos8, markPos9]

var BoardPositions = document.querySelectorAll('td');

function clearBoard() {
    for (let i = 0; i < BoardPositions.length; i++) {
        BoardPositions[i].innerHTML = "";
    }
}

ResetButton.addEventListener('click', clearBoard);

var t = 0,
    marker;

if (markPos1.textContent != "X" || markPos1.textContent != "O") {
    markPos1.addEventListener('click', function() {
        if (t % 2 == 0) {
            marker = "X";
        } else {
            marker = "O";
        }
        markPos1.textContent = marker;
        t++;
    });
}


statusIndicator = document.getElementById("playerTurn");