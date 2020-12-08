var adicionar = document.querySelector('#add');
var elementos = document.querySelectorAll(".pendentes")
var lerLivro = document.querySelector("#Lerlivro")


adicionar.addEventListener('click', addNewTask);
lerLivro.addEventListener('click', valida)


for(var i of elementos){
    i.addEventListener('click', function valida(){
        if(this.checked){
            console.log('caixa marcada');
        } else{
            console.log('caixa não marcada');
        }
    }
    );
  }


function addNewTask(){
    newTask= prompt("Digite a nova tarefa");
    var li = document.createElement("li");
    var input= document.createElement("input");
    input.setAttribute('type', 'checkbox');
    input.setAttribute('class', 'pendentes')
    var textLi= document.createTextNode(newTask);
    li.appendChild(input);
    li.appendChild(textLi);
    document.getElementById("tasksPend").appendChild(li);
}


function valida(){
        if(this.checked){
            console.log('caixa marcada');
        } else{
            console.log('caixa não marcada');
        }
    }


/* function addTaskCheck (){
    concluidas.innerHTML= '<li>' + '<input type=checkbox>' + newTask + '</li>'

} */









