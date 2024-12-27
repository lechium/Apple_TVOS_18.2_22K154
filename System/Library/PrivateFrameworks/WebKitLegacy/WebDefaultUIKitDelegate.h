//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDefaultUIKitDelegate : NSObject
{
}

+ (id)sharedUIKitDelegate;	// IMP=0x00800000000e57f0
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3;	// IMP=0x00000000000e5be0
- (void)webViewDidDrawTiles:(id)arg1;	// IMP=0x00000000000e5bd0
- (void)webView:(id)arg1 willAddPlugInView:(id)arg2;	// IMP=0x00000000000e5bc0
- (long long)getPasteboardChangeCount;	// IMP=0x00000000000e5bb0
- (_Bool)performTwoStepDrop:(id)arg1 atDestination:(id)arg2 isMove:(_Bool)arg3;	// IMP=0x00000000000e5ba0
- (_Bool)performsTwoStepPaste:(id)arg1;	// IMP=0x00000000000e5b90
- (_Bool)hasRichlyEditableSelection;	// IMP=0x00000000000e5b80
- (_Bool)shouldSuppressPasswordEcho;	// IMP=0x00000000000e5b70
- (int)deviceOrientation;	// IMP=0x00000000000e5b60
- (void)showPlaybackTargetPicker:(_Bool)arg1 fromRect:(struct CGRect)arg2;	// IMP=0x00000000000e5b50
- (_Bool)shouldRevealCurrentSelectionAfterInsertion;	// IMP=0x00000000000e5b40
- (struct CGPoint)interactionLocation;	// IMP=0x00000000000e5b20
- (id)supportedPasteboardTypesForCurrentSelection;	// IMP=0x00000000000e5b10
- (long long)getPasteboardItemsCount;	// IMP=0x00000000000e5b00
- (id)readDataFromPasteboard:(id)arg1 withIndex:(long long)arg2;	// IMP=0x00000000000e5af0
- (void)writeDataToPasteboard:(id)arg1;	// IMP=0x00000000000e5ae0
- (id)checkSpellingOfString:(id)arg1;	// IMP=0x00000000000e5ad0
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 configuration:(id)arg3;	// IMP=0x00000000000e5ab0
- (void)webViewDidEndOverflowScroll:(id)arg1;	// IMP=0x00000000000e5aa0
- (void)webViewDidStartOverflowScroll:(id)arg1;	// IMP=0x00000000000e5a90
- (void)webViewDidLayout:(id)arg1;	// IMP=0x00000000000e5a80
- (void)revealedSelectionByScrollingWebFrame:(id)arg1;	// IMP=0x00000000000e5a70
- (void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4;	// IMP=0x00000000000e5a60
- (void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(_Bool)arg6 allowVerticalScrollbar:(_Bool)arg7;	// IMP=0x00000000000e5a50
- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;	// IMP=0x00000000000e5a40
- (void)_webthread_webView:(id)arg1 attachRootLayer:(id)arg2;	// IMP=0x00000000000e5a30
- (void)deleteFromInputWithFlags:(unsigned long long)arg1;	// IMP=0x00000000000e5a20
- (void)deleteFromInput;	// IMP=0x00000000000e5a10
- (void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x00000000000e5a00
- (_Bool)handleKeyAppCommandForCurrentEvent;	// IMP=0x00000000000e59f0
- (_Bool)handleKeyTextCommandForCurrentEvent;	// IMP=0x00000000000e59e0
- (void)webView:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00000000000e59d0
- (void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2;	// IMP=0x00000000000e59c0
- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;	// IMP=0x00000000000e59b0
- (id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3;	// IMP=0x00000000000e59a0
- (void)webViewDidReceiveMobileDocType:(id)arg1;	// IMP=0x00000000000e5990
- (void)webViewDidRestoreFromPageCache:(id)arg1;	// IMP=0x00000000000e5980
- (void)webView:(id)arg1 elementDidBlurNode:(id)arg2;	// IMP=0x00000000000e5970
- (void)webView:(id)arg1 elementDidFocusNode:(id)arg2;	// IMP=0x00000000000e5960
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;	// IMP=0x00000000000e5950
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;	// IMP=0x00000000000e5940
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;	// IMP=0x00000000000e5930
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000e5920
- (void)webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;	// IMP=0x00000000000e5910
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;	// IMP=0x00000000000e5900
- (_Bool)webView:(id)arg1 shouldScrollToPoint:(struct CGPoint)arg2 forFrame:(id)arg3;	// IMP=0x00000000000e58f0
- (void)webViewDidPreventDefaultForEvent:(id)arg1;	// IMP=0x00000000000e58e0
- (void)webView:(id)arg1 didObserveDeferredContentChange:(int)arg2 forFrame:(id)arg3;	// IMP=0x00000000000e58d0
- (void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000e58c0
- (void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2;	// IMP=0x00000000000e58b0
- (void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(_Bool)arg4;	// IMP=0x00000000000e58a0
- (void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000e5890
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;	// IMP=0x00000000000e5880
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;	// IMP=0x00000000000e5870
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;	// IMP=0x00000000000e5860
- (struct CGRect)documentVisibleRectForWebView:(id)arg1;	// IMP=0x00000000000e5840
- (struct CGPoint)contentsPointForWebView:(id)arg1;	// IMP=0x00000000000e5820

@end

