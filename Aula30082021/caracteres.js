function contarCaracteres(){
    const readline = require('readline');
    let rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.question("Qual o seu nome?", function(nome){
        console.log("O tamanho do seu nome é: ", 
        nome.length); 
        rl.close();
    
    })
}

contarCaracteres();