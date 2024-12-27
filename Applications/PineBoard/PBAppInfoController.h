//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, PBAppInfoConfiguration, PBAppInfoStore, PBSAppInfoControllerUpdate;
@protocol OS_dispatch_queue, PBAppInfoControllerDelegate;

@interface PBAppInfoController : NSObject
{
    id <PBAppInfoControllerDelegate> _delegate;	// 8 = 0x8
    PBAppInfoStore *_infoStore;	// 16 = 0x10
    CDUnknownBlockType _filter;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_accessQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 40 = 0x28
    NSDictionary *_queue_currentAppInfos;	// 48 = 0x30
    id _queue_configuration;	// 56 = 0x38
    id _infoStoreObserverToken;	// 64 = 0x40
    PBSAppInfoControllerUpdate *_updatePendingDelegateNotification;	// 72 = 0x48
}

+ (CDUnknownBlockType)enabledAppsFilter;	// IMP=0x00200000001b142a
+ (CDUnknownBlockType)enabledAndVisibleAppsFilter;	// IMP=0x00100000001b13a2
+ (CDUnknownBlockType)enabledAndVisibleAppsAndPlaceholdersFilter;	// IMP=0x00100000001b1341
- (void).cxx_destruct;	// IMP=0x00200000001b25e3
@property(readonly, nonatomic) PBSAppInfoControllerUpdate *updatePendingDelegateNotification; // @synthesize updatePendingDelegateNotification=_updatePendingDelegateNotification;
@property(readonly, nonatomic) id infoStoreObserverToken; // @synthesize infoStoreObserverToken=_infoStoreObserverToken;
@property(readonly, nonatomic) id queue_configuration; // @synthesize queue_configuration=_queue_configuration;
@property(readonly, nonatomic) NSDictionary *queue_currentAppInfos; // @synthesize queue_currentAppInfos=_queue_currentAppInfos;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) PBAppInfoStore *infoStore; // @synthesize infoStore=_infoStore;
- (id)_filteredAppInfoFromAppInfo:(id)arg1;	// IMP=0x00100000001b24e0
- (id)_handleDidAddInfos:(id)arg1 removeInfos:(id)arg2 updateInfos:(id)arg3 updatedConfiguration:(id)arg4;	// IMP=0x00100000001b1a30
- (void)appInfoStoreEndUpdates:(id)arg1;	// IMP=0x00100000001b194c
- (void)appInfoStore:(id)arg1 beginUpdatesWithAddedInfos:(id)arg2 removedInfos:(id)arg3 updatedInfos:(id)arg4 updatedConfiguration:(id)arg5;	// IMP=0x00100000001b1909
@property __weak id <PBAppInfoControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) PBAppInfoConfiguration *configuration;
@property(readonly, copy) NSDictionary *appInfos;
- (void)dealloc;	// IMP=0x00100000001b161e
- (id)initWithInfoStore:(id)arg1 filter:(CDUnknownBlockType)arg2 delegate:(id)arg3;	// IMP=0x00100000001b1499
- (id)init;	// IMP=0x00100000001b148b
- (id)appInfoForSceneIdentity:(id)arg1;	// IMP=0x001000000002b015
- (id)appInfoForSceneIdentifier:(id)arg1;	// IMP=0x001000000002af6a
- (id)appInfoForScene:(id)arg1;	// IMP=0x001000000002ae81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

