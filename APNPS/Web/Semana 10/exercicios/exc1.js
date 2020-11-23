var btn = document.querySelector("button");
var corDeFundo = document.querySelector('body')
btn.addEventListener("click", alteraCorBackground );

function alteraCorBackground () {
    corDeFundo.style.background = getRandomColor();
}

function getRandomColor() {
  var myColors = ['blue', 'pink', 'white','yellow','green', 'grey', 'orange', 'tomato', 'purple','red']  ;
    var colorRandom = myColors[Math.floor(Math.random()*myColors.length)];

    return colorRandom;
  

  }





