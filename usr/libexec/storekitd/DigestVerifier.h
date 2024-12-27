//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ChunkedDigest, HashDigest;

@interface DigestVerifier : NSObject
{
    ChunkedDigest *_digest;	// 8 = 0x8
    HashDigest *_hashDigest;	// 16 = 0x10
    unsigned long long _index;	// 24 = 0x18
    _Bool _valid;	// 32 = 0x20
    unsigned long long _bytesProcessed;	// 40 = 0x28
    unsigned long long _bytesValidated;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000007204a
@property(readonly) unsigned long long bytesValidated; // @synthesize bytesValidated=_bytesValidated;
@property(readonly) unsigned long long bytesProcessed; // @synthesize bytesProcessed=_bytesProcessed;
- (_Bool)_validateAndResetDigestError:(id *)arg1;	// IMP=0x0010000000071ba9
- (void)_hashData:(id)arg1;	// IMP=0x0010000000071b52
- (void)_hashBuffer:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000071b38
- (_Bool)verifyData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007195f
- (_Bool)verifyBuffer:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000007185c
- (_Bool)finalAndVerifyError:(id *)arg1;	// IMP=0x001000000007184a
- (id)initWithDigest:(id)arg1 type:(long long)arg2;	// IMP=0x001000000007174f
- (id)initWithChunkedDigest:(id)arg1 resumptionOffset:(unsigned long long)arg2;	// IMP=0x0010000000071652

@end

