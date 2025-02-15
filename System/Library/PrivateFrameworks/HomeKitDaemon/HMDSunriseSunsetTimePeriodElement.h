//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateComponents, NSString;

__attribute__((visibility("hidden")))
@interface HMDSunriseSunsetTimePeriodElement
{
    NSString *_significantEvent;	// 8 = 0x8
    NSDateComponents *_offset;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000008e58e8
+ (id)type;	// IMP=0x00100000008e58db
- (void).cxx_destruct;	// IMP=0x00000000008e58aa
@property(readonly, copy) NSDateComponents *offset; // @synthesize offset=_offset;
@property(readonly, copy) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
- (id)attributeDescriptions;	// IMP=0x00000000008e5760
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008e569e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008e55f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008e55e5
- (unsigned long long)hash;	// IMP=0x00000000008e55a1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008e5456
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x00000000008e535c
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000008e51dd
- (id)initWithSignificantEvent:(id)arg1 offset:(id)arg2;	// IMP=0x00000000008e513b

@end

