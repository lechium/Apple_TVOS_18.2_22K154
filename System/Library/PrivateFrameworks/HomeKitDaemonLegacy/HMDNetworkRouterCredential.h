//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterCredential : NSObject
{
    NSData *_macAddress;	// 8 = 0x8
    NSData *_psk;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005128f4
- (void).cxx_destruct;	// IMP=0x00000000005128cc
@property(retain, nonatomic) NSData *psk; // @synthesize psk=_psk;
@property(retain, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005125da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000051254c
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000512283
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000511f51
- (id)initWithMacAddress:(id)arg1 psk:(id)arg2;	// IMP=0x0000000000511eb8
- (id)init;	// IMP=0x0000000000511e89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

