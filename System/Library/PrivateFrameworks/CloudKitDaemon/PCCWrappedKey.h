//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface PCCWrappedKey : NSObject
{
    struct pcc_wrapped_invocation_key *_wrappedInvocationKey;	// 8 = 0x8
    NSData *_routingToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003ef173
@property(retain) NSData *routingToken; // @synthesize routingToken=_routingToken;
@property struct pcc_wrapped_invocation_key *wrappedInvocationKey; // @synthesize wrappedInvocationKey=_wrappedInvocationKey;
- (void)dealloc;	// IMP=0x00000000003ef0f5
- (void)clear;	// IMP=0x00000000003ef0ef
- (id)data;	// IMP=0x00000000003ef0c5
- (id)initWithKey:(id)arg1 permittedRemoteMeasurement:(id)arg2 attestation:(id)arg3;	// IMP=0x00000000003ee92f

@end

