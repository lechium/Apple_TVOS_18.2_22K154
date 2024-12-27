//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, ASFReceipt, ApplicationProxy, NSString, NSURL, _TtC9appstored6LogKey;
@protocol FetchReceiptTaskDelegate;

@interface FetchReceiptTask
{
    _Bool _attributeToAppStore;	// 8 = 0x8
    _Bool _revoked;	// 9 = 0x9
    ACAccount *_account;	// 16 = 0x10
    NSString *_accountMediaType;	// 24 = 0x18
    id <FetchReceiptTaskDelegate> _delegate;	// 32 = 0x20
    ApplicationProxy *_app;	// 40 = 0x28
    NSURL *_customReceiptURL;	// 48 = 0x30
    _TtC9appstored6LogKey *_logKey;	// 56 = 0x38
    NSString *_proxyBundeID;	// 64 = 0x40
    NSString *_proxyBundleVersion;	// 72 = 0x48
    NSString *_proxyDeviceIdentifierForVendor;	// 80 = 0x50
    unsigned long long _proxyStoreExternalVersionID;	// 88 = 0x58
    unsigned long long _proxyStoreItemID;	// 96 = 0x60
    unsigned long long _receiptFlags;	// 104 = 0x68
    ASFReceipt *_receipt;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000018b0ad
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000018adda
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000018ab07
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000018a834
- (void)mainWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000018814a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

