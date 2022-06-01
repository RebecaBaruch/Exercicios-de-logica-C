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