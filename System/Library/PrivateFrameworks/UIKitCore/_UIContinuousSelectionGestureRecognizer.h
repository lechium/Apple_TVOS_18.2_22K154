//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface _UIContinuousSelectionGestureRecognizer : UIGestureRecognizer
{
    struct CGVector _allowableMovement;	// 8 = 0x8
    struct CGPoint _originalLocation;	// 24 = 0x18
}

+ (_Bool)_supportsTouchContinuation;	// IMP=0x00600000009493c1
@property(nonatomic) struct CGPoint originalLocation; // @synthesize originalLocation=_originalLocation;
@property(nonatomic) struct CGVector allowableMovement; // @synthesize allowableMovement=_allowableMovement;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000949648
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009495f9
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009494a3
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000949449
- (_Bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000949401
- (void)_cancelOrFail;	// IMP=0x00000000009493c9
- (id)init;	// IMP=0x000000000094936f

@end

