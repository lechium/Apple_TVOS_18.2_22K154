//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDXPCMessageSendPolicyParameters : HMFObject
{
    unsigned long long _entitlements;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
- (id)attributeDescriptions;	// IMP=0x00000000006049d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006049c9
- (unsigned long long)hash;	// IMP=0x00000000006049b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000604911
@property(readonly, copy) NSString *signature;
- (id)initWithEntitlements:(unsigned long long)arg1;	// IMP=0x00000000006048c0

@end

