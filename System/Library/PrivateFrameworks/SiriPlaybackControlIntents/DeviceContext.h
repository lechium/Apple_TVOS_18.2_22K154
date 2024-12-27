//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObject.h>

@class NSDate, NSNumber, NSString;

@interface DeviceContext : INObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000208db5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000020905d
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;	// IMP=0x0000000000208f61
@property(nonatomic, readonly) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015760e

// Remaining properties
@property(nonatomic, copy) NSString *deviceType; // @dynamic deviceType;
@property(nonatomic, copy) NSString *groupId; // @dynamic groupId;
@property(nonatomic) long long nowPlayingMediaType; // @dynamic nowPlayingMediaType;
@property(nonatomic) long long nowPlayingState; // @dynamic nowPlayingState;
@property(nonatomic, copy) NSDate *nowPlayingTimestamp; // @dynamic nowPlayingTimestamp;
@property(nonatomic) long long proximity; // @dynamic proximity;
@property(nonatomic, copy) NSString *roomName; // @dynamic roomName;
@property(nonatomic, copy) NSString *routeId; // @dynamic routeId;
@property(nonatomic, retain) NSNumber *silentPrimary; // @dynamic silentPrimary;

@end

