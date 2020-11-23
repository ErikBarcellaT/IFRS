var pessoa ={
    nome: "Bill",
    idade: 20,
    cidade: "Osório"
}

//acessando um atributo de objeto

console.log(pessoa['nome']);

//de outra maneira
console.log(pessoa.idade);

//adicionando atributos

pessoa.cpf="000.000.000-00";

console.log(pessoa)

var pessoa = {
    idade: 20,
    cidade:"Osório",
    nome:{
        primeiro: "Bill",
        meio: "Jones",
        ultimo: "da Silva",
    },
    nomeCompleto: function() {
        return this.nome.primeiro+' '
        +this.nome.meio+''
        +this.nome.ultimo+'.';
    }
}

