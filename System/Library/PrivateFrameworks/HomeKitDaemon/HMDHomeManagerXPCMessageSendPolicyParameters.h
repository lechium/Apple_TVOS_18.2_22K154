//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDHomeManagerXPCMessageSendPolicyParameters
{
    _Bool _active;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
}

@property(getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)attributeDescriptions;	// IMP=0x000000000067a1be
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000067a139
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000067a12e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000067a008
- (id)signature;	// IMP=0x0000000000679f51
- (id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000679f0d

@end

