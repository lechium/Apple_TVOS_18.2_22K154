//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTimeRange : NSObject
{
    struct GEOPBTransitTimeRange _pbTimeRange;	// 8 = 0x8
    struct GEOPDTimeRange _pdTimeRange;	// 20 = 0x14
    _Bool _usePB;	// 32 = 0x20
}

- (_Bool)contains:(id)arg1;	// IMP=0x000000000111f787
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double startTime;
- (id)initWithPDTimeRange:(struct GEOPDTimeRange)arg1;	// IMP=0x000000000111f67c
- (id)initWithPBTimeRange:(struct GEOPBTransitTimeRange)arg1;	// IMP=0x000000000111f632

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

