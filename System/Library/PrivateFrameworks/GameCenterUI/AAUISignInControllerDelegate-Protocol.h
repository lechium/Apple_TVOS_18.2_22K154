//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/UINavigationControllerDelegate-Protocol.h>

@class AAUISignInController, AIDAServiceContext, NSDictionary, NSError;

@protocol AAUISignInControllerDelegate <UINavigationControllerDelegate>

@optional
- (AIDAServiceContext *)serviceContext;
- (void)signInControllerDidSelectChildSignIn:(AAUISignInController *)arg1;
- (void)signInControllerDidSkip:(AAUISignInController *)arg1;
- (void)signInControllerDidCancel:(AAUISignInController *)arg1;
- (void)signInController:(AAUISignInController *)arg1 didCompleteWithOperationsResults:(NSDictionary *)arg2;
- (void)signInController:(AAUISignInController *)arg1 didCompleteWithSuccess:(_Bool)arg2 error:(NSError *)arg3;
@end

