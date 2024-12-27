//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSMetricsEvent, AMSUIWebClientContext, AMSUIWebNavigationBarModel, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSUIWebDynamicPageModel : NSObject
{
    NSString *_backgroundColor;	// 8 = 0x8
    AMSMetricsEvent *_impressionEvent;	// 16 = 0x10
    AMSUIWebNavigationBarModel *_navigationBar;	// 24 = 0x18
    ACAccount *_account;	// 32 = 0x20
    NSDictionary *_clientOptions;	// 40 = 0x28
    NSDictionary *_metricsOverlay;	// 48 = 0x30
    NSURL *_URL;	// 56 = 0x38
    AMSUIWebClientContext *_context;	// 64 = 0x40
    struct CGSize _windowSize;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000083a75
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSDictionary *metricsOverlay; // @synthesize metricsOverlay=_metricsOverlay;
@property(retain, nonatomic) NSDictionary *clientOptions; // @synthesize clientOptions=_clientOptions;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) AMSMetricsEvent *impressionEvent; // @synthesize impressionEvent=_impressionEvent;
@property(readonly, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy) NSString *description;
- (id)loadPage;	// IMP=0x00000000000835d4
@property(readonly, nonatomic) _Bool disableReappearPlaceholder;
- (id)createViewControllerForContainer:(id)arg1;	// IMP=0x000000000008343f
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000083099

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

