//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

@interface _TtC15ConversationKit17SharedContentView : UIView
{
    MISSING_TYPE *contentView;	// 8 = 0x8
    MISSING_TYPE *videoViewSnapshot;	// 16 = 0x10
    MISSING_TYPE *videoView;	// 24 = 0x18
    MISSING_TYPE *videoOverlayView;	// 32 = 0x20
    MISSING_TYPE *mostRecentViewModelHash;	// 40 = 0x28
    MISSING_TYPE *loggingIdentifier;	// 0 = 0x0
    MISSING_TYPE *participantIdentifier;	// 1884499827 = 0x70532f73
    MISSING_TYPE *delegate;	// 104 = 0x68
    MISSING_TYPE *customCornerRadius;	// 1634887214 = 0x6172662e
    MISSING_TYPE *isPaused;	// 1701667186 = 0x656d6172
    MISSING_TYPE *isScreenSharing;	// 12 = 0xc
    MISSING_TYPE *deviceOrientation;	// 0 = 0x0
    MISSING_TYPE *systemRootLayerTransform;	// 1395616626 = 0x532f6b72
}

- (void).cxx_destruct;	// IMP=0x00000000003daae8
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;	// IMP=0x00000000003da329
- (void)layoutSubviews;	// IMP=0x00000000003da194
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003d9c93
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003d9a88

@end

