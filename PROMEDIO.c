#include<stdio.h>

float promedio(float n1, float n2, float n3);
int main (){


    float p1,p2,p3;



    float pf;
    printf("ingrese Parcial 1: ");
    scanf("%f",&p1);



      printf("ingrese Parcial 2: ");
    scanf("%f",&p2);

      printf("ingrese Parcial 3: ");
    scanf("%f",&p3);




    pf = promedio(p1,p2,p3);
    printf("promedio total =%2f\n",pf);

if (pf > 13.99) {
        printf("Estado: APRUEBA\n");
    } else if (pf >= 11.0 && pf <= 13.99) {
        printf("Estado: REPRUEBA\n");
    } else {
        printf("Estado: SUPLETORIO\n");
    }

        return 0;


}

float promedio (float n1, float n2, float n3){
     float resultado;


    resultado = (n1+n2+n3) /3 ;
    return resultado;
}
