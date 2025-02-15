//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMetricsEvent, AMSUIWebClientContext, AMSUIWebNavigationBarModel, NSBundle, NSError, NSString;
@protocol AMSUIWebActionRunnable;

__attribute__((visibility("hidden")))
@interface AMSUIWebErrorPageModel : NSObject
{
    _Bool _errorMessageInternalOnly;	// 8 = 0x8
    NSString *_backgroundColor;	// 16 = 0x10
    NSString *_errorMessage;	// 24 = 0x18
    AMSMetricsEvent *_impressionEvent;	// 32 = 0x20
    AMSUIWebNavigationBarModel *_navigationBar;	// 40 = 0x28
    id <AMSUIWebActionRunnable> _action;	// 48 = 0x30
    CDUnknownBlockType _actionBlock;	// 56 = 0x38
    NSString *_actionButtonTitle;	// 64 = 0x40
    NSError *_error;	// 72 = 0x48
    NSString *_errorTitle;	// 80 = 0x50
    NSBundle *_bundle;	// 88 = 0x58
    AMSUIWebClientContext *_context;	// 96 = 0x60
    struct CGSize _windowSize;	// 104 = 0x68
}

+ (id)_messageFromError:(id)arg1;	// IMP=0x0010000000085244
- (void).cxx_destruct;	// IMP=0x0000000000085543
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
@property(nonatomic) _Bool errorMessageInternalOnly; // @synthesize errorMessageInternalOnly=_errorMessageInternalOnly;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) id <AMSUIWebActionRunnable> action; // @synthesize action=_action;
@property(readonly, nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) AMSMetricsEvent *impressionEvent; // @synthesize impressionEvent=_impressionEvent;
@property(readonly, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)loadPage;	// IMP=0x000000000008522b
@property(readonly, nonatomic) _Bool disableReappearPlaceholder;
- (id)createViewControllerForContainer:(id)arg1;	// IMP=0x00000000000851ba
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000084990
- (id)initWithError:(id)arg1 context:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000084702

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

