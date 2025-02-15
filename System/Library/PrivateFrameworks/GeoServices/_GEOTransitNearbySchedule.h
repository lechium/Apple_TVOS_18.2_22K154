//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitNearbySchedule : NSObject
{
    NSArray *_categories;	// 8 = 0x8
}

+ (id)nearbyScheduleCategoriesFromSchedule:(id)arg1 departureSequenceContainers:(id)arg2 scheduledDepartureSequences:(id)arg3 incidents:(id)arg4;	// IMP=0x0010000001123357
- (void).cxx_destruct;	// IMP=0x0000000001123a3d
@property(readonly, nonatomic) NSArray *categories; // @synthesize categories=_categories;
- (id)initWithNearbySchedule:(id)arg1 departureSequenceContainers:(id)arg2 scheduledDepartureSequences:(id)arg3 incidents:(id)arg4 stopInfo:(id)arg5;	// IMP=0x0000000001123281

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

