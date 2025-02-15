//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HMDUserPresenceUpdateReason : NSObject
{
    unsigned long long _value;	// 8 = 0x8
}

+ (id)reasonWithCoder:(id)arg1;	// IMP=0x0060000000bbe7bd
+ (id)reasonWithDict:(id)arg1;	// IMP=0x0060000000bbe75c
+ (id)reasonWithMessage:(id)arg1;	// IMP=0x0060000000bbe6fb
+ (id)reasonWithNumber:(id)arg1;	// IMP=0x0060000000bbe6ae
+ (id)reasonWithValue:(unsigned long long)arg1;	// IMP=0x0060000000bbe63e
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)description;	// IMP=0x0000000000bbe588
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bbe4e2
@property(readonly, nonatomic) NSNumber *number;
- (void)addToPayload:(id)arg1;	// IMP=0x0000000000bbe43d
- (void)addToCoder:(id)arg1;	// IMP=0x0000000000bbe3cd
- (id)initWithNumber:(id)arg1;	// IMP=0x0000000000bbe339

@end

