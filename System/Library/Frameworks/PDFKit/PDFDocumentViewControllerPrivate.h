//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, PDFPageBackgroundManager, PDFPageViewController, PDFRenderingProperties, PDFView, UIScrollView;

__attribute__((visibility("hidden")))
@interface PDFDocumentViewControllerPrivate : NSObject
{
    PDFView *pdfView;	// 8 = 0x8
    PDFRenderingProperties *renderingProperties;	// 16 = 0x10
    PDFPageViewController *activePageView;	// 24 = 0x18
    PDFPageBackgroundManager *pageBackgroundManager;	// 32 = 0x20
    struct os_unfair_lock_s weakPageViewControllersLock;	// 40 = 0x28
    NSHashTable *weakPageViewControllers;	// 48 = 0x30
    double minScale;	// 56 = 0x38
    double maxScale;	// 64 = 0x40
    _Bool displaysRTL;	// 72 = 0x48
    UIScrollView *scrollView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000316f3

@end

