//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIColor, UIView, UIVisualEffectView, _UITextFieldCanvasView;

@protocol _UITextFieldVisualStyleSubject <NSObject>
@property(readonly, nonatomic) UIView *_contentView;
- (_Bool)_textShouldFillFieldEditorHeight;
- (double)_fieldEditorHeight;
- (_Bool)_inVibrantContentView;
- (_Bool)_shouldOverrideEditingFont;
- (_Bool)_hasFloatingFieldEditor;
- (UIColor *)_currentTextColor;
- (_UITextFieldCanvasView *)_textCanvasView;
- (UIVisualEffectView *)_contentBackdropView;
- (_Bool)_textShouldUseVibrancy;
- (_Bool)_fieldEditorAttached;
- (_Bool)_isFocused;
- (long long)_userInterfaceStyle;
- (long long)_keyboardAppearance;
- (_Bool)_shouldDetermineInterfaceStyleTextColor;
@end

