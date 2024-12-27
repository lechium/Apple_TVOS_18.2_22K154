//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface RMDeviceIdentity : NSObject
{
    NSObject *_identityLock;	// 8 = 0x8
    struct __SecKey *_privateKey;	// 16 = 0x10
    NSArray *_certificates;	// 24 = 0x18
}

+ (id)deviceIdentityForTesting;	// IMP=0x002000000003270a
+ (id)sharedDeviceIdentity;	// IMP=0x00100000000326b5
- (void).cxx_destruct;	// IMP=0x002000000003343f
@property(retain, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(nonatomic) struct __SecKey *privateKey; // @synthesize privateKey=_privateKey;
- (void)_persistIdentityWithPrivateKey:(struct __SecKey *)arg1 certificateChain:(id)arg2 fileName:(id)arg3 isBAA:(_Bool)arg4;	// IMP=0x0010000000033274
- (void)_copyPersistedIdentityWithFileName:(id)arg1 isBAA:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000330ef
- (void)_fetchOrCreateSelfSignedCertificateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000032e29
- (void)_issueDeviceIdentityCertificateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000032dc1
- (void)_fetchDeviceIdentityCertificateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000032daf
- (void)deviceIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000329d6
- (void)_cachePrivateKey:(struct __SecKey *)arg1 certificates:(id)arg2;	// IMP=0x001000000003289b
- (_Bool)_validDeviceIdentityCache;	// IMP=0x001000000003278f
- (id)init;	// IMP=0x0010000000032723

@end

