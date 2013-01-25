//
//  ViewController.h
//  Location
//
//  Created by Juan Gac on 22-01-13.
//  Copyright (c) 2013 Apps4s. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController <CLLocationManagerDelegate>


@property (strong, nonatomic) IBOutlet UILabel *lblLatitud;
@property (strong, nonatomic) IBOutlet UILabel *lblLongitud;
@property (strong, nonatomic) IBOutlet UILabel *lblAltitud;

@property (strong, nonatomic) IBOutlet UIButton *cmdAceptar;

@property (strong, nonatomic) IBOutlet MKMapView *mapa;

- (IBAction)cmdLocalizar:(id)sender;



@property (strong, nonatomic) CLLocationManager *manager;


@end
