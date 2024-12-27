//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSUUID, UITraitCollection, _UIAsyncInvocation, _UIRemoteViewControllerConnectionInfo, _UIRemoteViewService;
@protocol OS_dispatch_queue, _UIViewServiceDeputyXPCInterface;

__attribute__((visibility("hidden")))
@interface _UIRemoteViewControllerConnectionRequest : NSObject
{
    _UIRemoteViewService *_service;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    NSString *_viewServiceBundleIdentifier;	// 24 = 0x18
    NSString *_viewControllerClassName;	// 32 = 0x20
    NSUUID *_contextToken;	// 40 = 0x28
    UITraitCollection *_traits;	// 48 = 0x30
    id _exportedHostingObject;	// 56 = 0x38
    Class _remoteViewControllerClass;	// 64 = 0x40
    id <_UIViewServiceDeputyXPCInterface> _serviceViewControllerDeputyInterface;	// 72 = 0x48
    _UIAsyncInvocation *_cancelInvocationForCurrentOperation;	// 80 = 0x50
    _UIRemoteViewControllerConnectionInfo *_connectionInfo;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_queue;	// 96 = 0x60
    _Bool _isCancelledOrComplete;	// 104 = 0x68
    NSError *_error;	// 112 = 0x70
    _UIAsyncInvocation *_requestCancellationInvocation;	// 120 = 0x78
}

+ (id)requestViewControllerWithService:(id)arg1 traitCollection:(id)arg2 exportedHostingObject:(id)arg3 remoteViewControllerClass:(Class)arg4 serviceViewControllerDeputyInterface:(id)arg5 connectionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0060000001558891
+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 traitCollection:(id)arg3 exportedHostingObject:(id)arg4 serviceViewControllerDeputyInterface:(id)arg5 connectionHandler:(CDUnknownBlockType)arg6;	// IMP=0x006000000155885e
+ (id)__requestRemoteViewController:(id)arg1 service:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 traitCollection:(id)arg4 exportedHostingObject:(id)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0060000001557f08
- (void).cxx_destruct;	// IMP=0x000000000155ad4f
- (id)_cancelWithError:(id)arg1;	// IMP=0x000000000155acb1
- (void)_didFinishEstablishingConnection;	// IMP=0x000000000155abef
- (void)_connectToViewControllerControlMessageDeputy;	// IMP=0x000000000155aaf7
- (void)_connectToServiceViewController;	// IMP=0x000000000155a9f4
- (void)_sendServiceTextEffectsRequest;	// IMP=0x000000000155a7b8
- (void)_connectToTextEffectsOperator;	// IMP=0x000000000155a63f
- (void)_sendServiceViewControllerRequest;	// IMP=0x0000000001559c65
- (void)_connectToViewControllerOperator;	// IMP=0x0000000001559aec
- (void)_connectToPlugInKitService;	// IMP=0x0000000001559727
- (void)_connectToViewService;	// IMP=0x0000000001559362
- (void)_connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 successHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000001558fdf
- (void)_cancelUnconditionallyThen:(CDUnknownBlockType)arg1;	// IMP=0x0000000001558c7c
- (void)dealloc;	// IMP=0x000000000155898b

@end

