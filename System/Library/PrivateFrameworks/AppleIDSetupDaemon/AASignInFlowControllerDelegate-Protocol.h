//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleIDSetupDaemon/NSObject-Protocol.h>

@class AASignInFlowController, ACAccount, CDPContext, NSSet, NSString;

@protocol AASignInFlowControllerDelegate <NSObject>

@optional
@property(nonatomic, getter=isFastSignInEnabled) _Bool fastSignInEnabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisFastSignInEnabled

@property(nonatomic) unsigned long long findMyActivationAction;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(nonatomic) _Bool shouldStashLoginResponse;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool newSignInReauth;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(copy, nonatomic) NSString *deviceOSVersion;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(copy, nonatomic) NSSet *requiredTerms;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSSet",?,C,N

@property(nonatomic) _Bool skipDataclassEnablement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool backgroundDataclassEnablement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool skipCDPEnablement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(retain, nonatomic) CDPContext *cdpContext;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"CDPContext",?,&,N

- (void)signInFlowController:(AASignInFlowController *)arg1 presentProgressViewForAccount:(ACAccount *)arg2 completion:(void (^)(_Bool))arg3;
- (void)signInFlowController:(AASignInFlowController *)arg1 saveAccount:(ACAccount *)arg2 withAllDataclassesEnabledIfPossibleWithCompletion:(void (^)(_Bool, ACAccount *, NSError *))arg3;
- (void)signInFlowController:(AASignInFlowController *)arg1 enableFindMyWithAction:(unsigned long long)arg2 completion:(void (^)(_Bool))arg3;
- (void)signInFlowController:(AASignInFlowController *)arg1 presentGenericTermsUIForAccount:(ACAccount *)arg2 completion:(void (^)(_Bool, ACAccount *, NSError *))arg3;
- (void)signInFlowController:(AASignInFlowController *)arg1 showAlertWithTitle:(NSString *)arg2 message:(NSString *)arg3 completion:(void (^)(_Bool))arg4;
@end

