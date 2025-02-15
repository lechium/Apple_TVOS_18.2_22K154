//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;

@interface SHLLibraryChangeset : NSObject
{
    NSMutableSet *_trackSetToAdd;	// 8 = 0x8
    NSMutableSet *_trackSetToDelete;	// 16 = 0x10
    NSMutableSet *_groupSetToAdd;	// 24 = 0x18
    NSMutableSet *_groupSetToDelete;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001bf56
@property(retain, nonatomic) NSMutableSet *groupSetToDelete; // @synthesize groupSetToDelete=_groupSetToDelete;
@property(retain, nonatomic) NSMutableSet *groupSetToAdd; // @synthesize groupSetToAdd=_groupSetToAdd;
@property(retain, nonatomic) NSMutableSet *trackSetToDelete; // @synthesize trackSetToDelete=_trackSetToDelete;
@property(retain, nonatomic) NSMutableSet *trackSetToAdd; // @synthesize trackSetToAdd=_trackSetToAdd;
- (id)description;	// IMP=0x001000000001bdc7
- (void)mergeChangeset:(id)arg1;	// IMP=0x001000000001bcc1
- (void)deleteGroups:(id)arg1;	// IMP=0x001000000001bb7a
- (void)addGroups:(id)arg1;	// IMP=0x001000000001b84c
- (void)deleteTracks:(id)arg1;	// IMP=0x001000000001b705
- (void)addTracks:(id)arg1;	// IMP=0x001000000001b5be
@property(readonly, nonatomic) NSArray *groupIDsToDelete;
@property(readonly, nonatomic) NSArray *trackIDsToDelete;
@property(readonly, nonatomic) NSArray *groupsToDelete;
@property(readonly, nonatomic) NSArray *groupsToAdd;
@property(readonly, nonatomic) NSArray *tracksToDelete;
@property(readonly, nonatomic) NSArray *tracksToAdd;
- (id)init;	// IMP=0x001000000001b1e5

@end

