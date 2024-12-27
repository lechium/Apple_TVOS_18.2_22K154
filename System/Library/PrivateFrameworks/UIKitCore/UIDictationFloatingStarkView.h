//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIDictationView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDictationFloatingStarkView : UIDictationView
{
}

- (void)endpointButtonPressed;	// IMP=0x0000000000da475f
- (void)show;	// IMP=0x0000000000da4571
- (struct CGPoint)positionForShow;	// IMP=0x0000000000da454e
- (void)returnToKeyboard;	// IMP=0x0000000000da4311
- (void)dimmingViewWasTapped:(id)arg1;	// IMP=0x0000000000da42cd
- (void)setInputViewsHiddenForDictation:(_Bool)arg1;	// IMP=0x0000000000da40c3
- (void)setState:(int)arg1;	// IMP=0x0000000000da3d22
- (void)prepareForReturnToKeyboard;	// IMP=0x0000000000da3c87
- (void)finishReturnToKeyboard;	// IMP=0x0000000000da3c2d
- (void)layoutSubviews;	// IMP=0x0000000000da3939
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000da352e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

