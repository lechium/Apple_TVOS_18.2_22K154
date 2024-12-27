//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSProcessInfo, ASDSupportedDialogHandlers, NSString;

@interface _XPCInternalRequestToken
{
}

@property(readonly) ASDSupportedDialogHandlers *supportedDialogHandlers;
@property(readonly) AMSProcessInfo *processInfo;
- (void)deliverProgress:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000021f770
- (void)deliverNotifications:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000021f76a
- (void)deliverViewPresentationRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000021f6ff
- (void)deliverEngagementRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000021f694
- (void)deliverDialogRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000021f5ea
- (void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000021f42a
- (void)deliverAlertPresentationRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000021f3bf
- (id)notificationClient;	// IMP=0x001000000021f3b6
- (_Bool)isInternal;	// IMP=0x001000000021f3ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

