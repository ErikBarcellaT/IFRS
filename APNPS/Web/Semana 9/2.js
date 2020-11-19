var n = prompt("Digite um numero ");

function verificaPar(n) {
    if((n%2)==0) {
        return true;
    } else {
        return false;
    }
}

resultado=verificaPar(n);
if(resultado==true) {
    alert("O numero é par");
} else {
    alert("O numero é impar");
}