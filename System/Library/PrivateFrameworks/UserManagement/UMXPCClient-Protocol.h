//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserManagement/NSObject-Protocol.h>

@class NSDictionary;

@protocol UMXPCClient <NSObject>
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(void (^)(void))arg1;
- (void)personaListDidUpdateCompletionHandler:(void (^)(void))arg1;
- (void)bubbleDidPop;
- (void)deviceLoginSessionStateDidUpdate;
- (void)userSwitchTaskListDidUpdate;
- (void)readyToSwitchToLoginSession:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;
- (void)readyToSwitchToUser:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;
- (void)willSwitchToUser:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;
- (void)uploadContentWithCompletionHandler:(void (^)(void))arg1;
@end

