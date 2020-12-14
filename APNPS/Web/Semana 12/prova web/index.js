var random= getRndInteger(1,10);
var check= document.querySelector("#checarRespostas");
var resultado_primeira_e_segunda_soma ;
var resultado_terceira_e_quarta_soma;
var resultado_primeira_e_segunda_subtração;
var resultado_terceira_e_quarta_subtração;
var resultado_primeira_e_segunda_multiplicação;
var resultado_terceira_e_quarta_multiplicação;
var check = document.querySelector('#checarRespostas');
var jogar_novamente= document.querySelector('#jogarNovamente');
var acertos= [];
var erros =[];

window.addEventListener('load', random_soma);
window.addEventListener('load', random_subtração);
window.addEventListener('load', random_multiplicação);
check.addEventListener('click', verificaResultado);
jogar_novamente.addEventListener('click', novo_jogo);

 function random_soma(){
    document.querySelector('#primeira_soma').textContent=getRndInteger(1,10);
    document.querySelector('#segunda_soma').textContent=getRndInteger(1,10);
    document.querySelector('#terceira_soma').textContent=getRndInteger(1,10);
    document.querySelector('#quarta_soma').textContent=getRndInteger(1,10);
    var primeira = parseInt(document.getElementById("primeira_soma").textContent);
    var segunda = parseInt(document.getElementById('segunda_soma').textContent);
    var terceira = parseInt(document.getElementById('terceira_soma').textContent);
    var quarta= parseInt(document.getElementById('quarta_soma').textContent);
    resultado_primeira_e_segunda_soma=primeira+segunda;
    resultado_terceira_e_quarta_soma=terceira+quarta;

    
}

function random_subtração(){
    document.querySelector('#primeira_subtração').textContent=getRndInteger(1,10);
    document.querySelector('#segunda_subtração').textContent=getRndInteger(1,10);
    document.querySelector('#terceira_subtração').textContent=getRndInteger(1,10);
    document.querySelector('#quarta_subtração').textContent=getRndInteger(1,10);
    var primeira = parseInt(document.getElementById('primeira_subtração').textContent);
    var segunda = parseInt(document.getElementById('segunda_subtração').textContent);
    var terceira = parseInt(document.getElementById('terceira_subtração').textContent);
    var quarta = parseInt(document.getElementById('quarta_subtração').textContent);
    resultado_primeira_e_segunda_subtração = primeira-segunda;
    resultado_terceira_e_quarta_subtração = terceira-quarta;
 
}
function random_multiplicação(){
    document.querySelector('#primeira_multiplicação').textContent=getRndInteger(1,10);
    document.querySelector('#segunda_multiplicação').textContent=getRndInteger(1,10);
    document.querySelector('#terceira_multiplicação').textContent=getRndInteger(1,10);
    document.querySelector('#quarta_multiplicação').textContent=getRndInteger(1,10);
    var primeira = parseInt(document.getElementById('primeira_multiplicação').textContent);
    var segunda = parseInt(document.getElementById('segunda_multiplicação').textContent);
    var terceira = parseInt(document.getElementById('terceira_multiplicação').textContent);
    var quarta = parseInt(document.getElementById('quarta_multiplicação').textContent);
    resultado_primeira_e_segunda_multiplicação=primeira*segunda;
    resultado_terceira_e_quarta_multiplicação=terceira*quarta;
  
}


function getRndInteger(min, max) {
    return Math.floor(Math.random() * (max - min + 1) ) + min;
  }

function verificaResultado(){
    var tentativa_primeira_soma = document.querySelector('#tentativa_primeira_soma').value;
    var tentativa_segunda_soma= document.querySelector('#tentativa_segunda_soma').value;
    var tentativa_primeira_subtração = document.querySelector('#tentativa_primeira_subtração').value;
    var tentativa_segunda_subtração = document.querySelector('#tentativa_segunda_subtração').value;
    var tentativa_primeira_multiplicação = document.querySelector('#tentativa_primeira_multiplicação').value;
    var tentativa_segunda_multiplicação = document.querySelector('#tentativa_segunda_multiplicação').value;
    var t_p_soma = document.querySelector('#tentativa_primeira_soma');
    var t_s_soma= document.querySelector('#tentativa_segunda_soma');
    var t_p_subtração = document.querySelector('#tentativa_primeira_subtração');
    var t_s_subtração = document.querySelector('#tentativa_segunda_subtração');
    var t_p_multiplicação = document.querySelector('#tentativa_primeira_multiplicação');
    var t_s_multiplicação = document.querySelector('#tentativa_segunda_multiplicação');
   if(tentativa_primeira_soma == resultado_primeira_e_segunda_soma){
        t_p_soma.style.color='green';
        acertos.push(t_p_soma);
        
   } else {
       t_p_soma.style.color='red';
       erros.push(t_p_soma);
   }
   if(tentativa_segunda_soma == resultado_terceira_e_quarta_soma){
    t_s_soma.style.color='green';
    acertos.push(t_s_soma);
    
} else {
   t_s_soma.style.color='red';
   erros.push(t_s_soma);
}if(tentativa_primeira_subtração == resultado_primeira_e_segunda_subtração){
    t_p_subtração.style.color='green';
    acertos.push(t_p_subtração);
} else {
   t_p_subtração.style.color='red';
   erros.push(t_p_subtração);
}if(tentativa_segunda_subtração == resultado_terceira_e_quarta_subtração){
    t_s_subtração.style.color='green';
    acertos.push(t_s_subtração);
} else {
   t_s_subtração.style.color='red';
   erros.push(t_s_subtração)
}if(tentativa_primeira_multiplicação == resultado_primeira_e_segunda_multiplicação){
    t_p_multiplicação.style.color='green';
    acertos.push(t_p_multiplicação);
} else {
   t_p_multiplicação.style.color='red';
   erros.push(t_p_multiplicação);
}if(tentativa_segunda_multiplicação == resultado_terceira_e_quarta_multiplicação){
    t_s_multiplicação.style.color='green';
    acertos.push(t_s_multiplicação);
} else {
   t_s_multiplicação.style.color='red';
   erros.push(t_s_multiplicação);
}
alert("Você acertou: "+ acertos.length + ' questões ' + ' e errou: ' + erros.length+ ' questões');
}

function novo_jogo(){
    window.location.reload();
}