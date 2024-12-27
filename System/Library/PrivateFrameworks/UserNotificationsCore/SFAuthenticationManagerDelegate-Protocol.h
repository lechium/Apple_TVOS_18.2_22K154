//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsCore/NSObject-Protocol.h>

@class NSError, NSUUID, SFAuthenticationApproveInfo, SFAuthenticationManager;

@protocol SFAuthenticationManagerDelegate <NSObject>

@optional
- (void)manager:(SFAuthenticationManager *)arg1 didReceiveRequestToApproveForSessionID:(NSUUID *)arg2 info:(SFAuthenticationApproveInfo *)arg3 completionHandler:(void (^)(NSData *, NSError *))arg4;
- (void)manager:(SFAuthenticationManager *)arg1 didReceiveRequestToApproveForSessionWithID:(NSUUID *)arg2 info:(SFAuthenticationApproveInfo *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)manager:(SFAuthenticationManager *)arg1 didFailAuthenticationForSessionWithID:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)manager:(SFAuthenticationManager *)arg1 didCompleteAuthenticationForSessionWithID:(NSUUID *)arg2;
- (void)manager:(SFAuthenticationManager *)arg1 didStartAuthenticationForSessionWithID:(NSUUID *)arg2;
- (void)manager:(SFAuthenticationManager *)arg1 didFailToDisableDeviceForSessionWithID:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)manager:(SFAuthenticationManager *)arg1 didDisableAuthenticationForSessionWithID:(NSUUID *)arg2;
- (void)manager:(SFAuthenticationManager *)arg1 didFailToEnableDeviceForSessionWithID:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)manager:(SFAuthenticationManager *)arg1 didEnableAuthenticationForSessionWithID:(NSUUID *)arg2;
@end

