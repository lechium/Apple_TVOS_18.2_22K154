//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameCacheObject, NSNumber, NSString;

@interface GKAchievementDescriptionCacheObject
{
}

+ (id)entityName;	// IMP=0x00200000000fc1c8
+ (_Bool)getIsPrereleaseFromServerRep:(id)arg1;	// IMP=0x00100000000fb98d
- (id)internalRepresentation;	// IMP=0x00200000000fbe36
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x00100000000fb9ab

// Remaining properties
@property(retain, nonatomic) NSString *achievedDescription; // @dynamic achievedDescription;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;
@property(retain, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hidden; // @dynamic hidden;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *image128; // @dynamic image128;
@property(retain, nonatomic) NSString *image256; // @dynamic image256;
@property(retain, nonatomic) NSString *image512; // @dynamic image512;
@property(retain, nonatomic) NSString *image64; // @dynamic image64;
@property(retain, nonatomic) NSString *imageTemplate; // @dynamic imageTemplate;
@property(retain, nonatomic) NSNumber *maximumPoints; // @dynamic maximumPoints;
@property(retain, nonatomic) NSNumber *rarityPercent; // @dynamic rarityPercent;
@property(nonatomic) unsigned long long releaseState; // @dynamic releaseState;
@property(nonatomic) _Bool replayable; // @dynamic replayable;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *unachievedDescription; // @dynamic unachievedDescription;

@end

