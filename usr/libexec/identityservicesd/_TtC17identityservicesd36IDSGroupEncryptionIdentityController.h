//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC17identityservicesd36IDSGroupEncryptionIdentityController : NSObject
{
    MISSING_TYPE *l;	// 0 = 0x0
    MISSING_TYPE *q;	// 0 = 0x0
    MISSING_TYPE *lock;	// 1818517343 = 0x6c645f5f
    MISSING_TYPE *identity;	// 1109987104 = 0x42290f20
    MISSING_TYPE *previousIdentity;	// 1953719135 = 0x7473635f
    MISSING_TYPE *listeners;	// 1109987074 = 0x42290f02
    MISSING_TYPE *previousPreKeyExpirationDuration;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *preKeyExpirationDuration;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0040000000598ce0
- (id)init;	// IMP=0x0010000000598c80
- (void)resetPreKey;	// IMP=0x00100000005989e0
- (id)ensurePublicIdentityForDevice:(id)arg1;	// IMP=0x00100000005978a0
- (id)initWithConfig:(id)arg1;	// IMP=0x00100000005977c0

@end

