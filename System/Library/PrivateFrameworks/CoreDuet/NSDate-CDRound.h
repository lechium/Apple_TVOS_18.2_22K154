//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (CDRound)
- (id)cd_dateWithCeilingForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;	// IMP=0x0020000000034cb9
- (id)cd_dateWithFloorForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;	// IMP=0x0020000000034c23
- (id)cd_dateWithCeilingForAlignment:(double)arg1;	// IMP=0x0020000000034b8d
- (id)cd_dateWithFloorForAlignment:(double)arg1;	// IMP=0x0020000000034b01
- (int)slotFromMidnightWithTotalSlotsInDay:(int)arg1;	// IMP=0x002000000009e2f6
- (id)floorDateWithTotalSlotsInDay:(int)arg1;	// IMP=0x002000000009e280
- (double)timeSinceMidnight:(id *)arg1;	// IMP=0x002000000009e14a
- (id)dedup;	// IMP=0x0020000000102569
- (id)dk_dedup;	// IMP=0x00200000001022de
@end

