// Q1 

function imprimiInvertido(a){
    return a.reverse();
}
//teste Q1
console.log(imprimiInvertido(['a','b','c','d']))

//Q2

function iguais(arr){
var primeiro=arr[0]
for(var i =1; i<arr.lenght; i++) {
    if(arr[i]!==primeiro)
    return false
}
return true;


}
//TESTE Q2
var c1=[3,3,3]
var c2=['a','b','c'];

console.log(iguais(c1));

//q3
function soma(){
    let soma=0;
    for (i in arguments){
        soma +=arguments[i]
    }
    return soma
}



//q4

function maior(arr){
    var maior = arr[0];
    arr.forEach(function (numero) {
        if(numero > maior){
            maior=numero
        }
    });
    return maior;
}




