//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDCoreDataCloudShareService, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeSharedUserCloudShareManager : NSObject
{
    HMDCoreDataCloudShareService *_shareService;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0010000000dc5628
- (void).cxx_destruct;	// IMP=0x0000000000dc39f2
- (_Bool)_onlyShareOwnerInShare:(id)arg1;	// IMP=0x0000000000dc38b3
- (void)_deleteDanglingShare:(id)arg1 homeModelID:(id)arg2;	// IMP=0x0000000000dc3767
- (void)removeSharesWithNoParticipantForHomeWithModelID:(id)arg1;	// IMP=0x0000000000dc35c4
- (id)_createShareForSharedUserDataWithHomeModelID:(id)arg1 logEventBuilder:(id)arg2;	// IMP=0x0000000000dc2d27
- (id)_existingSharedUserPrivateRootWithHomeModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000dc2b72
- (id)_existingShareForSharedUserDataWithHomeModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000dc2a00
- (id)_existingSharesForSharedUserDataWithHomeModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000dc23a4
- (id)_existingSharedUserDataRootWithoutShareWithHomeModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000dc2243
- (id)_existingSharedUserDataRootWithHomeModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000dc20bd
- (id)_shareForSharedUserDataWithHomeModelID:(id)arg1 logEventBuilder:(id)arg2;	// IMP=0x0000000000dc1e68
- (void)leaveShareWithSharedHomeModelID:(id)arg1;	// IMP=0x0000000000dc1d83
- (id)acceptShareInvitation:(id)arg1 homeWithHomeModelID:(id)arg2;	// IMP=0x0000000000dc1c74
- (void)_removeSharedUserDataRootsForHomeWithModelID:(id)arg1;	// IMP=0x0000000000dc1335
- (void)removeShareForSharedUserDataWithHomeModelID:(id)arg1;	// IMP=0x0000000000dc1236
- (void)revokeAccessForOwner:(id)arg1 sharedUserDataWithHomeModelID:(id)arg2;	// IMP=0x0000000000dc1131
- (id)grantAccessForOwner:(id)arg1 sharedUserDataWithHomeModelID:(id)arg2 logEventBuilder:(id)arg3;	// IMP=0x0000000000dc0fec
- (id)initWithContainer:(id)arg1 sharedStore:(id)arg2 privateStore:(id)arg3 moc:(id)arg4;	// IMP=0x0000000000dc0f1e
- (id)initWithCloudShareService:(id)arg1;	// IMP=0x0000000000dc0eb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

