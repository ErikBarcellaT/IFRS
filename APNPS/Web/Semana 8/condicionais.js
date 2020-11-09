var palavra1="oi";
var palavra2="Osório";
var palavra3="otorrinolaringologista";

var palavra =palavra1;

if (palavra.length <=3) {
    console.log("Palavra pequena");
} else if (palavra.length <10) {              /* No segundo laço else if verificamos apenas se a palavra for menor que 10 pois já passou pelo primeiro if onde nos mostra que ela é maior que 3 não precisa de uma condicional && e  */
    console.log("Palavra media");      
} else {
    console.log("Palavra Grande");
}