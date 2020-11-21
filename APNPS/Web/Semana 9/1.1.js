function numeroParaTexto(n) {
    switch(n){
        case 1:
            return "um";
            break;
        case 2: 
            return "dois"
            break;
        case 3:
            return "tres"
            break;
        case 4: 
            return "quatro"
            break;
        case 5: 
            return "cinco"
            break;

    }
}




//*/**/ */

function verificaPar(num){
    return(num % 2 ==0);
}

var numero = prompt("digite algo")
if (verificaPar(numero)){
    alert("numero par");
} else {
    alert("numero impar")
}



/*/*//*/ */

var n = prompt("Informe um valor para calculo do seu fatorial: ")
function factorial (n) {
    var product = 1;
    while(n>1){
        product *=n;
        n--
    }
    return product;
}

alert(factorial(n))