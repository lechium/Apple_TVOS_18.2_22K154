//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSDate.h"

__attribute__((visibility("hidden")))
@interface __NSDate : NSDate
{
    double _time;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000011fccd
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x006000000011fcca
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;	// IMP=0x000000000011fcd5
- (void)dealloc;	// IMP=0x000000000011fc78
- (double)timeIntervalSinceReferenceDate;	// IMP=0x000000000011fc6b

@end

