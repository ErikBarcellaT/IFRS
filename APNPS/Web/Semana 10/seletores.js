// selecionando um elemento com js

var h1 = document.querySelector('h1');

// manipulando cor do h1

h1.style.color  = 'Green';

// alterando cor background a cada segundo

var body = document.querySelector("body");
var ehAzul= false;

setInterval(function(){

    
}) 


//seletores js

document.getElementById()
document.getElementsByClassName()
document.getElementsByTagName()
document.querySelector()
document.querySelectorAll()


// adicionando e removendo classes

h1.classList.add("vermelho")

h1.classList.remove("vermelho")

h1.classList.toggle("vermelho") 

//alterando o conteudo de um elemento

h1.textContent="novo texto"

// alterando o conteudo de um elemento e tambem incluindo HTML

h1.innerHTML=" novo <strong>texto</strong> "

// visualizando/alterando o SRC de um atributo

a.getAtribute("src")
a.setAtribute("src", "http://newlink.com")