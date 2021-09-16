//Calculo Boletim

function media(n1, n2, n3){

    let media = (n1 + n2 + n3) / 3

    if(aluno <= 6,99) {
        console.log("Está REPROVADO!!!")
    }else if(media > 7 && aluno <=7){
        console.log("Está na acima da média, aprovado!!!")
    }else{
        console.log("Está APROVADO!!!")
    }
    return media;
}

Console.log("A nota do aluno " + media(6, 7, 9, 5))