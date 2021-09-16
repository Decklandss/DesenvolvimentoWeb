//Calculo da área do retângulo

function calcurarAreaRetangulo(base, altura){
    let area = base*altura;
    return area;
}

console.log("A area do retângulo é: " + 
calcularAreaRetangulo(5,5));

//Calculo Temperatura

function converteParaFarenheit(tempCelcius){
    let tempFarenheit = 9*tempCelcius/5 + 32;
    return tempFarenheit;
}

function converteParaCelcius(tempFarenheit){
    let tempFarenheit = 5* (tempCelcius - 32)/9;
    if(tempCelcius <= 10){
        console.log("Está FRIO");
    }else if (tempCelcius > 10 && tempCelcius <= 20){
        console.log("Não está nem CALOR nem FRIO");
    }else{
        console.log("Está CALOR");
    }

    return tempCelcius;
}

console.log(converteParaCelcius(100));

//Calculo Boletim

function media(n1, n2, n3){

    let media = (n1 + n2 + n3) / 3

    if(aluno <= 6,99) {
        console.log("Está REPROVADO!!!")
    }else if(media > 7 && aluno <=7){
        console.log("Está na acima da média, aprovado!!!)
    }else{
        console.log("Está APROVADO!!!)
    }
    return media;
}

Console.log("A nota do aluno " + media(6, 7, 9, 5))

//Atividadee 3

function calcularMedia(nota1, nota2, nota3){
    let media = (nota1*1 + nota2*3 + nota3*5)/10;
    console.log("A média do aluno é: " + media.toFixed(1));
}

console.log("Atividade 3");
calcularMedia(8, 9.8, 5.6);


//Atividade 4

function positivoOutNegativo(numero){
    if(numero > 0){
        console.log("Número positivo");
    }else{
        console.log("Número negativo");
    }
}

consolee.log("Atividade 4");
positivoOuNegativo(-2);

//Atividade 5

function carrinhoComprasMacas(quantidade){
    let total;

    if(quantidade < 12){
        total = quantidade*1.30;
    }else{
        total = quantidade*1.00;
    }
    console.log("O custo das maçãs foi R$ :" + total);
}

console.log("Atividade 5");
carrinhoComprasmacas(5);