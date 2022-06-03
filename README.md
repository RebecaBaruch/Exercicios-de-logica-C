# Exercicios-de-logica-C
 Neste repositório você irá encontrar exercícios que resolvi para praticar lógica de programação.
 
 **Linguagem utilizada**: C

## Enunciados:

### **Ex01** ✔️ <br>
Escrever um algoritmo que exiba os números enquanto forem menores que 30. <br>

```
int main(){

    int i = 1;

    while(i <= 30){

        printf("%d \n", i);
        i++;
    }
}
```

### **Ex02** ✔️ <br>
Escrever um algoritmo que leia *n* números e efetue a multiplicação entre o atual e o anterior. A condição de saída será quando o usuário digitar *0*. <br>

```
int main(){

    int n, atual, anterior = 1, result, stop = 0, i = 0;

    while(n != stop){
        
        printf("Digite um numero: ");
        scanf("%d", &n);
        
        atual = n;
       
        if(atual != stop){
            result = atual * anterior;
            anterior = result;
        } 
        printf("%d\n", result);

        i++;
    }

}
```
### **Ex03** ✔️ <br>
Fazer um algoritmo que leia 5 números e mostre a média entre eles.<br>

```
int main(){

    int n, i = 1, sum = 0, avg;

    while(i <= 5){

        printf("Digite um numero: \n");
        scanf("%d", &n);

        sum = (sum + n);

        if(i == 5){
             avg = (sum / 5);
            printf("A media dos numeros eh: %d\n", avg);
        }
        
        i++;
    }
}
```

### **Ex04** ✔️ <br>
Escrever um algoritmo que determine **quais** e **quantos** são os divisores de um número *n*.<br>

```
int main(){

    int i = 1, divider, n, count = 0;
    double rest;

    printf("Digite um numero: ");
    scanf("%d", &n);

    divider = n;

    printf("Divisores: \n");

    while(divider >= 1){
        
        rest = (n % divider);

        if(rest == 0){
            
            //mostra os divisores e contabiliza eles
            printf("%d\n", divider);
            count++;    
        }

        divider--;
        
        i++;
    }

    printf("Quantidade de divisores: %d", count);
}
```

### **Ex05** ✔️ <br>
Escrever um algoritmo que realize a potência de *A* por *B*, através de multiplicações. Ex.: "4 elevado a 3" -> *4 x 4 x 4* <br>

```
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
```

### **Ex06** ✔️ <br>
Escrever um algoritmo que calcule e imprima a *tabuada do 8*. <br>

```
int main(){

    int numberH = 8, i = 1, product;

    printf("Se liga na tabuada do 8: \n");

    while(i <= 10){

        product = numberH * i;
        printf("8 x %d = %d\n", i, product);

        i++;
    }
}
```

### **Ex07** ✔️ <br>
Escrever um algoritmo que calcule e escreva a média aritmética dos números inteiros *entre 15 e 100* (inclusive ambos). <br>

```
int main(){

    int i = 0, sum, avg;

    while(i <= 100){

        sum = 15 + (15 + i);

        i++;
    }

    avg = sum / (100 - 14);

    printf("A media aritmetica dos numeros entre 15 e 100 (incluindo eles) eh: %d\n", avg);

}
```

### **Ex08** ✔️ <br>
Escrever um algoritmo para calcular o *índice de massa corpórea* (IMC) e mostrar os resultados do **índice** e da **condição** de acordo com o sexo. <br>

```
int main(){
    
    int sexCode;

    double altura, peso, imc, 
    underFem = 19.1, 
    underMasc = 20.7, 
    idealFem = 25.8, 
    idealMasc = 26.4, 
    sftOverFem = 27.3, 
    sftOverMasc = 27.8,
    overFem = 32.3,
    overMasc = 31.1;

    printf("Digite o codigo correspondente ao sexo: \n 1 - Feminino\n 2 - Masculino\n");
    scanf("%d", &sexCode);

    printf("Digite o peso: \n");
    scanf("%lf", &peso);

    printf("Digite a altura: \n");
    scanf("%lf", &altura);

    imc = (peso / pow(altura, 2));
    
    printf("IMC = %lfkg/m2\n", imc);

    if(sexCode == 1){

        if (imc < underFem)
        {

           printf("Abaixo do peso"); 
        } 
        else if((imc == underFem || imc > underFem) && (imc < idealFem || imc == idealFem)){

           printf("Peso normal"); 
        }
        else if((imc > idealFem) && (imc < sftOverFem || imc == sftOverFem)){

           printf("Marginalmente acima do peso ideal"); 
        }  
        else if((imc > sftOverFem) && (imc < overFem || imc == overFem)){

           printf("Acima do peso ideal"); 
        }  
        else if(imc > overFem){

           printf("Obesa"); 
        }  
    } 
    if(sexCode == 2){

        if (imc < underMasc)
        {

           printf("Abaixo do peso"); 
        } 
        else if((imc == underMasc || imc > underMasc) && (imc < idealMasc || imc == idealMasc)){

           printf("Peso normal"); 
        }
        else if((imc > idealMasc) && (imc < sftOverMasc || imc == sftOverMasc)){

           printf("Marginalmente acima do peso ideal"); 
        }  
        else if((imc > sftOverMasc) && (imc < overMasc || imc == overMasc)){

           printf("Acima do peso ideal"); 
        }  
        else if(imc > overMasc){

           printf("Obeso"); 
        }  
    } 

}
```

### **Ex09** ✔️ <br>
Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não. 
Para estar em condições, um dos seguintes requisitos deve ser satisfeito: 

- ter no mínimo **65** anos de idade
- ter trabalhado no mínimo **30** anos
- ter no mínimo **65** anos e ter trabalhado no mínimo **25** anos

Fazer um algoritmo que leia: 

- o número do empregado (código)
- o ano do seu nascimento
- ano de ingresso na empresa

O programa deve escrever a idade e o tempo de trabalho do empregado e a mensagem *"Requer aposentadoria"* ou *"Não requer aposentadoria"*. <br>

```
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
```

### **Ex10** ✔️ <br>

Um posto está vendendo combustíveis com a seguinte da tabela de descontos:

- Álcool acima de 20 litros, 5% por litro
- Álcool até 20 litros, desconto de 4% por litro
- Gasolina acima de 20 litros, desconto de 6% por litro

Escreva um algoritmo que leia o **número de litros vendidos** e o **tipo de combustível**, e calcule e imprima o valor a ser pago pelo cliente, sabendo-se que o preço do litro da gasolina é **R$3,30** e o preço do litro é **R$2,90**. <br>

```
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
```
