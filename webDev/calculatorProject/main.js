var Clr = document.getElementById('keyClr');
var minorDisplay = document.getElementById('displayMinor')
var majorDisplay = document.getElementById('displayMajor')
var key0 = document.getElementById('key0');
var key1 = document.getElementById('key1');
var key2 = document.getElementById('key2');
var key3 = document.getElementById('key3');
var key4 = document.getElementById('key4');
var key5 = document.getElementById('key5');
var key6 = document.getElementById('key6');
var key7 = document.getElementById('key7');
var key8 = document.getElementById('key8');
var key9 = document.getElementById('key9');
var keyPt = document.getElementById('keyPt');
var keyEq = document.getElementById('keyEq');
var keyPl = document.getElementById('keyPl');
var keyMin = document.getElementById('keyMin');
var keyMul = document.getElementById('keyMul');
var keyDiv = document.getElementById('keyDiv');
var keyPer = document.getElementById('keyPer');
var keyRoot = document.getElementById('keyRoot');
var keyDel = document.getElementById('keyDel');
var o = -1,
    num1 = 0,
    num2 = 0;

Clr.addEventListener('click', function() {
    minorDisplay.textContent = '';
    majorDisplay.textContent = '';
    num1 = 0;
})
Clr.addEventListener('mouseover', function() {
    Clr.style.backgroundColor = 'black';
    Clr.style.color = 'white';
})
Clr.addEventListener('mouseout', function() {
    Clr.style.backgroundColor = 'white';
    Clr.style.color = 'black';
})

key0.addEventListener('click', function() {
    majorDisplay.textContent += 0;
})
key0.addEventListener('mouseover', function() {
    key0.style.backgroundColor = 'black';
    key0.style.color = 'white';
})
key0.addEventListener('mouseout', function() {
    key0.style.backgroundColor = 'white';
    key0.style.color = 'black';
})

key1.addEventListener('click', function() {
    majorDisplay.textContent += 1;
})
key1.addEventListener('mouseover', function() {
    key1.style.backgroundColor = 'black';
    key1.style.color = 'white';
})
key1.addEventListener('mouseout', function() {
    key1.style.backgroundColor = 'white';
    key1.style.color = 'black';
})

key2.addEventListener('click', function() {
    majorDisplay.textContent += 2;
})
key2.addEventListener('mouseover', function() {
    key2.style.backgroundColor = 'black';
    key2.style.color = 'white';
})
key2.addEventListener('mouseout', function() {
    key2.style.backgroundColor = 'white';
    key2.style.color = 'black';
})

key3.addEventListener('click', function() {
    majorDisplay.textContent += 3;
})
key3.addEventListener('mouseover', function() {
    key3.style.backgroundColor = 'black';
    key3.style.color = 'white';
})
key3.addEventListener('mouseout', function() {
    key3.style.backgroundColor = 'white';
    key3.style.color = 'black';
})

key4.addEventListener('click', function() {
    majorDisplay.textContent += 4;
})
key4.addEventListener('mouseover', function() {
    key4.style.backgroundColor = 'black';
    key4.style.color = 'white';
})
key4.addEventListener('mouseout', function() {
    key4.style.backgroundColor = 'white';
    key4.style.color = 'black';
})

key5.addEventListener('click', function() {
    majorDisplay.textContent += 5;
})
key5.addEventListener('mouseover', function() {
    key5.style.backgroundColor = 'black';
    key5.style.color = 'white';
})
key5.addEventListener('mouseout', function() {
    key5.style.backgroundColor = 'white';
    key5.style.color = 'black';
})

key6.addEventListener('click', function() {
    majorDisplay.textContent += 6;
})
key6.addEventListener('mouseover', function() {
    key6.style.backgroundColor = 'black';
    key6.style.color = 'white';
})
key6.addEventListener('mouseout', function() {
    key6.style.backgroundColor = 'white';
    key6.style.color = 'black';
})

key7.addEventListener('click', function() {
    majorDisplay.textContent += 7;
})
key7.addEventListener('mouseover', function() {
    key7.style.backgroundColor = 'black';
    key7.style.color = 'white';
})
key7.addEventListener('mouseout', function() {
    key7.style.backgroundColor = 'white';
    key7.style.color = 'black';
})

key8.addEventListener('click', function() {
    majorDisplay.textContent += 8;
})
key8.addEventListener('mouseover', function() {
    key8.style.backgroundColor = 'black';
    key8.style.color = 'white';
})
key8.addEventListener('mouseout', function() {
    key8.style.backgroundColor = 'white';
    key8.style.color = 'black';
})

