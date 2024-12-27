//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDTimePeriodElement;

__attribute__((visibility("hidden")))
@interface HMDTimePeriodNotificationCondition
{
    HMDTimePeriodElement *_startElement;	// 8 = 0x8
    HMDTimePeriodElement *_endElement;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000008e637d
+ (id)type;	// IMP=0x00100000008e6370
- (void).cxx_destruct;	// IMP=0x00000000008e633f
@property(readonly) HMDTimePeriodElement *endElement; // @synthesize endElement=_endElement;
@property(readonly) HMDTimePeriodElement *startElement; // @synthesize startElement=_startElement;
- (id)attributeDescriptions;	// IMP=0x00000000008e61f5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008e6133
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008e6085
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008e607a
- (unsigned long long)hash;	// IMP=0x00000000008e5fee
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008e5ea3
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x00000000008e5d81
- (id)timePeriodElementFromDictionary:(id)arg1;	// IMP=0x00000000008e5b8c
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000008e5a0e
- (id)initWithStartElement:(id)arg1 endElement:(id)arg2;	// IMP=0x00000000008e58f0

@end

