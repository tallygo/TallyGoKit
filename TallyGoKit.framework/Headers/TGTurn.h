//
//  TGTurn.h
//  TallyGoKit
//
//  Created by David Deller on 11/30/17.
//  Copyright © 2017 TallyGo. All rights reserved.
//

#import "TGBaseObject.h"

@class TGStreet;

/// The direction of travel at this turn.
typedef NSString *TGTurnDirection NS_TYPED_ENUM;

/// Leftwards more than 115 degrees.
FOUNDATION_EXPORT TGTurnDirection _Nonnull const TGTurnDirectionHardLeft;

/// Leftwards between 30 and 115 degrees.
FOUNDATION_EXPORT TGTurnDirection _Nonnull const TGTurnDirectionLeft;

/// Leftwards between 8 and 30 degrees.
FOUNDATION_EXPORT TGTurnDirection _Nonnull const TGTurnDirectionSlightLeft;

/// No more than 8 degrees to the right or left.
FOUNDATION_EXPORT TGTurnDirection _Nonnull const TGTurnDirectionForward;

/// Rightwards between 8 and 30 degrees.
FOUNDATION_EXPORT TGTurnDirection _Nonnull const TGTurnDirectionSlightRight;

/// Rightwards between 30 and 115 degrees.
FOUNDATION_EXPORT TGTurnDirection _Nonnull const TGTurnDirectionRight;

/// Rightwards more than 115 degrees.
FOUNDATION_EXPORT TGTurnDirection _Nonnull const                TGTurnDirectionHardRight;

/// A highway off-ramp or interchange that is to the left of the carriageway.
FOUNDATION_EXPORT TGTurnDirection _Nonnull const TGTurnDirectionExitLeft;

/// A highway off-ramp or interchange that is to the right of the carriageway.
FOUNDATION_EXPORT TGTurnDirection _Nonnull const TGTurnDirectionExitRight;

/// Two streets are within a forwardmost 60 degree arc. Take the leftmost street.
FOUNDATION_EXPORT TGTurnDirection _Nonnull const TGTurnDirectionLeftAtTheFork;

/// Two streets are within a forwardmost 60 degree arc. Take the rightmost street.
FOUNDATION_EXPORT TGTurnDirection _Nonnull const TGTurnDirectionRightAtTheFork;

/// Turn 180 degrees to return the way you came (on the other side of a dual carriageway).
FOUNDATION_EXPORT TGTurnDirection _Nonnull const TGTurnDirectionUTurn;

/// Turn 180 degrees to return the way you came (on the other side of a dual carriageway).
FOUNDATION_EXPORT TGTurnDirection _Nonnull const TGTurnDirectionUTurnLeft;

/// Turn 180 degrees to the right to return the way you came (on the other side of a dual carriageway).
FOUNDATION_EXPORT TGTurnDirection _Nonnull const TGTurnDirectionUTurnRight;

/// A merge into traffic to the left.
FOUNDATION_EXPORT TGTurnDirection _Nonnull const TGTurnDirectionMergeLeft;

/// A merge into traffic on the right.
FOUNDATION_EXPORT TGTurnDirection _Nonnull const TGTurnDirectionMergeRight;

/// Unknown turn direction.
FOUNDATION_EXPORT TGTurnDirection _Nonnull const TGTurnDirectionUnknown;

/**
 TGTurn represents a turn at a specific point in the route.
 Contains information about the direction of the turn, the instruction for the driver, and the street being turned onto.
 */
@interface TGTurn : TGBaseObject

/// The street being turned onto.
@property (nonatomic, readonly, nullable) TGStreet *street;

/// The direction of turn (or destination, when applicable).
@property (nonatomic, readonly, nonnull) TGTurnDirection direction;

/// The text describing the turn instruction for the turn-by-turn list.
@property (nonatomic, readonly, nullable) NSString *instruction;

@end
