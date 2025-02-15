//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSEngagementRequest, AMSEngagementResult, AMSProcessInfo, NSError, NSObject, NSString, NSXPCListener, UIViewController;
@protocol AMSBagProtocol, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface AMSUIEngagementRemoteViewTask : AMSTask
{
    id <AMSBagProtocol> _bag;	// 8 = 0x8
    AMSProcessInfo *_clientInfo;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_dispatchGroup;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    UIViewController *_presentedViewController;	// 40 = 0x28
    NSXPCListener *_remoteListener;	// 48 = 0x30
    AMSEngagementRequest *_request;	// 56 = 0x38
    AMSEngagementResult *_result;	// 64 = 0x40
    UIViewController *_viewController;	// 72 = 0x48
    struct CGSize _preferredContentSize;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000028e1d
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) AMSEngagementResult *result; // @synthesize result=_result;
@property(retain, nonatomic) AMSEngagementRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSXPCListener *remoteListener; // @synthesize remoteListener=_remoteListener;
@property(retain, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
@property(nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (void)_presentViewController:(id)arg1;	// IMP=0x00000000000289d1
- (void)_unblock;	// IMP=0x000000000002895e
- (id)_snapshotBagDataPromise;	// IMP=0x0000000000028827
- (void)preferredContentSizeDidChange:(struct CGSize)arg1;	// IMP=0x0000000000028659
- (void)engagementTaskDidFinishWithResult:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000282f3
- (id)presentEngagement;	// IMP=0x00000000000277af
- (id)initWithRequest:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x00000000000276dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

