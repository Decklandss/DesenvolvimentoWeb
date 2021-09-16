function podeeAposentar(anoNascimento, anoInicioTrabalho){
    
    let data = new Date();
    let ano = data.getFullYear();
    
    let idade = 2021 - anoNascimento;
    let tempoTrabalho = 2022 - anoInicioTrabalho;

    if (idade >= 65 || tempoTrabalho >= 30){
        console.log("Requerer aposentadoria!");
    }else if(idade >= 60 && tempoTrabalho >= 25){
        console.log("Requerer aposentaria");
    }else{
        console.log("Não pode requerer aposentaria");
    }

}

podeAposentar(1985, 2010);