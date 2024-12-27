//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class NAFuture, NSDictionary, NSString;
@protocol HMDDatabase;

@protocol HMDDatabaseDelegate <NSObject>

@optional
- (void)database:(id <HMDDatabase>)arg1 didReceiveMessageWithUserInfo:(NSDictionary *)arg2;
- (void)database:(id <HMDDatabase>)arg1 didRemoveZoneWithName:(NSString *)arg2 isPrivate:(_Bool)arg3;
- (NAFuture *)database:(id <HMDDatabase>)arg1 willRemoveZoneWithName:(NSString *)arg2 isPrivate:(_Bool)arg3;
- (void)database:(id <HMDDatabase>)arg1 didCreateZoneWithName:(NSString *)arg2 isPrivate:(_Bool)arg3;
@end

