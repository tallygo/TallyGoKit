//
//  MGLMapView+LocationValidation.h
//  TallyGoKit
//
//  Created by Anthony Picciano on 9/29/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#ifndef MGLMapView_LocationValidation_h
#define MGLMapView_LocationValidation_h

#import <Mapbox/Mapbox.h>

@interface MGLMapView (LocationValidation)

- (void)validateLocationServices;

@end

#endif /* MGLMapView_LocationValidation_h */
