var btn = document.querySelector("button");
var corDeFundo = document.querySelector('body')
btn.addEventListener("click", alteraCorBackground );

function alteraCorBackground () {
    corDeFundo.style.background = getRandomColor();
}

function getRandomColor() {
    var letters = '0123456789ABCDEF';
    var color = '#';
    for (var i = 0; i < 6; i++) {
      color += letters[Math.floor(Math.random() * 16)];
    }
    return color;
  }


  function coreMulti(){
    var r = math.floor(math.random()*256);
  }