//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonView.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface AMSUIWebSnapshotView : AMSUICommonView
{
    UIView *_snapshot;	// 8 = 0x8
    double _originalRatio;	// 16 = 0x10
    long long _originalInterfaceStyle;	// 24 = 0x18
    unsigned long long _visibilityModifiers;	// 32 = 0x20
}

+ (void)_screenCapFromView:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00600000000b3ef1
+ (id)_imageViewForImage:(id)arg1;	// IMP=0x00600000000b3ea4
- (void).cxx_destruct;	// IMP=0x00000000000b45e1
@property(nonatomic) unsigned long long visibilityModifiers; // @synthesize visibilityModifiers=_visibilityModifiers;
@property(nonatomic) long long originalInterfaceStyle; // @synthesize originalInterfaceStyle=_originalInterfaceStyle;
@property(nonatomic) double originalRatio; // @synthesize originalRatio=_originalRatio;
@property(retain, nonatomic) UIView *snapshot; // @synthesize snapshot=_snapshot;
- (_Bool)_visibilityUnmodified;	// IMP=0x00000000000b453b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000b420f
- (void)layoutSubviews;	// IMP=0x00000000000b3a4b
- (id)removeSnapshot;	// IMP=0x00000000000b39d5
- (void)updateSnapshot:(id)arg1;	// IMP=0x00000000000b393d
- (id)initWithView:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b3714

@end

