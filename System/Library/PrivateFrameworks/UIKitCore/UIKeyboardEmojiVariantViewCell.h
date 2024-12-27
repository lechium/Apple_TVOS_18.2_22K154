//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIKBRenderConfig, UIKeyboardEmojiDraggableView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiVariantViewCell : UIView
{
    UIKeyboardEmojiDraggableView *_labelView;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    _Bool _highlighted;	// 24 = 0x18
    UIKBRenderConfig *_renderConfig;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000008b54f0
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void)dragWillBegin:(id)arg1;	// IMP=0x00000000008b54bb
- (id)colorForBackgroundView;	// IMP=0x00000000008b54a9
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000008b5498
@property(retain, nonatomic) NSString *emoji;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000008b5224

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

