//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, _UITextLayoutControllerBase;
@protocol UICoordinateSpace, _UITextLayoutController;

__attribute__((visibility("hidden")))
@interface _UITextLayoutBaselineCalculator : NSObject
{
    _UITextLayoutControllerBase<_UITextLayoutController> *_textLayoutController;	// 8 = 0x8
    NSDictionary *_typingAttributes;	// 16 = 0x10
    id <UICoordinateSpace> _coordinateSpace;	// 24 = 0x18
    double _scale;	// 32 = 0x20
    _Bool _usesLineFragmentOrigin;	// 40 = 0x28
    struct CGPoint _fallbackTextContainerOrigin;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000093eeba
- (double)_convertOffset:(double)arg1;	// IMP=0x000000000093edd8
@property(readonly, nonatomic) double lastBaselineOffsetFromBottom;
@property(readonly, nonatomic) double firstBaselineOffsetFromTop;
- (double)_baselineOffsetAtPosition:(id)arg1;	// IMP=0x000000000093e6f8
- (id)initWithTextLayoutController:(id)arg1 typingAttributes:(id)arg2 usesLineFragmentOrigin:(_Bool)arg3 coordinateSpace:(id)arg4 scale:(double)arg5 fallbackTextContainerOrigin:(struct CGPoint)arg6;	// IMP=0x000000000093e606

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

