//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSUUID;

@protocol _TtP13HomeKitEvents24XPCServerPublicInterface_
- (void)resetConfigurationWithReply:(void (^)(NSError *))arg1;
- (void)createFakeEventsWithDate:(NSDate *)arg1 homeIdentifier:(NSUUID *)arg2 count:(long long)arg3 reply:(void (^)(NSError *))arg4;
- (void)createEventsWithEventsData:(NSArray *)arg1 reply:(void (^)(NSError *))arg2;
- (void)clearEventsWithHomes:(NSArray *)arg1 reply:(void (^)(NSError *))arg2;
@end

