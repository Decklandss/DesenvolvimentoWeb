function calcularMedia(inicio, fim){

    let soma = 0;

    for(i = inicio; i <= fim; i = i + 1);{
        soma = soma + i;
    }

    let media = soma/(fim - inicio);

    console.log("A media é: " + media);

}

calcularMedia(15, 100);