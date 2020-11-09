var idade;
alert("Bem vindo ao evento ");
idade = prompt("Informe sua idade: ");

if(idade<16) {
    alert("Não pode entrar no evento. ");
} else if(idade>=16 && idade<18) {
    alert("Pode entrar mas não pode beber. ");
} else {
    alert("Pode entrar no evento e beber ");
    alert("Se beber não dirija! "); 

}