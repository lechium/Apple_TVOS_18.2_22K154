//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextView.h>

@class ASCContentSkeleton, UIColor;

__attribute__((visibility("hidden")))
@interface ASCSkeletonTextView : UITextView
{
    UIColor *_skeletonColor;	// 8 = 0x8
    long long _skeletonNumberOfLines;	// 16 = 0x10
    ASCContentSkeleton *_skeleton;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000050716
@property(copy, nonatomic) ASCContentSkeleton *skeleton; // @synthesize skeleton=_skeleton;
@property(nonatomic) long long skeletonNumberOfLines; // @synthesize skeletonNumberOfLines=_skeletonNumberOfLines;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000050622
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000050567
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000504b0
@property(copy, nonatomic) UIColor *skeletonColor; // @synthesize skeletonColor=_skeletonColor;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000502f9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000502ce
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;	// IMP=0x000000000005027a

@end

