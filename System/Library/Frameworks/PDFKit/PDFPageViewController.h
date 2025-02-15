//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, PDFPageViewControllerPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageViewController : UIViewController
{
    PDFPageViewControllerPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000007363
- (void)_centerAlign;	// IMP=0x00000000000071b2
- (void)didRotatePageNotification:(id)arg1;	// IMP=0x0000000000007191
- (void)changedBoundsForBoxNotification:(id)arg1;	// IMP=0x0000000000007170
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000000716a
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000000000710d
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000000070b0
- (id)viewForZoomingInScrollView:(id)arg1;	// IMP=0x0000000000007097
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000007076
- (void)scrollViewDidZoom:(id)arg1;	// IMP=0x0000000000006fe2
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;	// IMP=0x0000000000006ebc
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;	// IMP=0x0000000000006e1d
- (id)pdfView;	// IMP=0x0000000000006dfc
- (void)_updateAnnotations;	// IMP=0x0000000000006b84
- (void)_removePDFView;	// IMP=0x0000000000006af5
- (void)_setupGestureRecognizerDependencies;	// IMP=0x0000000000006a31
- (void)_buildPDFPageView;	// IMP=0x0000000000006340
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000006238
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000061b7
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000006168
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000060f8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000005f8e
- (void)removeAKOverlay;	// IMP=0x0000000000005eb0
- (void)dealloc;	// IMP=0x0000000000005e72
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000005de9
- (void)setBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2;	// IMP=0x0000000000005d72
- (id)selection;	// IMP=0x0000000000005d51
- (void)setSelection:(id)arg1;	// IMP=0x0000000000005d30
- (double)autoScaleFactor;	// IMP=0x0000000000005bd5
- (double)scaleFactor;	// IMP=0x0000000000005bb4
- (void)setScaleFactor:(double)arg1;	// IMP=0x0000000000005ac4
- (void)setMinScaleFactor:(double)arg1 withMaxScaleFactor:(double)arg2;	// IMP=0x00000000000059ad
- (void)enforceAutoScaleFactor;	// IMP=0x0000000000005911
- (void)setAutoScales:(_Bool)arg1;	// IMP=0x00000000000058f9
- (id)textInputView;	// IMP=0x00000000000058e0
- (id)scrollView;	// IMP=0x00000000000058c7
- (id)pageView;	// IMP=0x00000000000058ae
- (id)PDFPage;	// IMP=0x0000000000005895
- (void)setPDFPage:(id)arg1;	// IMP=0x0000000000005879
- (void)setPageBreakMargins:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000005858
- (void)setPDFView:(id)arg1;	// IMP=0x000000000000583c
- (void)setRenderingProperties:(id)arg1;	// IMP=0x0000000000005820

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

