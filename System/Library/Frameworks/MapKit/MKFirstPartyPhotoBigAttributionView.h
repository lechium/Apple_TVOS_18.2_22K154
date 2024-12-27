//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MKFirstPartyPhotoBigAttributionView
{
    UIImageView *_glyphView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000112ac7
- (void)didEndAnimatingActivityIndicatorView;	// IMP=0x0000000000112aa2
- (void)willStartAnimatingActivityIndicatorView;	// IMP=0x0000000000112a82
- (void)didUpdateMapItem;	// IMP=0x0000000000112a7c
- (void)didUpdateAttributionViewType;	// IMP=0x00000000001129ea
@property(readonly, nonatomic) UIImage *glyphImage;
@property(readonly, nonatomic) NSString *titleText;
- (void)_setupConstraints;	// IMP=0x00000000001122d9
- (void)_setupSubviews;	// IMP=0x00000000001120cc
- (id)initWithContext:(long long)arg1;	// IMP=0x000000000011205e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

