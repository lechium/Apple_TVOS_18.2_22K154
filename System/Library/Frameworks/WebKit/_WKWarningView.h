//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _WKWarningView : UIScrollView
{
    struct CompletionHandler<void (std::variant<WebKit::ContinueUnsafeLoad, WTF::URL>&&)> _completionHandler;	// 8 = 0x8
    struct WeakObjCPtr<_WKWarningViewTextView> _details;	// 16 = 0x10
    struct WeakObjCPtr<_WKWarningViewBox> _box;	// 24 = 0x18
    RefPtr_10d169fd _warning;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000000066e7
- (void).cxx_destruct;	// IMP=0x0000000000006678
@property(readonly, nonatomic) RefPtr_10d169fd warning; // @synthesize warning=_warning;
- (_Bool)forMainFrameNavigation;	// IMP=0x0000000000006646
- (void)clickedOnLink:(id)arg1;	// IMP=0x0000000000006503
- (void)continueClicked;	// IMP=0x0000000000006465
- (void)goBackClicked;	// IMP=0x00000000000063c7
- (void)dealloc;	// IMP=0x00000000000062f0
- (void)didMoveToWindow;	// IMP=0x00000000000062de
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x00000000000062c6
- (void)layoutSubviews;	// IMP=0x0000000000006285
- (void)layoutText;	// IMP=0x0000000000006264
- (void)updateContentSize;	// IMP=0x000000000000603f
- (void)showDetailsClicked;	// IMP=0x0000000000005be9
- (void)addContent;	// IMP=0x0000000000005298
- (id)initWithFrame:(struct CGRect)arg1 browsingWarning:(const void *)arg2 completionHandler:(void *)arg3;	// IMP=0x0000000000004cfe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

