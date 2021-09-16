let x = 40
let semana = 4

function f40Horas(numeroHorasTrabalhadas, salarioPorHora){
    let horasExtras;
    
    let horasExtras;

    if(numeroHorasTrabalhadas > 160){
        horasExtras = numeroHorasTrabalhadas - 160;
    }else{
        horasExtras = 0;
    }

    let salario = 160*salarioPorHora + horasExtras*salarioPorHora*1.5;

    console.log("O salário do empregado é: R$" + salario);
    console.log("Quantidade de horas extras: " + horasExtras);

}

calculaSalario(100, 30.00)