//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUIDynamicViewController.h"

@class AMSUIWebClientContext, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebDynamicViewController : AMSUIDynamicViewController
{
    AMSUIWebClientContext *_context;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000083d54
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;	// IMP=0x0000000000083d29
- (void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3;	// IMP=0x0000000000083cc3
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;	// IMP=0x0000000000083b99
- (id)initWithContext:(id)arg1 URL:(id)arg2;	// IMP=0x0000000000083adf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

