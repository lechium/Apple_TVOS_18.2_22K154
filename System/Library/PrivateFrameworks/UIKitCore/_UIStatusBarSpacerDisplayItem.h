//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarDisplayItem.h"

@class NSArray, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface _UIStatusBarSpacerDisplayItem : _UIStatusBarDisplayItem
{
    UILayoutGuide *_layoutGuide;	// 8 = 0x8
    NSArray *_constraints;	// 16 = 0x10
    struct CGSize _size;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000011d8b86
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
- (void)_applyConstraintsIfNeeded;	// IMP=0x00000000011d8a9e
- (void)setContainerView:(id)arg1;	// IMP=0x00000000011d89c9
- (void)applyUpdate:(id)arg1;	// IMP=0x00000000011d87de
- (id)initWithIdentifier:(id)arg1 item:(id)arg2;	// IMP=0x00000000011d879d

@end

