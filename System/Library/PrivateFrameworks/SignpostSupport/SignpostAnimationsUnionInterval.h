//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SignpostAnimationsUnionInterval : NSObject
{
    NSMutableArray *_animationIntervals;	// 8 = 0x8
    struct _NSRange _animationTimeRange;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000009b19
@property(retain, nonatomic) NSMutableArray *animationIntervals; // @synthesize animationIntervals=_animationIntervals;
@property(nonatomic) struct _NSRange animationTimeRange; // @synthesize animationTimeRange=_animationTimeRange;
- (id)initWithAnimation:(id)arg1;	// IMP=0x0000000000009a2e

@end

