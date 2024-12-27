//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDFKitTextViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFKitTextView : NSObject
{
    PDFKitTextViewPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000061719
- (void)_didChangeZoomFactor:(id)arg1;	// IMP=0x0000000000061707
- (void)_applyScale:(double)arg1 toView:(id)arg2;	// IMP=0x0000000000061586
- (void)_updateScaleFactor;	// IMP=0x0000000000061512
- (void)_setAttributedString:(id)arg1;	// IMP=0x000000000006116b
- (void)_setupTopLevelView;	// IMP=0x0000000000060fc5
- (void)_setup;	// IMP=0x00000000000604c5
- (void)_setAlignment:(long long)arg1;	// IMP=0x00000000000604ab
- (void)_setFontColor:(id)arg1;	// IMP=0x0000000000060491
- (void)_setFont:(id)arg1;	// IMP=0x0000000000060403
- (void)_setString:(id)arg1;	// IMP=0x00000000000603ae
- (_Bool)handleBackTab;	// IMP=0x000000000006033e
- (_Bool)handleTab;	// IMP=0x00000000000602ce
- (_Bool)textView:(id)arg1 doCommandBySelector:(SEL)arg2;	// IMP=0x00000000000602c6
- (void)adjustScrollViewToAccomodateKeyboardStartingFrame:(struct CGRect)arg1 endingFrame:(struct CGRect)arg2 annotationFrame:(struct CGRect)arg3 withAnimationDuration:(double)arg4 curve:(long long)arg5;	// IMP=0x000000000005fce4
- (void)_adjustScrollViewForKeyboardNotification:(id)arg1;	// IMP=0x000000000005f96b
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x000000000005f959
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x000000000005f947
- (void)_textWidgetDone;	// IMP=0x000000000005f8a0
- (void)textViewDidChange:(id)arg1;	// IMP=0x000000000005f7df
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x000000000005f716
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x000000000005f704
- (void)_commitTextFromTextView:(id)arg1;	// IMP=0x000000000005f35f
- (void)autoFillDidInsertWithExplicitInvocationMode:(_Bool)arg1;	// IMP=0x000000000005f322
- (void)insertTextSuggestion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005f31c
- (_Bool)becomeFirstResponder;	// IMP=0x000000000005f298
- (void)removeFromSuperview;	// IMP=0x000000000005f27e
- (void)rotateByAngle:(double)arg1;	// IMP=0x000000000005f278
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000005f25e
- (id)annotation;	// IMP=0x000000000005f244
- (id)layer;	// IMP=0x000000000005f22a
- (id)textView;	// IMP=0x000000000005f218
- (id)initWithAnnotation:(id)arg1 pdfPageView:(id)arg2 pdfView:(id)arg3;	// IMP=0x000000000005ef2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

