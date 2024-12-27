//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, ASFReceipt, ApplicationProxy, NSString, _TtC9appstored6LogKey;

@interface AppReceiptTask
{
    ApplicationProxy *_app;	// 8 = 0x8
    _Bool _attributeToAppStore;	// 16 = 0x10
    _Bool _revoked;	// 17 = 0x11
    ACAccount *_account;	// 24 = 0x18
    _TtC9appstored6LogKey *_logKey;	// 32 = 0x20
    unsigned long long _receiptFlags;	// 40 = 0x28
    ASFReceipt *_receipt;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000008fe28
- (void)handleEngagementRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008fdb7
- (void)handleDialogRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008fd46
- (void)handleAuthenticateRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008fcd5
- (void)main;	// IMP=0x001000000008f926

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

