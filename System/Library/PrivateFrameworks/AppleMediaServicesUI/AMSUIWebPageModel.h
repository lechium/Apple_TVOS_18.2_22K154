//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMetricsEvent, AMSUIWebClientContext, AMSUIWebNavigationBarModel, AMSUIWebToolbarModel, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebPageModel : NSObject
{
    _Bool _ignoreBottomSafeArea;	// 8 = 0x8
    _Bool _ignoreTopSafeArea;	// 9 = 0x9
    NSString *_backgroundColor;	// 16 = 0x10
    AMSMetricsEvent *_impressionEvent;	// 24 = 0x18
    AMSUIWebNavigationBarModel *_navigationBar;	// 32 = 0x20
    AMSUIWebToolbarModel *_toolbar;	// 40 = 0x28
    AMSUIWebClientContext *_context;	// 48 = 0x30
    struct CGSize _windowSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000a5a39
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) AMSUIWebToolbarModel *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) _Bool ignoreTopSafeArea; // @synthesize ignoreTopSafeArea=_ignoreTopSafeArea;
@property(nonatomic) _Bool ignoreBottomSafeArea; // @synthesize ignoreBottomSafeArea=_ignoreBottomSafeArea;
@property(readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(readonly, nonatomic) AMSMetricsEvent *impressionEvent; // @synthesize impressionEvent=_impressionEvent;
@property(readonly, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy) NSString *description;
- (id)loadPage;	// IMP=0x00000000000a5696
@property(readonly, nonatomic) _Bool disableReappearPlaceholder;
- (id)createViewControllerForContainer:(id)arg1;	// IMP=0x00000000000a563e
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000000a5327

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

