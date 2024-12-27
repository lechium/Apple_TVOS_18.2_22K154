//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUndoManager, PDFAnnotation, PDFPageView, PDFView, UITextView, UIViewController;

__attribute__((visibility("hidden")))
@interface PDFKitPopupViewPrivate : NSObject
{
    PDFAnnotation *parentAnnotation;	// 8 = 0x8
    PDFPageView *pageView;	// 16 = 0x10
    PDFView *view;	// 24 = 0x18
    UITextView *popupTextView;	// 32 = 0x20
    NSUndoManager *popupTextViewUndoManager;	// 40 = 0x28
    UIViewController *popupController;	// 48 = 0x30
    NSString *contents;	// 56 = 0x38
    _Bool deviceIsiPhone;	// 64 = 0x40
    _Bool deviceIsiPad;	// 65 = 0x41
    id savedFirstResponder;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000024889

@end

