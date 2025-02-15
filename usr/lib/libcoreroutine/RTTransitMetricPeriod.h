//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateInterval;

__attribute__((visibility("hidden")))
@interface RTTransitMetricPeriod : NSObject
{
    NSDateInterval *_journeyPeriod;	// 8 = 0x8
    NSDateInterval *_homeStayPeriod;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004e0950
@property(readonly, nonatomic) NSDateInterval *homeStayPeriod; // @synthesize homeStayPeriod=_homeStayPeriod;
@property(readonly, nonatomic) NSDateInterval *journeyPeriod; // @synthesize journeyPeriod=_journeyPeriod;
- (_Bool)stayAtHomeTogether:(id)arg1;	// IMP=0x00000000004e07fb
- (_Bool)travelTogether:(id)arg1;	// IMP=0x00000000004e06ba
- (id)initWithJourneyPeriod:(id)arg1 homeStayPeriod:(id)arg2;	// IMP=0x00000000004e0559

@end

