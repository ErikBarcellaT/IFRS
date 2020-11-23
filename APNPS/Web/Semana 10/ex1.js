var body =document.querySelector("body");
var ehAzul = false;

setInterval(function() {
    if (ehAzul){
        body.style.background="white";
    } else {
        body.style.background="#3498db";
    }
    ehAzul=!ehAzul
}, 1000)