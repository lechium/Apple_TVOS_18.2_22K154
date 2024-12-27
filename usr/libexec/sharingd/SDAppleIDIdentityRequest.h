//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, SDAppleIDServerTask;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SDAppleIDIdentityRequest : NSObject
{
    _Bool _activated;	// 8 = 0x8
    NSString *_altDSID;	// 16 = 0x10
    SDAppleIDServerTask *_certificateCreateTask;	// 24 = 0x18
    NSDate *_certificateExpirationDate;	// 32 = 0x20
    SDAppleIDServerTask *_certificateFetchTask;	// 40 = 0x28
    NSString *_certificatePEM;	// 48 = 0x30
    NSString *_certificateSerialNumber;	// 56 = 0x38
    long long _certificateStatus;	// 64 = 0x40
    NSString *_certificateToken;	// 72 = 0x48
    unsigned long long _createRetryCount;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_createDelayTimer;	// 88 = 0x58
    NSString *_csrPEM;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_fetchDelayTimer;	// 104 = 0x68
    unsigned long long _fetchRetryCount;	// 112 = 0x70
    NSString *_intermediateCertificatePEM;	// 120 = 0x78
    _Bool _invalidated;	// 128 = 0x80
    struct __SecKey *_privateKey;	// 136 = 0x88
    NSData *_privateKeyPersistentReference;	// 144 = 0x90
    struct __SecKey *_publicKey;	// 152 = 0x98
    NSString *_appleID;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 168 = 0xa8
    CDUnknownBlockType _responseHandler;	// 176 = 0xb0
    CDUnknownBlockType _certificateTokenHandler;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00200000000dd796
@property(copy, nonatomic) CDUnknownBlockType certificateTokenHandler; // @synthesize certificateTokenHandler=_certificateTokenHandler;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (void)invalidate;	// IMP=0x00100000000dd6cc
- (id)initWithAppleID:(id)arg1 certificateToken:(id)arg2 privateKeyPersistentReference:(id)arg3;	// IMP=0x00100000000dd5ed
- (id)initWithAppleID:(id)arg1;	// IMP=0x00100000000dd55e
- (void)activate;	// IMP=0x00100000000dd4fa
- (void)_sendFetchCertificateRequest;	// IMP=0x00100000000dd321
- (void)_sendCreateCertificateRequest;	// IMP=0x00100000000dced3
- (void)_scheduleFetchRetryWithDelay:(unsigned long long)arg1;	// IMP=0x00100000000dce47
- (void)_scheduleCreateRetryWithDelay:(unsigned long long)arg1;	// IMP=0x00100000000dcdbb
- (void)_scheduleFetchCertificateTaskWithDelay:(unsigned long long)arg1;	// IMP=0x00100000000dcc45
- (void)_scheduleCreateCertificateTaskWithDelay:(unsigned long long)arg1;	// IMP=0x00100000000dcacf
- (void)_responseHandlerWithIdentity:(id)arg1 error:(id)arg2;	// IMP=0x00100000000dca08
- (void)_handleKeyPairAvailable;	// IMP=0x00100000000dc7d2
- (void)_handleReceivedCertificate;	// IMP=0x00100000000dc507
- (void)_handleFetchTimerFired;	// IMP=0x00100000000dc456
- (void)_handleCreateTimerFired;	// IMP=0x00100000000dc3a5
- (void)_handleCertificate:(struct __SecCertificate *)arg1 intermediateCertificate:(struct __SecCertificate *)arg2 withTrustResult:(_Bool)arg3 error:(int)arg4;	// IMP=0x00100000000dbbe8
- (void)_handleCertificateFetchResponseWithInfo:(id)arg1 error:(id)arg2;	// IMP=0x00100000000db00b
- (void)_handleCertificateFetchResponseError:(id)arg1;	// IMP=0x00100000000daeef
- (void)_handleCertificateCreateResponseWithInfo:(id)arg1 error:(id)arg2;	// IMP=0x00100000000daca2
- (void)_handleCertificateCreateResponseError:(id)arg1;	// IMP=0x00100000000dabe6
- (void)dealloc;	// IMP=0x00100000000dab93
- (void)_invalidate;	// IMP=0x00100000000da8c1
- (void)_activate;	// IMP=0x00100000000da748

@end