key9.addEventListener('click', function() {
    majorDisplay.textContent += 9;
})
key9.addEventListener('mouseover', function() {
    key9.style.backgroundColor = 'black';
    key9.style.color = 'white';
})
key9.addEventListener('mouseout', function() {
    key9.style.backgroundColor = 'white';
    key9.style.color = 'black';
})

keyPt.addEventListener('click', function() {
    majorDisplay.textContent += '.';
})
keyPt.addEventListener('mouseover', function() {
    keyPt.style.backgroundColor = 'black';
    keyPt.style.color = 'white';
})
keyPt.addEventListener('mouseout', function() {
    keyPt.style.backgroundColor = 'white';
    keyPt.style.color = 'black';
})

keyEq.addEventListener('click', function() {
    majorDisplay.textContent = num1;
})
keyEq.addEventListener('mouseover', function() {
    keyEq.style.backgroundColor = 'black';
    keyEq.style.color = 'white';
})
keyEq.addEventListener('mouseout', function() {
    keyEq.style.backgroundColor = 'white';
    keyEq.style.color = 'black';
})

keyPl.addEventListener('click', function() {
    num1 += Number(majorDisplay.textContent)
    minorDisplay.textContent += majorDisplay.textContent + '+';
    majorDisplay.textContent = '';
})
keyPl.addEventListener('mouseover', function() {
    keyPl.style.backgroundColor = 'black';
    keyPl.style.color = 'white';
})
keyPl.addEventListener('mouseout', function() {
    keyPl.style.backgroundColor = 'white';
    keyPl.style.color = 'black';
})

keyMin.addEventListener('click', function() {
    num1 -= Number(majorDisplay.textContent)
    minorDisplay.textContent += majorDisplay.textContent + '-';
    majorDisplay.textContent = '';
})
keyMin.addEventListener('mouseover', function() {
    keyMin.style.backgroundColor = 'black';
    keyMin.style.color = 'white';
})
keyMin.addEventListener('mouseout', function() {
    keyMin.style.backgroundColor = 'white';
    keyMin.style.color = 'black';
})

keyMul.addEventListener('click', function() {
    num1 *= Number(majorDisplay.textContent)
    minorDisplay.textContent += majorDisplay.textContent + '*';
    majorDisplay.textContent = '';
})
keyMul.addEventListener('mouseover', function() {
    keyMul.style.backgroundColor = 'black';
    keyMul.style.color = 'white';
})
keyMul.addEventListener('mouseout', function() {
    keyMul.style.backgroundColor = 'white';
    keyMul.style.color = 'black';
})

keyDiv.addEventListener('click', function() {
    num1 /= Number(majorDisplay.textContent)
    minorDisplay.textContent += majorDisplay.textContent + '/';
    majorDisplay.textContent = '';
})
keyDiv.addEventListener('mouseover', function() {
    keyDiv.style.backgroundColor = 'black';
    keyDiv.style.color = 'white';
})
keyDiv.addEventListener('mouseout', function() {
    keyDiv.style.backgroundColor = 'white';
    keyDiv.style.color = 'black';
})

keyRoot.addEventListener('click', function() {
    // majorDisplay.textContent += '.';
})
keyRoot.addEventListener('mouseover', function() {
    keyRoot.style.backgroundColor = 'black';
    keyRoot.style.color = 'white';
})
keyRoot.addEventListener('mouseout', function() {
    keyRoot.style.backgroundColor = 'white';
    keyRoot.style.color = 'black';
})

keyPer.addEventListener('click', function() {
    // majorDisplay.textContent += '.';
})
keyPer.addEventListener('mouseover', function() {
    keyPer.style.backgroundColor = 'black';
    keyPer.style.color = 'white';
})
keyPer.addEventListener('mouseout', function() {
    keyPer.style.backgroundColor = 'white';
    keyPer.style.color = 'black';
})

keyDel.addEventListener('click', function() {
    // majorDisplay.textContent += '.';
})
keyDel.addEventListener('mouseover', function() {
    keyDel.style.backgroundColor = 'black';
    keyDel.style.color = 'white';
})
keyDel.addEventListener('mouseout', function() {
    keyDel.style.backgroundColor = 'white';
    keyDel.style.color = 'black';
})

var Oper = minorDisplay.textContent;
var nums;

// function Result() {
//     for (let i = 0; i < oper.length; i++) {
//         if
//     }
// }