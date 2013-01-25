//
//  ViewController.m
//  Location
//
//  Created by Juan Gac on 22-01-13.
//  Copyright (c) 2013 Apps4s. All rights reserved.
//

#import "ViewController.h"
#import "Anotacion.h"


@implementation ViewController

@synthesize manager;


- (void)viewDidLoad
{
    [super viewDidLoad];
    
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
    
}

- (void)viewDidUnload {

    [self setLblLatitud:nil];
    [self setLblLongitud:nil];
    [self setLblAltitud:nil];
    [self setCmdAceptar:nil];
    [self setMapa:nil];
    [super viewDidUnload];
    
}



// Desde aqui son metodos nuevos que derrepenten sean parte del framewrok




- (IBAction)cmdLocalizar:(id)sender {
    
    self.manager = [[CLLocationManager alloc] init];
    self.manager.distanceFilter = 100;
    self.manager.desiredAccuracy = kCLLocationAccuracyThreeKilometers;
    self.manager.delegate = self;
    
    [self.manager startUpdatingLocation];
    [self.manager startUpdatingHeading];
    
}


-(void)locationManager:(CLLocationManager *)manager didUpdateToLocation:(CLLocation *)newLocation fromLocation:(CLLocation *)oldLocation{
    self.lblLatitud.text = [[NSString alloc ] initWithFormat:@"%f", newLocation.coordinate.latitude ];
    self.lblLongitud.text = [[NSString alloc ] initWithFormat:@"%f", newLocation.coordinate.longitude];
    
    
    // Conectar con Mapas
    MKCoordinateRegion region;
    region.center.latitude = newLocation.coordinate.latitude;
    region.center.longitude = newLocation.coordinate.longitude;
    region.span.latitudeDelta = 0.001;
    region.span.longitudeDelta = 0.001;
    [self.mapa setRegion:region animated:YES];
    
    // Implementar la Anotacion:
    
    Anotacion * marcador1 = [[Anotacion alloc] init];
    marcador1.coordenada = newLocation.coordinate;
    [self.mapa addAnnotation:marcador1];
    

}

-(void)locationManager:(CLLocationManager *)manager didFailWithError:(NSError *)error{
    // Aqio se localizan los errores
}

-(void)locationManager:(CLLocationManager *)manager didUpdateHeading:(CLHeading *)newHeading{

    self.lblAltitud.text = [[NSString alloc] initWithFormat:@"%f",newHeading.magneticHeading];
}

-(BOOL)locationManagerShouldDisplayHeadingCalibration:(CLLocationManager *)manager{
    return YES;
}








@end

