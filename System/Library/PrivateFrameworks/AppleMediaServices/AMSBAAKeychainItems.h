//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface AMSBAAKeychainItems : NSObject
{
    id _BIKKey;	// 8 = 0x8
    NSData *_BAACert;	// 16 = 0x10
    NSData *_IntermediateRootCert;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000036ef3b
@property(readonly, nonatomic) NSData *IntermediateRootCert; // @synthesize IntermediateRootCert=_IntermediateRootCert;
@property(readonly, nonatomic) NSData *BAACert; // @synthesize BAACert=_BAACert;
@property(readonly, nonatomic) struct __SecKey *BIKKeyRef;
- (id)initWithBAACert:(id)arg1 BIKKey:(struct __SecKey *)arg2 intermediateRootCert:(id)arg3;	// IMP=0x000000000036ee57

@end

