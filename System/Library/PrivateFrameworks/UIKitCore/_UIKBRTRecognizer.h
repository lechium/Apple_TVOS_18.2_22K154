//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue, _UIKBRTRecognizerDelegate, _UIKBRTRecognizerTouchLoggingProtocol, _UIKBRTRecognizerTouchPointTrackingProtocol;

__attribute__((visibility("hidden")))
@interface _UIKBRTRecognizer : NSObject
{
    _Bool _isWaiting;	// 8 = 0x8
    _Bool _disableHomeRowReturn;	// 9 = 0x9
    id <_UIKBRTRecognizerDelegate> _delegate;	// 16 = 0x10
    id <_UIKBRTRecognizerTouchLoggingProtocol> _touchLogger;	// 24 = 0x18
    id <_UIKBRTRecognizerTouchPointTrackingProtocol> _touchTracker;	// 32 = 0x20
    NSMutableSet *_definitiveRules;	// 40 = 0x28
    NSMutableSet *_averagingRules;	// 48 = 0x30
    double _maximumNonRestMoveDistance;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_touchQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 72 = 0x48
    NSMutableArray *_touchInfos;	// 80 = 0x50
    NSMutableSet *_activeTouches;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_activeTouchesQueue;	// 96 = 0x60
    NSMutableArray *_ignoredTouches;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_ignoredTouchesQueue;	// 112 = 0x70
    unsigned long long _numProlongedTouches;	// 120 = 0x78
    double _touchIntervalAverage;	// 128 = 0x80
    struct CGSize _clusterRestHaloSize;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000ee30d9
@property(nonatomic) double touchIntervalAverage; // @synthesize touchIntervalAverage=_touchIntervalAverage;
@property(nonatomic) unsigned long long numProlongedTouches; // @synthesize numProlongedTouches=_numProlongedTouches;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ignoredTouchesQueue; // @synthesize ignoredTouchesQueue=_ignoredTouchesQueue;
@property(retain, nonatomic) NSMutableArray *ignoredTouches; // @synthesize ignoredTouches=_ignoredTouches;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *activeTouchesQueue; // @synthesize activeTouchesQueue=_activeTouchesQueue;
@property(retain, nonatomic) NSMutableSet *activeTouches; // @synthesize activeTouches=_activeTouches;
@property(retain, nonatomic) NSMutableArray *touchInfos; // @synthesize touchInfos=_touchInfos;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *touchQueue; // @synthesize touchQueue=_touchQueue;
@property(nonatomic) double maximumNonRestMoveDistance; // @synthesize maximumNonRestMoveDistance=_maximumNonRestMoveDistance;
@property(nonatomic) struct CGSize clusterRestHaloSize; // @synthesize clusterRestHaloSize=_clusterRestHaloSize;
@property(nonatomic) _Bool disableHomeRowReturn; // @synthesize disableHomeRowReturn=_disableHomeRowReturn;
@property(readonly, nonatomic) NSMutableSet *averagingRules; // @synthesize averagingRules=_averagingRules;
@property(readonly, nonatomic) NSMutableSet *definitiveRules; // @synthesize definitiveRules=_definitiveRules;
@property(retain, nonatomic) id <_UIKBRTRecognizerTouchPointTrackingProtocol> touchTracker; // @synthesize touchTracker=_touchTracker;
@property(retain, nonatomic) id <_UIKBRTRecognizerTouchLoggingProtocol> touchLogger; // @synthesize touchLogger=_touchLogger;
@property(nonatomic) id <_UIKBRTRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)kbStatusMessage:(id)arg1;	// IMP=0x0000000000ee2f3d
- (void)makeTouchIgnored:(id)arg1 force:(_Bool)arg2;	// IMP=0x0000000000ee2f24
- (void)makeTouchIgnored:(id)arg1 force:(_Bool)arg2 withMessage:(id)arg3;	// IMP=0x0000000000ee2cd9
- (void)makeTouchIgnored:(id)arg1 force:(_Bool)arg2 because:(id)arg3;	// IMP=0x0000000000ee2bb0
- (_Bool)makeTouchActive:(id)arg1;	// IMP=0x0000000000ee2805
- (void)cancelTouchOnLayoutWithTouchInfo:(id)arg1;	// IMP=0x0000000000ee25fe
- (void)notifyDelegateOfRestingTouch:(id)arg1;	// IMP=0x0000000000ee2528
- (void)notifyDelegateOfIgnoringTouch:(id)arg1;	// IMP=0x0000000000ee22f3
- (_Bool)queryDelegateOfRestingTouch:(id)arg1;	// IMP=0x0000000000ee22df
- (_Bool)queryDelegateOfIgnoringTouch:(id)arg1 forOtherTouch:(_Bool)arg2;	// IMP=0x0000000000ee1f94
- (void)notifyDelegateOfMovedIgnoredTouch:(id)arg1;	// IMP=0x0000000000ee1d9c
- (_Bool)notifyDelegateOfMovedTouch:(id)arg1;	// IMP=0x0000000000ee1a6b
- (void)notifyDelegateOfCancelledTouch:(id)arg1;	// IMP=0x0000000000ee1778
- (void)notifyDelegateOfSuccessfulTouch:(id)arg1;	// IMP=0x0000000000ee13ad
- (_Bool)queryDelegateToBeginTouch:(id)arg1 forBeginState:(unsigned long long)arg2 restartIfNecessary:(_Bool)arg3;	// IMP=0x0000000000ee0ee5
- (_Bool)removedFromActiveTouches:(id)arg1;	// IMP=0x0000000000ee0db2
- (_Bool)addedToActiveTouches:(id)arg1;	// IMP=0x0000000000ee0c7d
- (void)processTouchInfo:(id)arg1;	// IMP=0x0000000000ee0af5
- (void)updateIgnoredTouchesForTouchInfo:(id)arg1 whenTouchInfo:(id)arg2 changesStateTo:(BOOL)arg3;	// IMP=0x0000000000ee09af
- (void)explicitlyIgnoreTouch:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000ee08f7
- (void)_doIgnoreTouchWithTouchInfo:(id)arg1;	// IMP=0x0000000000ee086a
- (void)markTouchProcessed:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000ee07b2
- (void)_doMarkTouchProcessedWithTouchInfo:(id)arg1;	// IMP=0x0000000000ee06ae
- (void)touchCancelled:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000ee05b9
- (void)_doCancelledTouchWithTouchInfo:(id)arg1;	// IMP=0x0000000000ee03e0
- (void)touchUp:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000ee02eb
- (void)_doEndedTouchWithTouchInfo:(id)arg1;	// IMP=0x0000000000edfdab
- (void)touchDragged:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000edfccb
- (void)_doMovedTouchWithTouchInfo:(id)arg1;	// IMP=0x0000000000edfc00
- (void)touchDown:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(_Bool)arg3;	// IMP=0x0000000000edfb23
- (void)_doBeginTouchWithTouchInfo:(id)arg1;	// IMP=0x0000000000ede914
- (void)letRulesModifyPendingTouchInfo:(id)arg1;	// IMP=0x0000000000ede4a9
- (float)letRulesModifyNewTouchInfo:(id)arg1;	// IMP=0x0000000000ede02f
- (void)setStandardKeyPixelSize:(struct CGSize)arg1;	// IMP=0x0000000000edde88
- (void)reset;	// IMP=0x0000000000eddbbd
- (id)init;	// IMP=0x0000000000edda64

@end

