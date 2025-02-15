//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNDepartureUpdater, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface __MNDepartureTimeSpentCondition : NSObject
{
    MNDepartureUpdater *_updater;	// 8 = 0x8
    NSDate *_initialDate;	// 16 = 0x10
    double _threshold;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000100ebb
@property(readonly, nonatomic) NSString *name;
- (double)scoreForLocation:(id)arg1;	// IMP=0x0000000000100c22
- (id)initWithUpdater:(id)arg1 timeThreshold:(double)arg2;	// IMP=0x0000000000100b8f

@end

