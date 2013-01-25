//
//  Anotacion.h
//  Location
//
//  Created by Henry AT on 25-01-13.
//  Copyright (c) 2013 Apps4s. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>


@interface Anotacion : NSObject <MKAnnotation>

@property CLLocationCoordinate2D coordenada;

@end
