//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface EligibilityTimer : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    unsigned long long _loadedTimeInSeconds;	// 16 = 0x10
    NSDate *_timeStart;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000005440
- (void).cxx_destruct;	// IMP=0x0020000000005430
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSDate *timeStart; // @synthesize timeStart=_timeStart;
@property(nonatomic) unsigned long long loadedTimeInSeconds; // @synthesize loadedTimeInSeconds=_loadedTimeInSeconds;
- (id)description;	// IMP=0x0010000000005344
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000005082
- (unsigned long long)hash;	// IMP=0x0010000000005007
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000004f28
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000004e22
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000004d37
- (_Bool)isActive;	// IMP=0x0010000000004ccf
- (_Bool)hasExpired;	// IMP=0x0010000000004c26
- (void)reset;	// IMP=0x0010000000004bf4
- (void)resume;	// IMP=0x0010000000004b5c
- (void)enable;	// IMP=0x0010000000004b45
- (void)setDurationWithSeconds:(unsigned long long)arg1;	// IMP=0x0010000000004b3b
- (id)initWithSeconds:(unsigned long long)arg1;	// IMP=0x0010000000004add

@end

