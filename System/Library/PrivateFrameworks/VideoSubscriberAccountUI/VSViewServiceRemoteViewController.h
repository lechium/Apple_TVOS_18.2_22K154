//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSString;
@protocol VSViewServiceRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSViewServiceRemoteViewController : _UIRemoteViewController
{
    id <VSViewServiceRemoteViewControllerDelegate> _delegate;	// 8 = 0x8
}

+ (_Bool)shouldPropagateAppearanceCustomizations;	// IMP=0x0010000000070916
+ (id)exportedInterface;	// IMP=0x0010000000070868
+ (id)serviceViewControllerInterface;	// IMP=0x001000000007084f
- (void).cxx_destruct;	// IMP=0x0000000000071005
@property(nonatomic) __weak id <VSViewServiceRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didChooseProviderWithIdentifier:(id)arg1 vetoHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000070ec8
- (void)_didCancelRequest:(id)arg1;	// IMP=0x0000000000070dd9
- (void)_didChooseAdditionalProvidersForRequest:(id)arg1;	// IMP=0x0000000000070cea
- (void)_request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000070bda
- (void)_request:(id)arg1 didFinishWithResponse:(id)arg2;	// IMP=0x0000000000070aca
- (void)_dismissViewController;	// IMP=0x00000000000709f4
- (void)_presentViewController;	// IMP=0x000000000007091e
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0000000000070881
- (void)dealloc;	// IMP=0x0000000000070819
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000007079c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

