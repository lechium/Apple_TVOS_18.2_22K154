//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray, NSString, UITextView;

__attribute__((visibility("hidden")))
@interface _UICharacterStreamingManager : NSObject
{
    UITextView *_textView;	// 8 = 0x8
    CADisplayLink *_streamingAnimationDisplayLink;	// 16 = 0x10
    _Bool _streamingAnimationActive;	// 24 = 0x18
    double _lastAnimationUpdateTimeStamp;	// 32 = 0x20
    _Bool _committingFinalResults;	// 40 = 0x28
    _Bool _discardNextHypothesis;	// 41 = 0x29
    NSString *_previousHypothesis;	// 48 = 0x30
    NSString *_lastHypothesis;	// 56 = 0x38
    NSString *_targetHypothesis;	// 64 = 0x40
    NSMutableArray *_pendingEdits;	// 72 = 0x48
    double _streamingCharacterInsertionRate;	// 80 = 0x50
    double _minDurationBetweenHypotheses;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000014be557
@property(nonatomic) _Bool discardNextHypothesis; // @synthesize discardNextHypothesis=_discardNextHypothesis;
@property(nonatomic) double minDurationBetweenHypotheses; // @synthesize minDurationBetweenHypotheses=_minDurationBetweenHypotheses;
@property(nonatomic) double streamingCharacterInsertionRate; // @synthesize streamingCharacterInsertionRate=_streamingCharacterInsertionRate;
@property(retain, nonatomic) NSMutableArray *pendingEdits; // @synthesize pendingEdits=_pendingEdits;
@property(copy, nonatomic) NSString *targetHypothesis; // @synthesize targetHypothesis=_targetHypothesis;
@property(copy, nonatomic) NSString *lastHypothesis; // @synthesize lastHypothesis=_lastHypothesis;
@property(copy, nonatomic) NSString *previousHypothesis; // @synthesize previousHypothesis=_previousHypothesis;
- (void)setupToInsertResultForNewHypothesis:(id)arg1;	// IMP=0x00000000014be407
- (void)_displayLinkFired:(id)arg1;	// IMP=0x00000000014bdb3c
- (void)_startStreamingAnimations;	// IMP=0x00000000014bda24
- (void)_stopStreamingAnimation;	// IMP=0x00000000014bd9ae
- (void)setWords:(id)arg1;	// IMP=0x00000000014bd8d4
- (void)commitFinalResults;	// IMP=0x00000000014bd884
- (id)initWithTextView:(id)arg1;	// IMP=0x00000000014bd813

@end

