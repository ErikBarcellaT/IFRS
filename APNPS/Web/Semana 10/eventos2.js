var botao = document.querySelector("button");
var paragrafo= document.querySelector("p")
botao.addEventListener("click", alteraTexto);

function alteraTexto(){
    paragrafo.textContent ='alguém clicou no botão!'
}
