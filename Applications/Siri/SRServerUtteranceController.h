//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/SiriUIAceObjectViewController.h>

@class NSString, SRServerUtteranceView;

@interface SRServerUtteranceController : SiriUIAceObjectViewController
{
    SRServerUtteranceView *_utteranceView;	// 8 = 0x8
    NSString *_utterance;	// 16 = 0x10
    NSString *_utterancePrefix;	// 24 = 0x18
    _Bool _isTip;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000044c55
- (double)_insertionAnimatedZPosition;	// IMP=0x0010000000044c3c
- (long long)_replacementAnimation;	// IMP=0x0010000000044c31
- (long long)_insertionAnimation;	// IMP=0x0010000000044c26
- (long long)_pinAnimationType;	// IMP=0x0010000000044c1b
- (_Bool)_shouldSkipAnimationsInAlternateSpeeds;	// IMP=0x0010000000044c13
- (double)_scaledTopPadding;	// IMP=0x0010000000044bb4
- (double)_extendedTopPadding;	// IMP=0x0010000000044b18
- (double)baselineOffsetFromBottom;	// IMP=0x0010000000044afb
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x0010000000044a99
- (id)description;	// IMP=0x0010000000044a1a
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000004492a
- (void)loadView;	// IMP=0x001000000004465b
- (void)_loadFromObject:(id)arg1;	// IMP=0x001000000004444c
- (void)setAceObject:(id)arg1;	// IMP=0x00100000000443b6

@end

