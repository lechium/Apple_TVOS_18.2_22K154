//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UILabel.h>

@class ASCContentSkeleton, UIColor;

__attribute__((visibility("hidden")))
@interface ASCSkeletonLabel : UILabel
{
    _Bool _wantsAncestorFocusMarqueeAfterClearingSkeleton;	// 8 = 0x8
    UIColor *_skeletonColor;	// 16 = 0x10
    long long _skeletonNumberOfLines;	// 24 = 0x18
    ASCContentSkeleton *_skeleton;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000050249
@property(nonatomic) _Bool wantsAncestorFocusMarqueeAfterClearingSkeleton; // @synthesize wantsAncestorFocusMarqueeAfterClearingSkeleton=_wantsAncestorFocusMarqueeAfterClearingSkeleton;
@property(copy, nonatomic) ASCContentSkeleton *skeleton; // @synthesize skeleton=_skeleton;
@property(nonatomic) long long skeletonNumberOfLines; // @synthesize skeletonNumberOfLines=_skeletonNumberOfLines;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000050135
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000005007a
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000004ffc3
- (void)setEnablesMarqueeWhenAncestorFocused:(_Bool)arg1;	// IMP=0x000000000004ff47
@property(copy, nonatomic) UIColor *skeletonColor; // @synthesize skeletonColor=_skeletonColor;
- (double)_baselineOffsetFromBottom;	// IMP=0x000000000004fc7d
- (double)_firstBaselineOffsetFromTop;	// IMP=0x000000000004fbd5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004fbc0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004fb95
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004fb1f

@end

