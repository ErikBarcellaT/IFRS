var numeroSecreto=getRndInteger(1,10);
var numeroChute;
var i=0;

    while(i<5 || numeroChute==numeroSecreto){
        numeroChute=prompt("Adivinhe o numero: ");
        i++
       if(numeroChute==numeroSecreto) {
        alert("Voce acertou em "+ numeroParaTexto(i) + " tentativas, muito bem!!!");
    } else if(numeroChute>numeroSecreto){
        alert("Muito alto, tente novamente ")
    } else if(numeroChute<numeroSecreto) {
        alert("Muito baixo, tente novamente");
    }
}


function getRndInteger(min, max) {
    return Math.floor(Math.random() * (max - min + 1) ) + min;
  }

  function numeroParaTexto() {
    switch(i){
        case 1:
            return "uma";
            break;
        case 2: 
            return "duas"
            break;
        case 3:
            return "três"
            break;
        case 4: 
            return "quatro"
            break;
        case 5: 
            return "cinco"
            break;

    }
}


