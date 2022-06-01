int main(){

    int code, born, age, ingressDate, workTime;
    char name[50];

    printf("Digite o nome: \n");
    scanf("%s", &name);

    printf("Digite o ano de nascimento: \n");
    scanf("%d", &born);

    printf("Digite o ano de ingresso na empresa: \n");
    scanf("%d", &ingressDate);

    age = 2022 - born;
    workTime = 2022 - ingressDate;

    if(age >= 65 || workTime >= 30 || (age >= 60 && workTime >= 25)){

        printf("Idade: %d\n", age);
        printf("Tempo de trabalho: %d\n", workTime);
        printf("-----------------------------------\n");
        printf("Requerer aposentadoria");
    }
    else{

        printf("Idade: %d\n", age);
        printf("Tempo de trabalho: %d\n", workTime);
        printf("-----------------------------------\n");
        printf("Nao requerer aposentadoria");
    }
}