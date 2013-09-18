//
//  main.c
//  DemoObjeto
//
//  Created by Henry AT on 9/17/13.
//  Copyright (c) 2013 Henry AT. All rights reserved.
//

#include <stdio.h>
#include "Linea.h"

int main(int argc, const char * argv[])
{

    // insert code here...
    @autoreleasepool {
        float tamaniolinea = [Linea tamanioDesdeX1:20 yY1:30 haciaX2:15 yY2:19];
        print("Tamaño de linea %g\n",tamaniolinea);
    
        //Instanciando el objeto miLinea
        Linea *miLinea = [[Linea alloc] init];
        
        // Use los metodos setter
        miLinea.inicioX = 50;
        miLinea.inicioY = 50;
        miLinea.finX = 100;
        miLinea.finX = 100;
        printf("(%g, %g) (%g, %g)\n", miLinea.inicioX,miLinea.inicioY,
                                      miLinea.finX,miLinea.finY);
        printf("La pendiente es %g.\n",[miLinea pendiente]);
    
    }
    return 0;
}

