//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOArrivalRegion, NSTimer;
@protocol MNArrivalRegionTimerDelegate;

__attribute__((visibility("hidden")))
@interface MNArrivalRegionTimer : NSObject
{
    GEOArrivalRegion *_arrivalRegion;	// 8 = 0x8
    NSTimer *_timer;	// 16 = 0x10
    id <MNArrivalRegionTimerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002fe92
@property(nonatomic) __weak id <MNArrivalRegionTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateForLocation:(id)arg1;	// IMP=0x000000000002fb0b
- (void)dealloc;	// IMP=0x000000000002fac9
- (id)initWithArrivalRegion:(id)arg1;	// IMP=0x000000000002fa10
- (id)init;	// IMP=0x000000000002f9e6

@end

