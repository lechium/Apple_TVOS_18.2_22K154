//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSXPCConnection;

@interface AMSDServiceConnection : NSObject
{
    NSString *_logKey;	// 8 = 0x8
    NSXPCConnection *_remoteConnection;	// 16 = 0x10
    NSMutableSet *_retainer;	// 24 = 0x18
}

+ (id)machServiceName;	// IMP=0x002000000005149a
- (void).cxx_destruct;	// IMP=0x0020000000051f65
@property(retain, nonatomic) NSMutableSet *retainer; // @synthesize retainer=_retainer;
@property(retain, nonatomic) NSXPCConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
- (void)_provideService:(id)arg1 delegate:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000051b63
- (void)dealloc;	// IMP=0x0010000000051a27
- (void)getAccountSignOutServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000519c6
- (void)getAccountCachedServerDataServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000051965
- (void)getSecurityServiceProxyWithDelegate:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000518d8
- (void)getPushNotificationServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005185b
- (void)getPurchaseServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000517fa
- (void)getPaymentValidationServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005177d
- (void)getPaymentConfirmationServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000051700
- (void)getKeychainServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005169f
- (void)getFraudReportServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005163e
- (void)getDismissQRDialogServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000515c1
- (void)getDeviceMessengerServiceProxyWithDelegate:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051524
- (void)getCookieServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000514a7
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000513a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

