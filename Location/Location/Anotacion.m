//
//  Anotacion.m
//  Location
//
//  Created by Juan Gac on 25-01-13.
//  Copyright (c) 2013 Apps4s. All rights reserved.
//

#import "Anotacion.h"

@implementation Anotacion



-(CLLocationCoordinate2D) coordinate{

    return self.coordenada;
}

-(NSString *) title{
    return @"Aqui estamos";
}

-(NSString *)subtitle{

    return @"Posicion encontrada por tu equipo";
}

@end
