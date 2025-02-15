//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIStackView, VSFontCenter;

__attribute__((visibility("hidden")))
@interface VSHeaderAccessoryView : UIView
{
    UIImage *_logo;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_message;	// 24 = 0x18
    UIStackView *_stackView;	// 32 = 0x20
    VSFontCenter *_fontCenter;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001a163
@property(retain, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *logo; // @synthesize logo=_logo;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000001a032
- (void)dealloc;	// IMP=0x0000000000019ffc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000019fa7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000196a3

@end

