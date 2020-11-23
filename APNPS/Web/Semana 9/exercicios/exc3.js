var n = prompt("Informe um numero para calculo do seu fatorial: ");


function factorial () {
    var product = 1;
    while(n>1){
        product *=n;
        n--
    }
    return product;
}

alert( "o fatorial de "+ n + " é " + factorial(n));