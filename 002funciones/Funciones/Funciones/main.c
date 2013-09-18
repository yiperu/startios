//
//  main.c
//  Funciones
//
//  Created by Henry AT on 9/17/13.
//  Copyright (c) 2013 Henry AT. All rights reserved.
//

#include <stdio.h>
#include "misFunciones.h"


int main(int argc, const char * argv[])
{

    // insert code here...
    int n1 = 4;
    int n2 = 7;
    int resultado;
    
    resultado = add(n1, n2);
    printf("La suma de %d mas %d es %d \n\n",n1,n2,resultado);
    
    printf("Antes de intercambiar n1 es %d, n2 es %d \n\n",n1,n2);
    intercambiar(&n1, &n2);
    printf("Despues de intercambiar n1 es %d, n2 es %d \n\n",n1,n2);
    
    return 0;
}

int add(int num1, int num2) {
    return num1 + num2;
}

void intercambiar(int *num1, int *num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}