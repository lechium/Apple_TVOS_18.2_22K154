//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/SwiftNativeNSObject.h>

@class MISSING_TYPE, NSData, NSString;

@interface _TtC21HomePodSettingsDaemon32ProfileControllerServiceMediator : SwiftNativeNSObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *localProfileConnection;	// 112 = 0x70
    MISSING_TYPE *xpcCnx;	// 120 = 0x78
    MISSING_TYPE *logger;	// 0 = 0x0
}

- (id)init;	// IMP=0x00000000000666be
- (void)removeProfileWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x000000000006648e
- (void)installedProfilesWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;	// IMP=0x00000000000660d7
- (void)installProfileWithData:(NSData *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;	// IMP=0x000000000006595c
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000006776b

@end

