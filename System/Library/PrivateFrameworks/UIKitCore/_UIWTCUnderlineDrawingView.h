//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIBezierPath, UIColor;

__attribute__((visibility("hidden")))
@interface _UIWTCUnderlineDrawingView : UIView
{
    UIBezierPath *_path;	// 8 = 0x8
    UIColor *_color;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002d9c8b
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002d9be1
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000002d9ad8

@end

