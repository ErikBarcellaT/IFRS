/*função recebendo parametros*/

function fazerAlgumaCoisa() {
    console.log("A função fazerAlgumaCoisa () foi executada");
}

function ola(nome){
    console.log("Olá "+nome+"!");
}

function elevaAoQuadrado(numero) {
   console.log(numero*numero);
}
function calculaArea(largura, altura) {
    console.log(largura*altura);
}
/*função retornando algo*/
function elevaAoQuadrado(numero) {
    return(numero*numero);
 }
/*armazenado em variavel o retorno*/
var resultado = elevaAoQuadrado();

function maiuscula(str) {
    return str.charAt(0).toUpperCase() + str.slice(1);
}

var cidade ="paris";
var cidadeMaiuscula = maiuscula(cidade);
