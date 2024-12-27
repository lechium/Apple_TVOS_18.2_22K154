//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, UIScreen, UITraitCollection;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionVisualStyleViewState : NSObject
{
    UITraitCollection *_traitCollection;	// 8 = 0x8
    UIScreen *_screen;	// 16 = 0x10
    UIColor *_tintColor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000024da22
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (_Bool)_stateEqualToVisualStyleViewState:(id)arg1;	// IMP=0x000000000024d90e
- (void)_collectStateFromVisualStyleViewState:(id)arg1;	// IMP=0x000000000024d867
- (void)_collectStateFromScreen:(id)arg1;	// IMP=0x000000000024d7d7
- (void)_collectStateFromView:(id)arg1;	// IMP=0x000000000024d6d6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024d67d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024d648
- (id)description;	// IMP=0x000000000024d5be
- (id)copyWithScreen:(id)arg1;	// IMP=0x000000000024d57f
- (id)copyWithTraitCollection:(id)arg1;	// IMP=0x000000000024d540
- (id)initWithPropertiesFromTopLevelView:(id)arg1;	// IMP=0x000000000024d48d
- (id)init;	// IMP=0x000000000024d479

@end

