//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, ASDSupportedDialogHandlers, NSData, NSString, NSXPCConnection, Optional, XPCServiceCatalog, XPCServiceEntitlements;

@interface XPCServiceClient : NSObject
{
    NSData *_auditTokenData;	// 8 = 0x8
    XPCServiceCatalog *_catalog;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    Optional *_enableDiagnostics;	// 32 = 0x20
    XPCServiceEntitlements *_entitlements;	// 40 = 0x28
    _Bool hasSeenAppStore;	// 48 = 0x30
    ASDSupportedDialogHandlers *_supportedDialogHandlers;	// 56 = 0x38
    AMSProcessInfo *_processInfo;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000012308f
@property(readonly) AMSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly) ASDSupportedDialogHandlers *supportedDialogHandlers;
- (void)deliverViewPresentationRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000122ef1
- (void)deliverProgress:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000122e30
- (void)deliverNotifications:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000122d6f
- (void)deliverEngagementRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000122c70
- (void)deliverDialogRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000122b71
- (void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000122a72
- (void)deliverAlertPresentationRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000122973
- (void)setSupportedNotificationDelivery:(id)arg1;	// IMP=0x0010000000122919
- (void)getUpdatesServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012286f
- (void)getRestoreServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001227c5
- (void)getRepairServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012271b
- (void)getPurchaseServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000122671
- (void)getPurchaseHistoryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001225c7
- (void)getMetricsServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012251d
- (void)getOcelotServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000122473
- (void)getManagedAppServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001223c9
- (void)getCrossfireServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012231f
- (void)getLibraryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000122275
- (void)getInstallationServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001221cb
- (void)getIAPHistoryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000122121
- (void)getFairPlayServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000122077
- (void)getDiagnosticServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000121fcd
- (void)getAppStoreServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000121cb5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

