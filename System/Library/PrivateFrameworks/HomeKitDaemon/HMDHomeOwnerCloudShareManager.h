//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDCoreDataCloudShareService, HMDCoreDataCloudTransform, HMDHomeManager, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeOwnerCloudShareManager : NSObject
{
    HMDCoreDataCloudShareService *_shareService;	// 8 = 0x8
    HMDCoreDataCloudTransform *_cloudTransform;	// 16 = 0x10
    HMDHomeManager *_homeManager;	// 24 = 0x18
    CDUnknownBlockType _modelSelectionBlock;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000dc0e4c
- (void).cxx_destruct;	// IMP=0x0000000000dbea84
- (void)didDeleteModelWithID:(id)arg1 tombstone:(id)arg2 context:(id)arg3;	// IMP=0x0000000000dbe94d
- (void)updateSharedOwnerAccountHandleForHome:(id)arg1;	// IMP=0x0000000000dbe874
- (id)_existingSharedHomeWithoutShareWithHomeModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000dbe713
- (id)_createShareForHome:(id)arg1;	// IMP=0x0000000000dbdf76
- (id)_existingSharedHomesWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000dbdc78
- (id)_allExistingSharesForHomeWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000dbdb48
- (id)_canonicalModelFromSharedHomes:(id)arg1;	// IMP=0x0000000000dbdb2d
- (id)_canonicalShareFromSharesToSharedHomes:(id)arg1 shareMap:(id)arg2;	// IMP=0x0000000000dbd9fb
- (id)_existingShareForHomeWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000dbd587
- (id)_shareForHome:(id)arg1;	// IMP=0x0000000000dbd490
- (id)_removeShare:(id)arg1 usingShareService:(id)arg2 forHomeWithUUID:(id)arg3;	// IMP=0x0000000000dbd2be
- (id)removeSharesForHome:(id)arg1;	// IMP=0x0000000000dbcfe9
- (id)acceptShareInvitation:(id)arg1;	// IMP=0x0000000000dbcfd3
- (id)auditAccessForUsers:(id)arg1 home:(id)arg2;	// IMP=0x0000000000dbce64
- (id)revokeAccessForUser:(id)arg1 home:(id)arg2;	// IMP=0x0000000000dbccf2
- (id)grantAccessForUser:(id)arg1 home:(id)arg2 logEventBuilder:(id)arg3;	// IMP=0x0000000000dbcb43
- (id)initWithContainer:(id)arg1 sharedStore:(id)arg2 privateStore:(id)arg3 moc:(id)arg4 cloudTransform:(id)arg5 homeManager:(id)arg6;	// IMP=0x0000000000dbc9d4
- (id)initWithShareService:(id)arg1 homeManager:(id)arg2 cloudTransform:(id)arg3 modelSelectionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000dbc847

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

