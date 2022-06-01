int main(){

    int i = 0, sum, avg;

    while(i <= 100){

        sum = 15 + (15 + i);

        i++;
    }

    avg = sum / (100 - 14);

    printf("A media aritmetica dos numeros entre 15 e 100 (incluindo eles) eh: %d\n", avg);

}