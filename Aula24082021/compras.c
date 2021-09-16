//Calculo Compras

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