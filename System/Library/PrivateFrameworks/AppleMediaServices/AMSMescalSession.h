//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMescalFairplaySession;

__attribute__((visibility("hidden")))
@interface AMSMescalSession : NSObject
{
    AMSMescalFairplaySession *_session;	// 8 = 0x8
}

+ (id)sessionWithType:(long long)arg1;	// IMP=0x00600000004132fd
+ (id)primeSession;	// IMP=0x0060000000413293
+ (id)defaultSession;	// IMP=0x0060000000413229
- (void).cxx_destruct;	// IMP=0x000000000041441d
- (_Bool)verifyPrimeSignature:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004143cc
- (id)primeSignatureForData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x000000000041436d
- (id)signData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x000000000041430e
- (id)_cachedCertPath;	// IMP=0x00000000004141d0
- (id)_cachedCertData;	// IMP=0x0000000000413cd5
- (_Bool)_cacheCertData:(id)arg1 expiration:(double)arg2;	// IMP=0x0000000000413675
- (id)verifyPrimeSignature:(id)arg1;	// IMP=0x00000000004135e9
- (id)verifyData:(id)arg1 withSignature:(id)arg2 bag:(id)arg3;	// IMP=0x00000000004134f3
- (id)signData:(id)arg1 bag:(id)arg2;	// IMP=0x000000000041341c
- (id)primeSignatureForData:(id)arg1 bag:(id)arg2;	// IMP=0x0000000000413345
- (id)initWithType:(long long)arg1;	// IMP=0x0000000000412e38

@end

