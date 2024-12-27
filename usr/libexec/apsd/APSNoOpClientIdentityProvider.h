//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APSNoOpClientIdentityProvider : NSObject
{
}

- (id)init;	// IMP=0x00000000000d0860
- (_Bool)hasUnderlyingIdentityChanged;	// IMP=0x00100000000d0a90
- (void)deleteClientIdentityRequestingReplacement;	// IMP=0x00100000000d0a80
@property(nonatomic, readonly) _Bool isIdentityAvailable;
@property(nonatomic, copy) CDUnknownBlockType identityAvailabilityDidChangeBlock;
- (void)fetchClientIdentityForcingNewCert:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d09b0
- (id)fetchHostVMCertAndSignNonce:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000d08c0

@end

