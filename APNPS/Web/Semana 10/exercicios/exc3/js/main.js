var botaoMais = document.querySelector("#acrescenta");
var botaoMenos= document.querySelector("#decrementa");
var botaoMais2 = document.querySelector("#acrescenta2");
var botaoMenos2= document.querySelector("#decrementa2");
var camisetaMasculina = parseInt(document.getElementById("camisetaMasculina").value)
var camisetaFeminina= parseInt(document.getElementById("camisetaFeminina").value)


botaoMais.addEventListener("click", aumenta)
botaoMenos.addEventListener("click", decrementa)
botaoMais2.addEventListener("click", aumenta2)
botaoMenos2.addEventListener("click", decrementa2)

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