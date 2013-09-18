//
//  Linea.m
//  DemoObjeto
//
//  Created by Henry AT on 9/17/13.
//  Copyright (c) 2013 Henry AT. All rights reserved.
//

#import "Linea.h"

@implementation Linea

@synthesize inicioX, inicioY, finX, finY;


///////////////////////////////////////////////////

- (void)dibujo {
  // Dibukar la linea aqui
}

- (float)pendiente {
    //
    return (self.finY - self.inicioY) / (self.finX - self.inicioX);
}

+(float)tamanioDesdeX1:(float)x1 yY1:(float)y1 haciaX2:(float)x2 yY2:(float)y2 {
    return sqrt( pow(x2-x1,2) + pow(y2-y1,2) );
}

-(id)init {
    self = [super init];
    if (self) {
        // Inicializacion del codigo Aqui.
    }
}

@end
