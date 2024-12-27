//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MPCSleepTimerEngineObserverDelegate;

__attribute__((visibility("hidden")))
@interface MPCSleepTimerEngineObserver : NSObject
{
    NSObject<MPCSleepTimerEngineObserverDelegate> *_delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002531bd
@property(nonatomic) __weak NSObject<MPCSleepTimerEngineObserverDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)engine:(id)arg1 didChangeItemElapsedTime:(double)arg2 rate:(float)arg3;	// IMP=0x0000000000253136
- (void)engine:(id)arg1 didEndPlaybackOfItem:(id)arg2;	// IMP=0x00000000002530e8
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000253080

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

