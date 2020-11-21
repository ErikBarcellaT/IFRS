var n= prompt("Informe um numero inteiro entre 1 e 5: ");
var resultado=numeroParaTexto(n);
function numeroParaTexto () {
 if(n==1) {
     alert("um");
 } else if(n==2) {
     alert("dois "); 
 } else if(n==3) {
     alert("três");
 } else if (n==4) {
     alert("quatro");
 } else if(n==5) {
     alert("cinco");
 } else {
     alert("O numero não esta entre 1 e 5");
 }
}


alert("numero "+ resultado);