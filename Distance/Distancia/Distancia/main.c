//
//  main.c
//  Distancia
//
//  Created by Henry AT on 9/17/13.
//  Copyright (c) 2013 Henry AT. All rights reserved.
//

#include <stdio.h>
#include <math.h> // para raiz y funciones de exponentes

int main(int argc, const char * argv[])
{

    // typedef para un punto
    typedef struct {
        int coordenadaX, coordenadaY;
        char nombre[20];
    } punto;
    
    //Declare 2 variable de tipo punto, y un flotante para mantener la distancia
    punto punto1, punto2;
    float distancia;
    
    // Obtener punto, note que usamos puntero para pasar los valores en el scanf
    printf("Nombre del primer punto: ");
    scanf("%s", punto1.nombre);
    printf("Coordenada X del 1er punto");
    scanf("%d", &punto1.coordenadaX);
    printf("Coordernada Y del 1er punto");
    scanf("%d", &punto1.coordenadaY);
    
    printf("Nombre del segundo punto: ");
    scanf("%s", punto2.nombre);
    printf("Coordenada X del 2do punto");
    scanf("%d", &punto2.coordenadaX);
    printf("Coordernada Y del 2do punto");
    scanf("%d", &punto2.coordenadaY);
    
    //calcular la distancia
    
    distancia = sqrt(pow(punto2.coordenadaX-punto1.coordenadaX, 2)+
                     pow(punto2.coordenadaY-punto1.coordenadaY, 2));
    
    // Salida de la informacion
    printf("\nLa distancia entre %s y %s es %g\n",punto1.nombre, punto2.nombre, distancia);
    return 0;
}

