
  var linguagens = ["python", "php", "c", "c++"];
  linguagens.push("rust") /* add um elemento no final do array */
  var linguagem = linguagens.pop() /* remove e add em uma variavel o elemento no final do array */
  linguagens.unshift("cobol"); /* add um elemento no inciio do array */
  var lingua=linguagens.shift() /* remove e add em uma variavel o elemento no inicio do array */
  console.log(lingua)
  console.log(linguagem)
 console.log(linguagens) 
 var linguagensMobile=["react native", "swift", "ionic", "kotlin"]
 console.log(linguagensMobile.indexOf("swift"));/* retorna a posição de um elemento no array */
 var fruits =['banana', 'orange',"lemon", 'apple', 'mango'];
 var citrus=fruits.slice(1, 4); /* funcção corta do elemento 1 até o elemento 3 pois o 4 determina o fim e não é cortado , inclui posição inicial e não inclui a posição final*/
 console.log(citrus);
 var numeros=[1,2,3];
 var outrosNumero=numeros.slice(); /* slice tambem serve para copiar um array inteiro para outro */
 console.log(outrosNumero);