//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;
@protocol NSCopying;

@interface _TtC12PhotosUICoreP33_D2105462B28C8B244908FEC7DAEF9E2941PhotosDynamicHeaderLayoutDebugOverlayView : UIView
{
    MISSING_TYPE *boundsIndicator;	// 8 = 0x8
    MISSING_TYPE *mainContentIndicator;	// 16 = 0x10
    MISSING_TYPE *safeAreaIndicator;	// 24 = 0x18
    MISSING_TYPE *floatingAreaIndicator;	// 32 = 0x20
    MISSING_TYPE *insets;	// 40 = 0x28
    MISSING_TYPE *insetsObservation;	// 80 = 0x50
    MISSING_TYPE *userData;	// 96 = 0x60
    MISSING_TYPE *clippingRect;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000001f9d30
- (void)prepareForReuse;	// IMP=0x00000000001f9cd0
- (void)becomeReusable;	// IMP=0x00000000001f9c90
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect;
@property(nonatomic, retain) id <NSCopying> userData; // @synthesize userData;
- (void)layoutSubviews;	// IMP=0x00000000001f9a80
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f8f60
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001f8f30

@end

