//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUIActivation/NSObject-Protocol.h>

@class AFUISiriSetupViewController, NSURL;

@protocol AFUISiriSetupViewControllerDelegate <NSObject>
- (void)openSiriRequestedBySiriSetupViewController:(AFUISiriSetupViewController *)arg1;
- (void)disableSiriActivationRequestedBySiriSetupViewController:(AFUISiriSetupViewController *)arg1;
- (_Bool)siriSetupViewController:(AFUISiriSetupViewController *)arg1 openURL:(NSURL *)arg2;
- (void)dismissSiriSetupViewController:(AFUISiriSetupViewController *)arg1;

@optional
- (void)updateHomeGestureSharingForSiriSetup:(_Bool)arg1;
@end

