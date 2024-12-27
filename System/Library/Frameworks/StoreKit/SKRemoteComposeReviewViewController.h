//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@class NSString, SKComposeReviewViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteComposeReviewViewController : _UIRemoteViewController
{
    SKComposeReviewViewController *_composeReviewViewController;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x001000000002ba15
+ (id)exportedInterface;	// IMP=0x001000000002b9f5
- (void).cxx_destruct;	// IMP=0x000000000002bf3b
@property(nonatomic) __weak SKComposeReviewViewController *composeReviewViewController; // @synthesize composeReviewViewController=_composeReviewViewController;
- (void)promptForStarRating;	// IMP=0x000000000002bd69
- (void)didPrepareWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000002bcd7
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000002bc45
- (void)_keyboardVisibilityDidChangeNotification:(id)arg1;	// IMP=0x000000000002ba92
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x000000000002ba35
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x000000000002b9b7
- (void)dealloc;	// IMP=0x000000000002b915
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000002b857

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

