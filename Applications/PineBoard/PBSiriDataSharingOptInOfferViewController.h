//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString;
@protocol PBSiriDataSharingOptInOfferViewControllerDelegate;

@interface PBSiriDataSharingOptInOfferViewController : UIViewController
{
    id <PBSiriDataSharingOptInOfferViewControllerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000075edf
@property(nonatomic) __weak id <PBSiriDataSharingOptInOfferViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didNotCompleteOptIn;	// IMP=0x0010000000075e63
- (void)_optOut;	// IMP=0x0010000000075e14
- (void)_optIn;	// IMP=0x0010000000075dc2
- (void)_handleHomeButton:(id)arg1;	// IMP=0x0010000000075d6f
- (void)_handleMenuButton:(id)arg1;	// IMP=0x0010000000075d1c
- (void)viewDidLoad;	// IMP=0x00100000000754d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

