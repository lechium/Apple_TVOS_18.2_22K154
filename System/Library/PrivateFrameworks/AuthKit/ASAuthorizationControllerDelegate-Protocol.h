//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKit/NSObject-Protocol.h>

@class ASAuthorization, ASAuthorizationController, NSError, NSString;

@protocol ASAuthorizationControllerDelegate <NSObject>

@optional
- (void)authorizationController:(ASAuthorizationController *)arg1 didCompleteWithCustomMethod:(NSString *)arg2;
- (void)authorizationController:(ASAuthorizationController *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)authorizationController:(ASAuthorizationController *)arg1 didCompleteWithAuthorization:(ASAuthorization *)arg2;
@end

