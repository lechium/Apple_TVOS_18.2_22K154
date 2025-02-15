//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSUIMessageView, NSMutableArray, UIBezierPath;

__attribute__((visibility("hidden")))
@interface AMSUIMessageViewLayoutContext : NSObject
{
    _Bool _isDirty;	// 8 = 0x8
    NSMutableArray *_footerButtonFrames;	// 16 = 0x10
    NSMutableArray *_separatorViewFrames;	// 24 = 0x18
    NSMutableArray *_footerButtonFramesPreFlatten;	// 32 = 0x20
    AMSUIMessageView *_messageView;	// 40 = 0x28
    UIBezierPath *_textViewExclusionPath;	// 48 = 0x30
    struct CGSize _contentSize;	// 56 = 0x38
    struct CGSize _lastFittingSize;	// 72 = 0x48
    struct CGSize _lastSize;	// 88 = 0x58
    struct CGSize _textViewContentHuggingSize;	// 104 = 0x68
    struct CGRect _accessoryViewFrame;	// 120 = 0x78
    struct CGRect _accessorySecondaryViewFrame;	// 152 = 0x98
    struct CGRect _imageViewFrame;	// 184 = 0xb8
    struct CGRect _maskViewFrame;	// 216 = 0xd8
    struct CGRect _textViewFrame;	// 248 = 0xf8
    struct CGRect _footerContainerViewFrame;	// 280 = 0x118
    struct CGRect _lastMessageViewFrame;	// 312 = 0x138
    struct CGRect _mainContentFrame;	// 344 = 0x158
}

- (void).cxx_destruct;	// IMP=0x000000000004b426
@property(retain, nonatomic) UIBezierPath *textViewExclusionPath; // @synthesize textViewExclusionPath=_textViewExclusionPath;
@property(nonatomic) struct CGSize textViewContentHuggingSize; // @synthesize textViewContentHuggingSize=_textViewContentHuggingSize;
@property(nonatomic) __weak AMSUIMessageView *messageView; // @synthesize messageView=_messageView;
@property(nonatomic) struct CGRect mainContentFrame; // @synthesize mainContentFrame=_mainContentFrame;
@property(nonatomic) struct CGSize lastSize; // @synthesize lastSize=_lastSize;
@property(nonatomic) struct CGRect lastMessageViewFrame; // @synthesize lastMessageViewFrame=_lastMessageViewFrame;
@property(nonatomic) struct CGSize lastFittingSize; // @synthesize lastFittingSize=_lastFittingSize;
@property(nonatomic) _Bool isDirty; // @synthesize isDirty=_isDirty;
@property(nonatomic) struct CGRect footerContainerViewFrame; // @synthesize footerContainerViewFrame=_footerContainerViewFrame;
@property(retain, nonatomic) NSMutableArray *footerButtonFramesPreFlatten; // @synthesize footerButtonFramesPreFlatten=_footerButtonFramesPreFlatten;
@property(nonatomic) struct CGRect textViewFrame; // @synthesize textViewFrame=_textViewFrame;
@property(retain, nonatomic) NSMutableArray *separatorViewFrames; // @synthesize separatorViewFrames=_separatorViewFrames;
@property(nonatomic) struct CGRect maskViewFrame; // @synthesize maskViewFrame=_maskViewFrame;
@property(nonatomic) struct CGRect imageViewFrame; // @synthesize imageViewFrame=_imageViewFrame;
@property(retain, nonatomic) NSMutableArray *footerButtonFrames; // @synthesize footerButtonFrames=_footerButtonFrames;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGRect accessorySecondaryViewFrame; // @synthesize accessorySecondaryViewFrame=_accessorySecondaryViewFrame;
@property(nonatomic) struct CGRect accessoryViewFrame; // @synthesize accessoryViewFrame=_accessoryViewFrame;
- (double)totalFooterButtonHeight;	// IMP=0x000000000004af40
- (double)separatorThickness;	// IMP=0x000000000004aec1
- (double)leadingContentTextBaseline;	// IMP=0x000000000004ac1e
- (_Bool)isImageViewHidden;	// IMP=0x000000000004ab57
@property(readonly, nonatomic) double accessorySpacing;
@property(readonly, nonatomic) _Bool shouldUseStackedLayout;
- (_Bool)_shouldTextViewTextFillUnderCloseButton;	// IMP=0x000000000004a996
- (_Bool)_shouldOffsetFooterButtonFromMainContentView;	// IMP=0x000000000004a8d5
- (double)_scaledUIValueForValue:(double)arg1;	// IMP=0x000000000004a81c
- (double)_maxTextContainerWidth;	// IMP=0x000000000004a7c7
- (double)_maxFooterButtonWidth;	// IMP=0x000000000004a583
- (_Bool)_isTextOnlyBanner;	// IMP=0x000000000004a500
- (_Bool)_isSymbolImage;	// IMP=0x000000000004a432
- (_Bool)_isFooterButtonPartOfContentFrame;	// IMP=0x000000000004a3e6
- (_Bool)_isIconImageTopAligned;	// IMP=0x000000000004a327
- (_Bool)_isAccessoryViewLeading;	// IMP=0x000000000004a12b
- (double)_interitemSpacing;	// IMP=0x0000000000049fe0
- (double)_imageToLabelSpacing;	// IMP=0x0000000000049f72
- (double)_imageLength;	// IMP=0x0000000000049a7a
- (struct CGRect)_effectiveTextViewFrame;	// IMP=0x00000000000499b3
- (double)_footerMinimumHeight;	// IMP=0x00000000000498e0
- (double)_footerButtonSpacing;	// IMP=0x00000000000497b0
- (double)_footerButtonInterSpacing;	// IMP=0x00000000000497a7
- (unsigned long long)effectiveImageStyle;	// IMP=0x0000000000049713
- (double)_bannerMaxTextWidth;	// IMP=0x0000000000049693
- (struct CGSize)_makeImageViewSize;	// IMP=0x00000000000494dc
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets contentLayoutMargins;
- (double)_bottomFooterSpacing;	// IMP=0x0000000000048f94
- (void)_calculateFooterButtonSizes;	// IMP=0x0000000000048cab
- (void)calculateTextViewExclusionFrame;	// IMP=0x0000000000048860
- (void)calculateTextViewSizeInFrame:(struct CGRect)arg1 dirty:(_Bool)arg2;	// IMP=0x0000000000048440
- (void)calculateMainContentFrameRootFrame:(struct CGRect)arg1;	// IMP=0x00000000000480d3
- (void)calculateAccessorySecondaryViewSize;	// IMP=0x0000000000047fb0
- (void)calculateAccessoryViewSize;	// IMP=0x0000000000047e8d
- (void)calculateAccessorySecondaryViewFrame;	// IMP=0x0000000000047d71
- (void)calculateAccessoryViewFrame;	// IMP=0x0000000000047b9e
- (void)_updateWithRootFrame:(struct CGRect)arg1;	// IMP=0x0000000000045b70
- (struct CGSize)_contentSizeThatFits:(struct CGRect)arg1;	// IMP=0x0000000000045712
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000045623
- (void)layoutSubviewFrames;	// IMP=0x0000000000045461
- (void)invalidate;	// IMP=0x000000000004541e
- (id)initWithMessageView:(id)arg1;	// IMP=0x000000000004527c

@end

