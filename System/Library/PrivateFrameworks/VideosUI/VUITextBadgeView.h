//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSAttributedString, NSOperation, NSOperationQueue, NSTimer, UIColor, UIImage, UIView, VUIRentalExpirationLabel;
@protocol VUITextBadgeViewDelegate;

__attribute__((visibility("hidden")))
@interface VUITextBadgeView
{
    _Bool _isUppercased;	// 8 = 0x8
    _Bool _backgroundImageForMaterialRenderingHasChanged;	// 9 = 0x9
    int _blendMode;	// 12 = 0xc
    NSAttributedString *_attributedTitle;	// 16 = 0x10
    double _strokeSize;	// 24 = 0x18
    UIImage *_backgroundImage;	// 32 = 0x20
    UIView *_imageView;	// 40 = 0x28
    VUIRentalExpirationLabel *_rentalExpirationLabel;	// 48 = 0x30
    id <VUITextBadgeViewDelegate> _delegate;	// 56 = 0x38
    UIImage *_backgroundImageForMaterialRendering;	// 64 = 0x40
    unsigned long long _badgeKind;	// 72 = 0x48
    double _minHeight;	// 80 = 0x50
    NSArray *_gradientBgColors;	// 88 = 0x58
    UIColor *_backgroundColor;	// 96 = 0x60
    UIColor *_tintColor;	// 104 = 0x68
    double _layerCornerRadius;	// 112 = 0x70
    NSTimer *_expiryUpdateTimer;	// 120 = 0x78
    NSOperation *_pendingOperation;	// 128 = 0x80
    NSOperationQueue *_operationQueue;	// 136 = 0x88
    struct CGSize _glyphSize;	// 144 = 0x90
    struct UIEdgeInsets _padding;	// 160 = 0xa0
}

+ (_Bool)_viewBackgroundImageNeedsUpdatingWithFrame:(struct CGRect)arg1 currentBackgroundImage:(id)arg2;	// IMP=0x0060000000181b65
+ (id)badgeWithLayout:(id)arg1 existing:(id)arg2;	// IMP=0x006000000017fde2
- (void).cxx_destruct;	// IMP=0x0000000000181f27
@property(nonatomic) _Bool backgroundImageForMaterialRenderingHasChanged; // @synthesize backgroundImageForMaterialRenderingHasChanged=_backgroundImageForMaterialRenderingHasChanged;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSOperation *pendingOperation; // @synthesize pendingOperation=_pendingOperation;
@property(retain, nonatomic) NSTimer *expiryUpdateTimer; // @synthesize expiryUpdateTimer=_expiryUpdateTimer;
@property(nonatomic) struct CGSize glyphSize; // @synthesize glyphSize=_glyphSize;
@property(nonatomic) double layerCornerRadius; // @synthesize layerCornerRadius=_layerCornerRadius;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) _Bool isUppercased; // @synthesize isUppercased=_isUppercased;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSArray *gradientBgColors; // @synthesize gradientBgColors=_gradientBgColors;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) unsigned long long badgeKind; // @synthesize badgeKind=_badgeKind;
@property(retain, nonatomic) UIImage *backgroundImageForMaterialRendering; // @synthesize backgroundImageForMaterialRendering=_backgroundImageForMaterialRendering;
@property(nonatomic) __weak id <VUITextBadgeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VUIRentalExpirationLabel *rentalExpirationLabel; // @synthesize rentalExpirationLabel=_rentalExpirationLabel;
@property(retain, nonatomic) UIView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) double strokeSize; // @synthesize strokeSize=_strokeSize;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000181c0d
- (_Bool)_textBadgeBackgroundImageNeedsUpdating;	// IMP=0x0000000000181ab1
- (void)_cancelPendingOperation;	// IMP=0x0000000000181957
- (void)_redrawView:(id)arg1 withDuration:(double)arg2;	// IMP=0x000000000018185e
- (void)_redrawTextBadgeWithDuration:(double)arg1;	// IMP=0x0000000000181849
- (void)_updateBackgroundImagesWithCompletedOperation:(id)arg1;	// IMP=0x0000000000181731
- (void)_updateBackgroundMaterialImagesWithBackgroundImageSize:(struct CGSize)arg1 performSynchronously:(_Bool)arg2 overlayViewFrame:(struct CGRect)arg3;	// IMP=0x00000000001812b2
- (void)setBackgroundImageForMaterialRendering:(id)arg1 imageSize:(struct CGSize)arg2 overlayViewFrame:(struct CGRect)arg3;	// IMP=0x000000000018121a
- (void)setBackgroundImageForMaterialRendering:(id)arg1 imageSize:(struct CGSize)arg2 overlayViewFrame:(struct CGRect)arg3 operationQueue:(id)arg4;	// IMP=0x0000000000181151
- (void)_setBackgroundImageForMaterialRendering:(id)arg1;	// IMP=0x000000000018110f
- (void)_imageLoaded;	// IMP=0x00000000001810e1
- (struct CGSize)_textSize;	// IMP=0x0000000000180f2f
- (void)_invalidateTimer;	// IMP=0x0000000000180ef7
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000001807a8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000180684
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x000000000018065b
- (void)dealloc;	// IMP=0x000000000018057a
- (void)reset;	// IMP=0x0000000000180488
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;	// IMP=0x0000000000180406
- (_Bool)isAccessibilityElement;	// IMP=0x00000000001801bb
- (id)accessibilityTitle;	// IMP=0x00000000001801a9
- (id)accessibilityLabel;	// IMP=0x0000000000180173
- (void)_configureWithLayout:(id)arg1;	// IMP=0x000000000017feb7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000017fd27

@end

