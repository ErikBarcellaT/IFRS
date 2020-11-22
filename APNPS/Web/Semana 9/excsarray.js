var numeros = [22,67,33,96,88];

console.log(numeros[numeros.length]);

var numeros = [22,67,33,96,88];

console.log(numeros[numeros.length-1]); /* opcao correta para imprimir o ultimo elemento do array */


/* */
var linguagens = [
    ['java', 'javascript', 'c'],
    ['python', 'swift', 'php'],
    ['ruby', 'assembly', 'c++']
];

console.log(linguagens[2][0]); /* imprimindo um array dentro de outro */

/* */
var colors=['red', 'orange', 'yellow', 'grenn']; /* percorrer todos os elementos de um array */
for(var i=0; i<colors.length; i++){
    console.log(colors[i])
}

/* */

var colors2=['red', 'orange', 'yellow', 'grenn']; /* percorrer todos os elementos de um array com foreach */
colors2.forEach(function(cor){
    console.log(cor);
})
/* */
var numbers=[1,2,3,4,5,6,7,8,9,10]; /* imprimindo numeros divisiveis por 3 com foreach */
numbers.forEach(function(numeros){
    if (numbers % 3===0);{
        console.log(numeros);
    }
})
