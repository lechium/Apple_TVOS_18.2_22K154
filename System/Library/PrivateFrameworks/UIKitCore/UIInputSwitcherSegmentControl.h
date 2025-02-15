//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class NSArray, UIStackView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherSegmentControl : UIControl
{
    _Bool _usesDarkTheme;	// 8 = 0x8
    long long _selectedSegmentIndex;	// 16 = 0x10
    NSArray *_segmentTitles;	// 24 = 0x18
    NSArray *_segmentImages;	// 32 = 0x20
    UIStackView *_stackView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000c21eb3
@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSArray *segmentImages; // @synthesize segmentImages=_segmentImages;
@property(copy, nonatomic) NSArray *segmentTitles; // @synthesize segmentTitles=_segmentTitles;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000c21d80
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000c21cc5
- (_Bool)shouldTrack;	// IMP=0x0000000000c21cbd
@property(readonly, nonatomic) unsigned long long numberOfSegments;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;	// IMP=0x0000000000c21ba2
- (void)_populateSegmentViewsWithCount:(unsigned long long)arg1;	// IMP=0x0000000000c215f7
- (void)_removeAllSegmentViews;	// IMP=0x0000000000c2142f
- (void)layoutSubviews;	// IMP=0x0000000000c213ba
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000c2110d

@end

