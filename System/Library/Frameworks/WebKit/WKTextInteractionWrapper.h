//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIContextMenuInteraction, UIWKTextInteractionAssistant, WKContentView;

__attribute__((visibility("hidden")))
@interface WKTextInteractionWrapper : NSObject
{
    WKContentView *_view;	// 8 = 0x8
    struct RetainPtr<UIWKTextInteractionAssistant> _textInteractionAssistant;	// 16 = 0x10
    _Bool _shouldRestoreEditMenuAfterOverflowScrolling;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x00000000004899f8
- (void).cxx_destruct;	// IMP=0x00000000004899c7
- (void)setExternalContextMenuInteractionDelegate:(id)arg1;	// IMP=0x00000000004899b1
@property(readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
- (void)selectAll:(id)arg1;	// IMP=0x0000000000489985
- (void)selectWord;	// IMP=0x000000000048996f
- (void)translate:(id)arg1 fromRect:(struct CGRect)arg2;	// IMP=0x0000000000489959
- (void)scheduleChineseTransliterationForText:(id)arg1;	// IMP=0x0000000000489943
- (void)scheduleReplacementsForText:(id)arg1;	// IMP=0x000000000048992d
- (void)showTextServiceFor:(id)arg1 fromRect:(struct CGRect)arg2;	// IMP=0x0000000000489917
- (void)showShareSheetFor:(id)arg1 fromRect:(struct CGRect)arg2;	// IMP=0x0000000000489901
- (void)lookup:(id)arg1 withRange:(struct _NSRange)arg2 fromRect:(struct CGRect)arg3;	// IMP=0x00000000004898eb
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3;	// IMP=0x00000000004898d5
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4;	// IMP=0x00000000004898bc
- (void)didEndScrollingOrZooming;	// IMP=0x00000000004898a6
- (void)willStartScrollingOrZooming;	// IMP=0x0000000000489890
- (void)didEndScrollingOverflow;	// IMP=0x000000000048987a
- (void)willStartScrollingOverflow;	// IMP=0x0000000000489864
- (void)setGestureRecognizers;	// IMP=0x000000000048984e
- (void)selectionChanged;	// IMP=0x0000000000489838
- (void)deactivateSelection;	// IMP=0x0000000000489822
- (void)activateSelection;	// IMP=0x000000000048980c
@property(readonly, nonatomic) UIWKTextInteractionAssistant *textInteractionAssistant;
- (void)dealloc;	// IMP=0x00000000004897d3
- (id)initWithView:(id)arg1;	// IMP=0x0000000000489750

@end

