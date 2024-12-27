//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccountUI/NSObject-Protocol.h>

@class NSDictionary, NSError, UINavigationController;

@protocol AAUIServiceSignInControllerDelegate <NSObject>

@optional
- (void)serviceSignInController:(UINavigationController *)arg1 didSkipWithReason:(long long)arg2;
- (void)serviceSignInControllerDidCancel:(UINavigationController *)arg1;
- (void)serviceSignInController:(UINavigationController *)arg1 didCompleteWithOperationsResults:(NSDictionary *)arg2;
- (void)serviceSignInController:(UINavigationController *)arg1 didCompleteWithSuccess:(_Bool)arg2 error:(NSError *)arg3;
@end

