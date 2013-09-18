//
//  Linea.h
//  DemoObjeto
//
//  Created by Henry AT on 9/17/13.
//  Copyright (c) 2013 Henry AT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <stdlib.h>

@interface Linea : NSObject

@property (nonatomic) float inicioX;
@property (nonatomic) float inicioY;
@property (nonatomic) float finX;
@property (nonatomic) float finY;

- (void)dibujo;
- (float)pendiente;
+(float)tamanioDesdeX1:(float)x1 yY1:(float)y1 haciaX2:(float)x2 yY2:(float)y2;

@end
