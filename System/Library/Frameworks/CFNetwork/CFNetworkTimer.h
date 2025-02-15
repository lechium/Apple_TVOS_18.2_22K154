//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CFNetworkTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;	// 8 = 0x8
    double _interval;	// 16 = 0x10
    double _lastResumeTime;	// 24 = 0x18
    double _lastPauseTime;	// 32 = 0x20
    double _runTime;	// 40 = 0x28
    int _state;	// 48 = 0x30
}

- (void)dealloc;	// IMP=0x00000000001d9bcd

@end

