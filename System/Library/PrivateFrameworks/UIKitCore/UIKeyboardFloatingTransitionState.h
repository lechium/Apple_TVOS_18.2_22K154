//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardFloatingTransitionState : NSObject
{
    UIView *_inputView;	// 8 = 0x8
    double _borderWidth;	// 16 = 0x10
    UIColor *_borderColor;	// 24 = 0x18
    double _cornerRadius;	// 32 = 0x20
    struct CGPoint _scale;	// 40 = 0x28
    struct CGRect _inputViewFrame;	// 56 = 0x38
    struct CGRect _platterViewFrame;	// 88 = 0x58
    struct UIEdgeInsets _platterInsets;	// 120 = 0x78
    struct CGAffineTransform _initialInputViewTransform;	// 152 = 0x98
    struct CGAffineTransform _finalInputViewTransform;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000011e99d8
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) struct CGAffineTransform finalInputViewTransform; // @synthesize finalInputViewTransform=_finalInputViewTransform;
@property(nonatomic) struct CGAffineTransform initialInputViewTransform; // @synthesize initialInputViewTransform=_initialInputViewTransform;
@property(nonatomic) struct CGPoint scale; // @synthesize scale=_scale;
@property(nonatomic) struct UIEdgeInsets platterInsets; // @synthesize platterInsets=_platterInsets;
@property(nonatomic) struct CGRect platterViewFrame; // @synthesize platterViewFrame=_platterViewFrame;
@property(nonatomic) struct CGRect inputViewFrame; // @synthesize inputViewFrame=_inputViewFrame;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;

@end

