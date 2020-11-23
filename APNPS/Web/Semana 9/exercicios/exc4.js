var palavra= prompt("Digite uma palavra no formato churrasquinho-case para conversão em snake_case");
resultado= palavra.replace(/-/g, "_");

alert(palavra + " convetido para snake_case: " + resultado);
