//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC16NetworkExtension26NEIKEv2CryptoKitSPAKE2Plus : NSObject
{
    MISSING_TYPE *role;	// 8 = 0x8
    MISSING_TYPE *prover;	// 0 = 0x0
    MISSING_TYPE *verifier;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000004fb0
- (id)init;	// IMP=0x0000000000004f70
- (id)processSecondPeerMessage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004e80
- (id)processFirstPeerMessage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004bf0
- (id)getFirstMessageAndReturnError:(id *)arg1;	// IMP=0x0000000000004a40
- (id)initWithSeed:(id)arg1 initiatorID:(id)arg2 responderID:(id)arg3 salt:(id)arg4 context:(id)arg5 forInitiator:(_Bool)arg6 error:(id *)arg7;	// IMP=0x0000000000004760

@end

