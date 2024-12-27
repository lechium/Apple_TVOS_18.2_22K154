//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage, UIMenu;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerSingleMenuAbstractProvider : NSObject
{
    NSString *_accessibilityIdentifier;	// 8 = 0x8
    UIMenu *_menu;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    UIImage *_image;	// 40 = 0x28
    unsigned long long _menuOptions;	// 48 = 0x30
}

+ (id)menuProviderWithTitle:(id)arg1 image:(id)arg2;	// IMP=0x0010000000139cc3
+ (id)inlineMenuProviderWithTitle:(id)arg1;	// IMP=0x0010000000139c72
- (void).cxx_destruct;	// IMP=0x0000000000139c29
@property(readonly, nonatomic) unsigned long long menuOptions; // @synthesize menuOptions=_menuOptions;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
- (_Bool)matchesMenu:(id)arg1;	// IMP=0x00000000001398f2
@property(readonly, nonatomic) NSArray *children;
- (void)prepareForDisplay;	// IMP=0x00000000001398bf
@property(readonly, nonatomic) NSArray *menuElements;
- (id)initWithTitle:(id)arg1 image:(id)arg2 menuOptions:(unsigned long long)arg3;	// IMP=0x00000000001397a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

