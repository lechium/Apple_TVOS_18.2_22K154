//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface BFFSplashButton : NSObject
{
    UIButton *_button;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    CDUnknownBlockType _action;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000719a
@property(copy) CDUnknownBlockType action; // @synthesize action=_action;
@property long long style; // @synthesize style=_style;
@property(retain) UIButton *button; // @synthesize button=_button;

@end

