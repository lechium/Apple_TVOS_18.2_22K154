//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, UICubicTimingParameters, UISpringTimingParameters;

@interface _TtC8VideosUI20TimingCurveParameter : _TtCs12_SwiftObject
{
    MISSING_TYPE *timingCurveType;	// 16 = 0x10
    MISSING_TYPE *cubicTimingParameters;	// 24 = 0x18
    MISSING_TYPE *springTimingParameters;	// 32 = 0x20
}

- (id)copyWithZone:(void *)arg1;	// IMP=0x00000000006312d5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006311cc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000063115b
@property(nonatomic, retain) UISpringTimingParameters *springTimingParameters; // @synthesize springTimingParameters;
@property(nonatomic, retain) UICubicTimingParameters *cubicTimingParameters; // @synthesize cubicTimingParameters;
@property(nonatomic) long long timingCurveType; // @synthesize timingCurveType;

@end

