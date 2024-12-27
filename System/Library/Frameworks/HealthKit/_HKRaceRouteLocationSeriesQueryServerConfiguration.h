//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class NSUUID;

__attribute__((visibility("hidden")))
@interface _HKRaceRouteLocationSeriesQueryServerConfiguration : HKQueryServerConfiguration
{
    NSUUID *_clusterUUID;	// 8 = 0x8
    unsigned long long _workoutSelection;	// 16 = 0x10
    NSUUID *_workoutUUID;	// 24 = 0x18
    double _timestampAnchor;	// 32 = 0x20
    unsigned long long _limit;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000070c64
- (void).cxx_destruct;	// IMP=0x0000000000070f66
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(nonatomic) double timestampAnchor; // @synthesize timestampAnchor=_timestampAnchor;
@property(copy, nonatomic) NSUUID *workoutUUID; // @synthesize workoutUUID=_workoutUUID;
@property(nonatomic) unsigned long long workoutSelection; // @synthesize workoutSelection=_workoutSelection;
@property(copy, nonatomic) NSUUID *clusterUUID; // @synthesize clusterUUID=_clusterUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000070dba
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000070c6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000070ba5

@end

