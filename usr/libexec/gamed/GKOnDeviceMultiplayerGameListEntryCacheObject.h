//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKOnDeviceMultiplayerGameListEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x004000000010a5d2
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x002000000010a5df
- (id)internalRepresentation;	// IMP=0x001000000010a42a

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(nonatomic) _Bool supportsMultiplayer; // @dynamic supportsMultiplayer;
@property(nonatomic) _Bool supportsTurnBasedMultiplayer; // @dynamic supportsTurnBasedMultiplayer;

@end

