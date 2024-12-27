//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BLSHWatchdogTesterTimer : NSObject
{
    _Bool _invalidated;	// 8 = 0x8
    unsigned long long _invalidationReason;	// 16 = 0x10
    NSString *_explanation;	// 24 = 0x18
    _Bool _sleepImminentSinceScheduled;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000008522c
@property(nonatomic, getter=hasSleepBeenImminentSinceScheduled) _Bool sleepImminentSinceScheduled; // @synthesize sleepImminentSinceScheduled=_sleepImminentSinceScheduled;
@property(readonly, copy, nonatomic) NSString *explanation;
@property(readonly, nonatomic) unsigned long long invalidationReason;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;
- (void)invalidate:(unsigned long long)arg1;	// IMP=0x00000000000851eb
- (id)initWithExplanation:(id)arg1;	// IMP=0x0000000000085178

@end

