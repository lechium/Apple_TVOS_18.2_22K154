//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableSet, NSString, PBAppInfoController, PBAppInfoStore, PBSAppInfoConfiguration, PBSystemServiceConnection;
@protocol OS_dispatch_queue, PBSAppInfoDelegateServiceInterface;

@interface PBAppInfoService : NSObject
{
    PBAppInfoStore *_infoStore;	// 8 = 0x8
    PBSystemServiceConnection *_remoteConnection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_accessQueue;	// 24 = 0x18
    NSDictionary *_queue_currentAppInfos;	// 32 = 0x20
    NSDictionary *_queue_lastProvidedAppInfos;	// 40 = 0x28
    NSMutableSet *_queue_updatedAppInfoBundleIdentifiers;	// 48 = 0x30
    PBSAppInfoConfiguration *_queue_currentConfiguration;	// 56 = 0x38
    PBSAppInfoConfiguration *_queue_lastProvidedConfiguration;	// 64 = 0x40
    PBAppInfoController *_appInfoController;	// 72 = 0x48
    id <PBSAppInfoDelegateServiceInterface> _serviceDelegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000076ed7
@property(readonly, nonatomic) id <PBSAppInfoDelegateServiceInterface> serviceDelegate; // @synthesize serviceDelegate=_serviceDelegate;
@property(readonly, nonatomic) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(readonly, nonatomic) PBSAppInfoConfiguration *queue_lastProvidedConfiguration; // @synthesize queue_lastProvidedConfiguration=_queue_lastProvidedConfiguration;
@property(readonly, nonatomic) PBSAppInfoConfiguration *queue_currentConfiguration; // @synthesize queue_currentConfiguration=_queue_currentConfiguration;
@property(readonly, nonatomic) NSMutableSet *queue_updatedAppInfoBundleIdentifiers; // @synthesize queue_updatedAppInfoBundleIdentifiers=_queue_updatedAppInfoBundleIdentifiers;
@property(readonly, nonatomic) NSDictionary *queue_lastProvidedAppInfos; // @synthesize queue_lastProvidedAppInfos=_queue_lastProvidedAppInfos;
@property(readonly, nonatomic) NSDictionary *queue_currentAppInfos; // @synthesize queue_currentAppInfos=_queue_currentAppInfos;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) __weak PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
@property(readonly, nonatomic) PBAppInfoStore *infoStore; // @synthesize infoStore=_infoStore;
- (void)appInfoUpdatesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000767af
- (void)setServiceDelegate:(id)arg1;	// IMP=0x0010000000076756
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x0010000000076263
- (void)invalidate;	// IMP=0x001000000007625d
- (id)initWithInfoStore:(id)arg1 remoteConnection:(id)arg2;	// IMP=0x0010000000075eff
- (id)init;	// IMP=0x0010000000075ef1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

