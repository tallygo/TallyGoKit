//
//  TGWaypoint.h
//  TallyGoKit
//
//  Created by David Deller on 2/22/18.
//  Copyright © 2018 TallyGo. All rights reserved.
//

#import <TallyGoKit/TallyGoKit.h>

@class TGStreetAddress;

/**
 * Represents a start or end point of a route segment
 */
@interface TGWaypoint : NSObject

/// The coordinate of the waypoint
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

/// An address that represents this waypoint, if known. Must be supplied during initialization, and cannot be changed after.
@property (nonatomic, readonly, nullable) TGStreetAddress *address;

/// A textual description that represents this waypoint. May be a string representation of the street address, or any other custom description that would be meaningful to the user. Must be supplied during initialization, and cannot be changed after.
@property (nonatomic, readonly, nullable) NSString *addressDescription;

/// Initialize with only a coordinate. The address and a description will be loaded asynchronously, if possible.
- (nonnull instancetype)initWithCoordinate:(CLLocationCoordinate2D)coordinate;

/// Initialize with a coordinate, while specifying an address and description for display in the UI.
- (nonnull instancetype)initWithCoordinate:(CLLocationCoordinate2D)coordinate address:(nullable TGStreetAddress *)address description:(nullable NSString *)addressDescription;

@end
