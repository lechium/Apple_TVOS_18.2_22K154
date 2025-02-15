//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _TtC9storekitd6Client;
@protocol DialogProtocol;

@interface FetchReceiptTask
{
    long long _apiVersion;	// 8 = 0x8
    _TtC9storekitd6Client *_client;	// 16 = 0x10
    id <DialogProtocol> _dialogContext;	// 24 = 0x18
    NSString *_logKey;	// 32 = 0x20
    unsigned long long _receiptFlags;	// 40 = 0x28
    NSString *_receiptString;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000030b12
@property(readonly, nonatomic) NSString *receiptString; // @synthesize receiptString=_receiptString;
@property(nonatomic) unsigned long long receiptFlags; // @synthesize receiptFlags=_receiptFlags;
@property(copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) id <DialogProtocol> dialogContext; // @synthesize dialogContext=_dialogContext;
@property(readonly, nonatomic) _TtC9storekitd6Client *client; // @synthesize client=_client;
@property(nonatomic) long long apiVersion; // @synthesize apiVersion=_apiVersion;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003078f
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000030526
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000302bd
- (_Bool)_useVPPBagURL;	// IMP=0x00100000000302a9
- (id)_requestBody;	// IMP=0x001000000002fb9c
- (id)_URLRequestWithBag:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002f5b4
- (_Bool)_isUnifiedReceiptValidAndCurrentAtBundleURL:(id)arg1;	// IMP=0x001000000002ee8c
- (id)_requestReceiptStringError:(id *)arg1;	// IMP=0x001000000002e956
- (void)_authenticateAndRequestReceipt;	// IMP=0x001000000002e4c5
- (id)_accountWithError:(id *)arg1;	// IMP=0x001000000002dc0e
- (void)main;	// IMP=0x001000000002d72d
- (id)initWithClient:(id)arg1;	// IMP=0x001000000002d6c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

