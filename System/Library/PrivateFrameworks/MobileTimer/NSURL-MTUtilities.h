//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (MTUtilities)
+ (id)schemeForSection:(long long)arg1;	// IMP=0x00200000000497fc
+ (id)mtURLForSection:(long long)arg1;	// IMP=0x002000000004975e
+ (id)mtURLForScheme:(id)arg1;	// IMP=0x00200000000496e1
+ (id)mtURLForClockAppSection:(long long)arg1 timerManager:(id)arg2;	// IMP=0x0020000000049481
+ (id)mtURLForClockAppSection:(long long)arg1;	// IMP=0x002000000004946d
@property(readonly, nonatomic) NSString *mtID;
@property(readonly, nonatomic) _Bool mtIsForLastTimer;
@property(readonly, nonatomic) _Bool mtIsList;
@property(readonly, nonatomic) long long mtClockAppSection;
@end

