int main(){

    double litros, glPrice = 3.30, alPrice = 2.90, price, finalPrice;
    int type;

    printf("Digite o tipo de combustivel: \n 1 - Alcool\n 2 - Gasolina");
    scanf("%d", &type);

    printf("Digite a quantidade em litros: \n");
    scanf("%lf", &litros);

    
    if(type == 1){

        price = litros * alPrice;

        if(litros <= 20){

            finalPrice = price - (price * 0.04);

            printf("Preco: R$%lf\n", finalPrice);
        }
        else if(litros > 20){

            finalPrice = price - (price * 0.05);

            printf("Preco: R$%lf", finalPrice);
        }
    }
    else if(type == 2){

        price = litros * glPrice;

        if(litros <=20){

            finalPrice = price - (price * 0.06);

            printf("Preco: R$%lf", finalPrice);
        }
    }
}