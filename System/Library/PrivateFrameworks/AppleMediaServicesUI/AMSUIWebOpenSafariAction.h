//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSUIWebClientContext, AMSUIWebSafariViewController, NSDictionary, NSString, NSURL, UIViewController;

__attribute__((visibility("hidden")))
@interface AMSUIWebOpenSafariAction
{
    NSURL *_URL;	// 8 = 0x8
    NSString *_callbackScheme;	// 16 = 0x10
    NSDictionary *_data;	// 24 = 0x18
    UIViewController *_presentedViewController;	// 32 = 0x20
    AMSUIWebSafariViewController *_safariViewController;	// 40 = 0x28
}

+ (id)resultFromURL:(id)arg1 error:(id)arg2;	// IMP=0x00100000000a2fdf
- (void).cxx_destruct;	// IMP=0x00000000000a3ff3
@property(nonatomic) __weak AMSUIWebSafariViewController *safariViewController; // @synthesize safariViewController=_safariViewController;
@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *callbackScheme; // @synthesize callbackScheme=_callbackScheme;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)_safariDataUpdate:(id)arg1;	// IMP=0x00000000000a3b08
- (_Bool)_presentViewContoller:(id)arg1;	// IMP=0x00000000000a3912
- (id)runAction;	// IMP=0x00000000000a3129
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000000a2de1

// Remaining properties
@property(readonly, nonatomic) AMSUIWebClientContext *context;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

