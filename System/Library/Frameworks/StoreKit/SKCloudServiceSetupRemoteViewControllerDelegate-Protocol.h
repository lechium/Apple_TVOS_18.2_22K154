//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKit/NSObject-Protocol.h>

@class NSError, NSURL, SKCloudServiceSetupRemoteViewController;

@protocol SKCloudServiceSetupRemoteViewControllerDelegate <NSObject>
- (void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
- (void)overrideCreditCardPresentationWithCompletion:(void (^)(SUCreditCardReaderOutput *))arg1;
- (void)cloudServiceSetupRemoteViewController:(SKCloudServiceSetupRemoteViewController *)arg1 requestsDismissingSafariViewControllerAnimated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)cloudServiceSetupRemoteViewController:(SKCloudServiceSetupRemoteViewController *)arg1 requestsPresentingSafariViewControllerWithURL:(NSURL *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)cloudServiceSetupRemoteViewController:(SKCloudServiceSetupRemoteViewController *)arg1 requestsDismissalWithAnimation:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)cloudServiceSetupRemoteViewController:(SKCloudServiceSetupRemoteViewController *)arg1 didFinishLoadingWithSuccess:(_Bool)arg2 error:(NSError *)arg3;
@end

