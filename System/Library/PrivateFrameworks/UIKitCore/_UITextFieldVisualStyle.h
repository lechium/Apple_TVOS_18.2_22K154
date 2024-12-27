//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _UITextFieldVisualStyleSubject;

__attribute__((visibility("hidden")))
@interface _UITextFieldVisualStyle : NSObject
{
    id <_UITextFieldVisualStyleSubject> _styleSubject;	// 8 = 0x8
}

+ (id)inferredVisualStyleWithStyleSubject:(id)arg1;	// IMP=0x0060000001491a73
- (void).cxx_destruct;	// IMP=0x000000000149205e
@property(nonatomic) __weak id <_UITextFieldVisualStyleSubject> styleSubject; // @synthesize styleSubject=_styleSubject;
- (void)handleTextVibrancy;	// IMP=0x0000000001491f70
- (_Bool)textShouldUseVibrancy;	// IMP=0x0000000001491ea8
- (id)parentViewForTextContentView;	// IMP=0x0000000001491de0
- (id)placeholderColor;	// IMP=0x0000000001491d18
- (id)defaultFocusedTextColor;	// IMP=0x0000000001491c50
- (id)defaultTextColorForKeyboardAppearance;	// IMP=0x0000000001491b88
- (id)defaultTextColor;	// IMP=0x0000000001491ac0
- (id)initWithStyleSubject:(id)arg1;	// IMP=0x0000000001491a0f

@end

