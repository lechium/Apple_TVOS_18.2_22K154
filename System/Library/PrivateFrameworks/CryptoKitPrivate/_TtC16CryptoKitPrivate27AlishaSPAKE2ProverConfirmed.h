//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData;

@interface _TtC16CryptoKitPrivate27AlishaSPAKE2ProverConfirmed : NSObject
{
    MISSING_TYPE *alishaKey;	// 8 = 0x8
    MISSING_TYPE *KEnc;	// 16 = 0x10
    MISSING_TYPE *KMac;	// 24 = 0x18
    MISSING_TYPE *KRMac;	// 32 = 0x20
    MISSING_TYPE *SymmetricLTS;	// 40 = 0x28
    MISSING_TYPE *Kble_intro;	// 48 = 0x30
    MISSING_TYPE *Kble_oob_master;	// 56 = 0x38
    MISSING_TYPE *M2;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000041070
- (id)init;	// IMP=0x0000000000040ff0
@property(nonatomic, readonly) NSData *M2; // @synthesize M2;
@property(nonatomic, readonly) NSData *Kble_oob_master; // @synthesize Kble_oob_master;
@property(nonatomic, readonly) NSData *Kble_intro; // @synthesize Kble_intro;
@property(nonatomic, readonly) NSData *SymmetricLTS; // @synthesize SymmetricLTS;
@property(nonatomic, readonly) NSData *KRMac; // @synthesize KRMac;
@property(nonatomic, readonly) NSData *KMac; // @synthesize KMac;
@property(nonatomic, readonly) NSData *KEnc; // @synthesize KEnc;
@property(nonatomic, readonly) NSData *alishaKey; // @synthesize alishaKey;

@end

