//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol NSCustomTextRenderingDelegate, _NSCustomTextRenderingDisplayLink;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI19TextEffectsRenderer : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *animationController;	// 16 = 0x10
    MISSING_TYPE *geometryObserver;	// 24 = 0x18
    MISSING_TYPE *surfaceMap;	// 32 = 0x20
    MISSING_TYPE *currentFragments;	// 40 = 0x28
    MISSING_TYPE *currentIDs;	// 48 = 0x30
    MISSING_TYPE *updatedFragments;	// 56 = 0x38
    MISSING_TYPE *layoutBounds;	// 64 = 0x40
    MISSING_TYPE *currentBounds;	// 96 = 0x60
    MISSING_TYPE *lineFragmentPadding;	// 128 = 0x80
    MISSING_TYPE *notifyFlags;	// 136 = 0x88
    MISSING_TYPE *keyframesVersion;	// 144 = 0x90
    MISSING_TYPE *contentsScale;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000000223c70
- (id)init;	// IMP=0x00000000002215e0
@property(nonatomic) double contentsScale; // @synthesize contentsScale;
@property(nonatomic) __weak id <NSCustomTextRenderingDelegate> delegate; // @synthesize delegate;
- (struct CGPoint)convertPointToRenderSpace:(struct CGPoint)arg1 textRange:(id)arg2;	// IMP=0x000000000022e670
- (struct CGPoint)convertPointToTextAnimationsCoordinateSpace:(struct CGPoint)arg1 textRange:(id)arg2;	// IMP=0x000000000022e660
- (struct CGPoint)convertPointToTextAnimationsCoordinateSpace:(struct CGPoint)arg1;	// IMP=0x000000000022e600
- (struct CGPoint)convertPointFromRenderSpace:(struct CGPoint)arg1;	// IMP=0x000000000022c9a0
- (void)invalidateTemporaryAttributesInRange:(id)arg1;	// IMP=0x0000000000228dc0
- (void)enumerateTextSegmentsInRange:(id)arg1 type:(long long)arg2 options:(unsigned long long)arg3 textLayoutManager:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000228930
- (void)textDidEditRange:(id)arg1 replacementLength:(long long)arg2;	// IMP=0x0000000000227880
@property(nonatomic, readonly) _Bool fragmentsValid;
@property(nonatomic, retain) id <_NSCustomTextRenderingDisplayLink> externalDisplayLink;
@property(nonatomic, readonly) struct CGRect customTextBounds;
- (void)setNeedsDisplay;	// IMP=0x0000000000227590
- (void)endLayoutWithConsumer:(CDUnknownBlockType)arg1;	// IMP=0x0000000000226f90
- (void)didLayoutFragment:(id)arg1;	// IMP=0x0000000000223e30
- (void)beginLayout;	// IMP=0x0000000000223de0
- (void)postLayoutNotify;	// IMP=0x0000000000223db0
- (void)preLayoutNotify;	// IMP=0x0000000000223d10
- (id)animatorForTextAnimation:(id)arg1 notify:(CDUnknownBlockType)arg2;	// IMP=0x000000000022ea00
- (id)animatorForTextAnimation:(id)arg1;	// IMP=0x000000000022e780

@end

