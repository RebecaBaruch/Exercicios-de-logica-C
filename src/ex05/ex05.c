int main(){

    int i = 1, a, b, newA, potency;

    printf("Digite o numero correspondente a base: \n");
    scanf("%d", &a);

    printf("Digite o numero correspondente ao expoente: \n");
    scanf("%d", &b);   

    newA =  a;

    while(i <= (b-1)){

        potency = newA * a;
        newA = potency;
        
        i++;
    }
    
    printf("O resultado da potencia é: %d\n", potency);
}