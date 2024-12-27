//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, TVNPShareAudioMainViewController;

@interface TVNPShareAudioHostViewController : UIViewController
{
    TVNPShareAudioMainViewController *_shareAudioViewController;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0020000000007590
+ (id)_exportedInterface;	// IMP=0x0010000000007450
- (void).cxx_destruct;	// IMP=0x00200000000076e0
@property(retain, nonatomic) TVNPShareAudioMainViewController *shareAudioViewController; // @synthesize shareAudioViewController=_shareAudioViewController;
- (void)viewControllerDidRequestDismissal:(id)arg1 cancelled:(_Bool)arg2;	// IMP=0x0010000000007600
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007300
- (void)viewServiceHandleMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007290
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0010000000007170
- (void)viewDidLoad;	// IMP=0x0010000000007130

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

