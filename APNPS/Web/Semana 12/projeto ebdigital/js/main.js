var pass = document.querySelector('#pass');
var newPassword = document.querySelector('#newPassword')

function generatePass () {
    newPassword.innerHTML='';
   
    if(pass.value==='0' || pass.value===''){
        alert('O tamanho da senha não pode ser igual a zero')
        return;
    } else if(pass.value <8) {
        alert('Não recomendamos uma senha com menos de 8 caracteres');

    }
    var charset ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@*?#$";
    var password ="";

    for(var i =0, n=charset.length; i<pass.value; i++){
        password += charset.charAt( Math.floor(Math.random()*n));
    }
    var result = document.createTextNode(password);
    return newPassword.appendChild(result);

};