


var numero_secreto=getRndInteger(1,10);
var numero_chute;
var i=0;


while(numero_chute!=numero_secreto){
    while(i<5){
        i++
       
    numero_chute=prompt("Adivinhe o numero: ");
    if(numero_chute==numero_secreto) {
        alert("Voce acertou em "+ i + " tentativas, muito bem!!!");
    } else if(numero_chute>numero_secreto){
        alert("Muito alto, tente novamente ")
    } else if(numero_chute<numero_secreto) {
        alert("Muito baixo, tente novamente");
    }
}
}

function getRndInteger(min, max) {
    return Math.floor(Math.random() * (max - min + 1) ) + min;
  }

