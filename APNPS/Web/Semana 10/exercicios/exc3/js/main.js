var botaoMais = document.querySelector("#acrescenta");
var botaoMenos= document.querySelector("#decrementa");
var botaoMais2 = document.querySelector("#acrescenta2");
var botaoMenos2= document.querySelector("#decrementa2");
var camisetaMasculina = parseInt(document.getElementById("camisetaMasculina").value);
var camisetaFeminina= parseInt(document.getElementById("camisetaFeminina").value);
var total=parseInt(document.getElementById("total").value);
var concluir=document.querySelector("#concluir");
document.getElementById("nome").addeEventListener("blur", validaNome);



botaoMais.addEventListener("click", aumenta)
botaoMenos.addEventListener("click", decrementa)
botaoMais2.addEventListener("click", aumenta2)
botaoMenos2.addEventListener("click", decrementa2)
botaoMais.addEventListener("click", totalizando)
botaoMenos.addEventListener("click", totalizando)
botaoMais2.addEventListener("click", totalizando)
botaoMenos2.addEventListener("click", totalizando)
concluir.addEventListener("click", compra)


function validaNome(){
  var nome= document.getElementById("nome").value;
  if(nome.lenght<2){
    
  }
}

function aumenta(){
  parseInt(document.getElementById('camisetaMasculina').value=camisetaMasculina+=1);

}
function decrementa(){
  if(camisetaMasculina>0){
  parseInt(document.getElementById('camisetaMasculina').value=camisetaMasculina-=1);
}
}


function aumenta2(){
  parseInt(document.getElementById('camisetaFeminina').value=camisetaFeminina+=1);

}
function decrementa2(){
  if(camisetaFeminina>0){
  parseInt(document.getElementById('camisetaFeminina').value=camisetaFeminina-=1);
}
}

function totalizando(){
  parseInt(document.getElementById('total').value=(camisetaMasculina*25)+(camisetaFeminina*20))

}

function compra(){
   if((camisetaFeminina==0)&&(camisetaMasculina==0)){
    alert("Voce deve selecionar ao menos uma camiseta");
   } else{
  alert("Compra realizada com sucesso");
}
}

