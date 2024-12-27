//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableSet, NSSet, NSString;
@protocol PBSUserProfileStoreBatchUpdater;

@interface _PBLegacyUserProfileManagerBatchUpdater : NSObject
{
    NSMutableSet *_mutableErrors;	// 8 = 0x8
    NSSet *_errors;	// 16 = 0x10
    id <PBSUserProfileStoreBatchUpdater> _updater;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000eb567
@property(nonatomic) __weak id <PBSUserProfileStoreBatchUpdater> updater; // @synthesize updater=_updater;
@property(retain, nonatomic) NSSet *errors; // @synthesize errors=_errors;
- (void)updateUserProfileWithIdentifier:(id)arg1 attributes:(id)arg2;	// IMP=0x00100000000eb46a
@property(readonly, nonatomic) NSString *primaryUserProfileIdentifier;
@property(readonly, nonatomic) NSString *selectedUserProfileIdentifier;
@property(readonly, nonatomic) NSDictionary *userProfiles;
- (id)init;	// IMP=0x00100000000eb329

@end

