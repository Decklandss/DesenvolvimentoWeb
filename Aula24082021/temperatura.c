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