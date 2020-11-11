var str;           /* palavra de tras para frente */

str = prompt("Digite uma palavra ");

for(i=str.length-1; i>=0; i--){
    console.log(str[i]);
}

function checkPalindrome(str) {     
    for(var i = 0; i < str.length / 2; i++) if (str[i] != str[str.length - i - 1]) return false;
    return true;
}

if(checkPalindrome(str)==true){
    alert("a palavra "+ str + " é um palindromo ");
} else {
    alert("a palavra "+ str + " NÃO é um palindromo");
}