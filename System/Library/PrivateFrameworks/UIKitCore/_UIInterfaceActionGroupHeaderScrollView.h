//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionGroupHeaderScrollView
{
    NSArray *_constraints;	// 168 = 0xa8
    UIView *_contentView;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000002685e6
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)updateConstraints;	// IMP=0x00000000002681fc
- (void)accessoryInsetsDidChange:(struct UIEdgeInsets)arg1;	// IMP=0x00000000002681aa
- (double)_contentFitCanScrollThreshold;	// IMP=0x000000000026819c
- (id)initWithContentView:(id)arg1;	// IMP=0x00000000002680c7

@end

