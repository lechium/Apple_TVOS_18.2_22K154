//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnounceDaemon/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol ANAnnounceReachabilityServiceInterface <NSObject>
- (void)announceReachabilityForRoomUUID:(NSUUID *)arg1 inHomeUUID:(NSUUID *)arg2 reply:(void (^)(unsigned long long))arg3;
- (void)announceReachabilityForHomeUUID:(NSUUID *)arg1 reply:(void (^)(unsigned long long))arg2;
- (void)announceReachabilityForRoomName:(NSString *)arg1 inHomeName:(NSString *)arg2 reply:(void (^)(unsigned long long))arg3;
- (void)announceReachabilityForHomeName:(NSString *)arg1 reply:(void (^)(unsigned long long))arg2;
- (void)resumeWithCompletionHandler:(void (^)(void))arg1;
@end

