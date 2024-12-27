//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSAuthenticateRequest, CDPUIController, UIViewController;

__attribute__((visibility("hidden")))
@interface AMSUIAuthenticateCloudTask : AMSTask
{
    CDPUIController *_cdpUIController;	// 8 = 0x8
    AMSAuthenticateRequest *_authRequest;	// 16 = 0x10
    UIViewController *_presentingViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000010f32
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) AMSAuthenticateRequest *authRequest; // @synthesize authRequest=_authRequest;
@property(retain, nonatomic) CDPUIController *cdpUIController; // @synthesize cdpUIController=_cdpUIController;
- (id)_serviceContextWithResults:(id)arg1 parentViewController:(id)arg2;	// IMP=0x0000000000010b30
- (id)performAuthenticate;	// IMP=0x0000000000010344
- (id)initWithAuthRequest:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x00000000000102a2

@end

