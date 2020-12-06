var adicionar = document.querySelector('#add')
var tasksPendentes=[];
var tasksConcluidas=[];
var newTask;


adicionar.addEventListener('click', addNewTask);
adicionar.addEventListener('click', addTaskCheck);


function addNewTask(){
    
    newTask= prompt("Digite a nova tarefa");
    var li = document.createElement("li");
    var input= document.createElement("input");
    input.setAttribute('id', newTask);
    input.setAttribute('type', 'checkbox');
    input.setAttribute('onclick', valida);
    var textLi= document.createTextNode(newTask);
    li.appendChild(input);
    li.appendChild(textLi);
    document.getElementById("pendentes").appendChild(li);
    tasksPendentes.push(li);

   
}
    

function valida(){

        if(newTask.checked){
            console.log('caixa marcada');
        } else{
            console.log('caixa não marcada');
        }
    }

function addTaskCheck (){
    concluidas.innerHTML= '<li>' + '<input type=checkbox>' +newTask + '</li>'

}











/* var adicionar = document.querySelector('#add')
var newTask;
var check= document.getElementById(newTask);
adicionar.addEventListener("click", adicionarLi);
check.addEventListener('click', valida);


function adicionarLi(){
    var li = document.createElement("li");
    var input= document.createElement("input");
    input.setAttribute('type', 'checkbox');
    newTask= prompt("Digite a tarefa");
    input.setAttribute('id', newTask);
    input.setAttribute('classname', 'pend');
    var textLi= document.createTextNode(newTask);
    li.appendChild(input);
    li.appendChild(textLi);
    document.getElementById("pendentes").appendChild(li);
    
}



var arr = []


function valida(){

    if(check.checked){
        console.log('caixa marcada');
    } else{
        console.log('caixa não marcada');
    }
}



function adicionarPendentes(){
    
}


 */