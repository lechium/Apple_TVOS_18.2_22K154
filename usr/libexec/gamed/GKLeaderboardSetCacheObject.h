//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKLeaderboardListCacheObject, GKLeaderboardTitleMapListCacheObject, NSString;

@interface GKLeaderboardSetCacheObject
{
}

+ (id)entityName;	// IMP=0x00200000000fedb6
- (id)internalRepresentation;	// IMP=0x00200000000feaaa
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x00100000000fe456

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *image128; // @dynamic image128;
@property(retain, nonatomic) NSString *image256; // @dynamic image256;
@property(retain, nonatomic) NSString *image512; // @dynamic image512;
@property(retain, nonatomic) NSString *image64; // @dynamic image64;
@property(retain, nonatomic) NSString *imageTemplate; // @dynamic imageTemplate;
@property(retain, nonatomic) GKLeaderboardListCacheObject *leaderboardList; // @dynamic leaderboardList;
@property(retain, nonatomic) GKLeaderboardTitleMapListCacheObject *leaderboardTitleMapList; // @dynamic leaderboardTitleMapList;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

