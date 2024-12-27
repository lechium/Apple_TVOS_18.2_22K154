//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFLayerController, PDFRenderingPropertiesPrivate, PDFView, UIColor;

__attribute__((visibility("hidden")))
@interface PDFRenderingProperties : NSObject
{
    PDFRenderingPropertiesPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000004a2c
- (void)_notifyPropertyChanged:(long long)arg1;	// IMP=0x000000000000493a
@property(nonatomic) struct CGColorSpace *deviceColorSpace;
@property(nonatomic) _Bool isUsingPDFExtensionView;
@property(nonatomic) _Bool enableBackgroundImages;
@property(nonatomic) _Bool enableTileUpdates;
@property(nonatomic) double screenScaleFactor;
@property(nonatomic) _Bool enablePageShadows;
@property(retain, nonatomic) UIColor *pageColor;
@property(nonatomic) double lineWidthThreshold;
@property(nonatomic) long long interpolationQuality;
@property(nonatomic) double greekingThreshold;
@property(nonatomic) _Bool shouldAntiAlias;
@property(nonatomic) long long displayBox;
@property(nonatomic, setter=setPDFLayerController:) __weak PDFLayerController *pdfLayerController;
@property(nonatomic, setter=setPDFView:) __weak PDFView *pdfView;
- (void)dealloc;	// IMP=0x00000000000045cb
- (id)init;	// IMP=0x000000000000448a

@end

