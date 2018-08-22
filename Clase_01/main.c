#include <stdio.h>
#include <stdlib.h>

 int main()
{
     int numeroUno ;
     int numeroDos ;
     int numeroTres ;
     int numeroDelMedio ;
     int maximo ;
     int minimo ;

    printf("ingrese numero: ") ;
    scanf("%d" , &numeroUno) ;
    printf("ingrese numero: ") ;
    scanf("%d" , &numeroDos) ;
    printf("ingrese numero :") ;
    scanf("%d" , &numeroTres) ;
    maximo = numeroUno ;
    minimo = numeroUno ;
    if (numeroDos < minimo && numeroTres > maximo ){
        maximo = numeroTres ;
        minimo = numeroDos ;
    }
    else if (numeroTres < minimo && numeroDos > maximo) {
        maximo = numeroDos ;
        minimo = numeroTres ;
    }
    else {
        printf("no existe numero del medio") ;
    }
    if (numeroUno > numeroDos && numeroUno < numeroTres || numeroUno < numeroDos && numeroUno > numeroTres) {
        numeroDelMedio = numeroUno ;
    }
    else if (numeroDos < numeroTres && numeroDos > numeroUno || numeroDos > numeroTres && numeroDos < numeroUno) {
        numeroDelMedio = numeroDos ;
    }
    else {
        numeroDelMedio = numeroTres ;
    }
    printf("el numero del medio sera :  %d" , numeroDelMedio) ;


}


