//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (GKExtensions)
+ (id)_gkFormattedTimeIntervalStringWithStartDate:(id)arg1 endDate:(id)arg2 calendarUnits:(unsigned long long)arg3 style:(long long)arg4;	// IMP=0x00500000000232a7
+ (id)_gkServerTimestamp;	// IMP=0x0050000000025732
+ (id)_gkDateFromServerTimestamp:(id)arg1;	// IMP=0x00500000000256e3
+ (id)_gkDateFromScalarServerTimestamp:(unsigned long long)arg1;	// IMP=0x005000000002568b
- (id)_gkFormattedWhenStringWithOptions:(unsigned long long)arg1;	// IMP=0x00100000000234ac
- (id)_gkFormattedDateForStyle:(unsigned long long)arg1 relative:(_Bool)arg2;	// IMP=0x00100000000233bf
- (id)_gkServerTimestamp;	// IMP=0x0010000000025782
@end

