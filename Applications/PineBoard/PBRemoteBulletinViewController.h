//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@class NSString;
@protocol PBRemoteBulletinViewControllerDelegate;

@interface PBRemoteBulletinViewController : _UIRemoteViewController
{
    struct {
        unsigned int respondsToDidReceiveBulletinResponse:1;
    } _delegateFlags;	// 8 = 0x8
    _Bool _userInteractionEnabled;	// 12 = 0xc
    id <PBRemoteBulletinViewControllerDelegate> _delegate;	// 16 = 0x10
    CDUnknownBlockType _clientPresentationCompletion;	// 24 = 0x18
}

+ (id)exportedInterface;	// IMP=0x002000000011f66d
+ (id)serviceViewControllerInterface;	// IMP=0x001000000011f652
- (void).cxx_destruct;	// IMP=0x002000000011f93f
@property(copy, nonatomic) CDUnknownBlockType clientPresentationCompletion; // @synthesize clientPresentationCompletion=_clientPresentationCompletion;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic) __weak id <PBRemoteBulletinViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_callClientCompletionWithSuccess:(_Bool)arg1;	// IMP=0x001000000011f7bd
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000011f777
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x001000000011f688
- (void)didReceiveBulletinResponse:(id)arg1;	// IMP=0x001000000011f5dc
- (void)dismissViewServiceWithReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000011f09e
- (void)updateViewServiceWithBulletin:(id)arg1;	// IMP=0x001000000011efa8
- (void)prepareViewServiceWithBulletin:(id)arg1;	// IMP=0x001000000011eeb2
- (void)toggleBulletinSize;	// IMP=0x001000000011ee74
- (void)handleMenuButtonWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000011ec6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

