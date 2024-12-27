//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFLayerController, PDFView, UIColor;

__attribute__((visibility("hidden")))
@interface PDFRenderingPropertiesPrivate : NSObject
{
    PDFView *pdfView;	// 8 = 0x8
    PDFLayerController *pdfLayerController;	// 16 = 0x10
    long long displayBox;	// 24 = 0x18
    _Bool shouldAntiAlias;	// 32 = 0x20
    double greekingThreshold;	// 40 = 0x28
    long long interpolationQuality;	// 48 = 0x30
    double lineWidthThreshold;	// 56 = 0x38
    UIColor *pageColor;	// 64 = 0x40
    _Bool enablePageShadows;	// 72 = 0x48
    _Bool enableTileEdgeColoring;	// 73 = 0x49
    _Bool enableAccessibilityDrawing;	// 74 = 0x4a
    double screenScaleFactor;	// 80 = 0x50
    _Bool enableTileUpdates;	// 88 = 0x58
    _Bool enableBackgroundImages;	// 89 = 0x59
    _Bool isUsingPDFExtensionView;	// 90 = 0x5a
    struct CGColorSpace *deviceColorSpace;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000000445b

@end

