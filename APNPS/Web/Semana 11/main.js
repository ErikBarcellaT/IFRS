var adicionar = document.querySelector('#add')

adicionar.addEventListener("click", adicionarLi)


function adicionarLi(){
    var li = document.createElement("li");
    var input= document.createElement("input");
    var edit= document.createElement("button")
    var delet=document.createElement("button");
    edit.setAttribute('id', 'delete');
    delet.setAttribute('id', 'delete');
    input.setAttribute('type', 'checkbox');
    var newTask= prompt("Digite a tarefa");
    var textLi= document.createTextNode(newTask);
    var textEdit= document.createTextNode("Editar");
    var textDelet= document.createTextNode("Deletar");
    edit.appendChild(textEdit);
    delet.appendChild(textDelet);
    li.appendChild(input);
    li.appendChild(textLi);
    li.appendChild(edit);
    li.appendChild(delet);
    document.getElementById("pendentes").appendChild(li);
}

function adicionaUm(){
    console.log("funciona");
}