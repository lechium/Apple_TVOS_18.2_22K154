//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMMotionActivity;

__attribute__((visibility("hidden")))
@interface RTStateTransitionActivityHistogramElement : NSObject
{
    CMMotionActivity *_activity;	// 8 = 0x8
    double _interval;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004154f7
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(retain, nonatomic) CMMotionActivity *activity; // @synthesize activity=_activity;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000041543c
- (id)initWithActivity:(id)arg1;	// IMP=0x00000000004153c9

@end

