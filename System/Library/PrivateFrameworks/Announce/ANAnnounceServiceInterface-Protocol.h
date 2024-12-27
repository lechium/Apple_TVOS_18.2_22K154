//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Announce/NSObject-Protocol.h>

@class ANAnnouncement, ANAnnouncementRequest, ANHomeContext, NSDate, NSString, NSURL, NSUUID;

@protocol ANAnnounceServiceInterface <NSObject>
- (void)isEndpointWithUUID:(NSUUID *)arg1 inRoomWithName:(NSString *)arg2 reply:(void (^)(_Bool))arg3;
- (void)isAnnounceEnabledForAnyAccessoryOrUserInHome:(NSString *)arg1 reply:(void (^)(_Bool))arg2;
- (void)isAnnounceEnabledForAnyAccessoryInHome:(NSString *)arg1 reply:(void (^)(_Bool))arg2;
- (void)isLocalDeviceInRoom:(NSString *)arg1 reply:(void (^)(_Bool))arg2;
- (void)homeNamesForContext:(ANHomeContext *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)contextFromAnnouncement:(ANAnnouncement *)arg1 reply:(void (^)(ANAnnouncementContext *))arg2;
- (void)prewarm:(void (^)(NSError *))arg1;
- (void)getScanningDeviceCandidates:(void (^)(NSSet *))arg1;
- (void)lastPlayedAnnouncementInfo:(void (^)(NSDictionary *))arg1;
- (void)getUnplayedAnnouncementsForEndpointID:(NSUUID *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)getReceivedAnnouncementsForEndpointID:(NSUUID *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)announcementForID:(NSString *)arg1 endpointID:(NSUUID *)arg2 reply:(void (^)(ANAnnouncement *))arg3;
- (void)receivedAnnouncementIdentifiersForEndpointID:(NSUUID *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)mockAnnouncement:(NSURL *)arg1 forHomeWithName:(NSString *)arg2 playbackDeadline:(NSDate *)arg3 completion:(void (^)(ANAnnouncement *, NSError *))arg4;
- (void)sendRequestLegacy:(ANAnnouncementRequest *)arg1 completion:(void (^)(ANAnnouncement *, NSError *))arg2;
- (void)sendRequest:(ANAnnouncementRequest *)arg1 completion:(void (^)(ANAnnouncementResult *, NSError *))arg2;
- (void)localParticipant:(void (^)(ANParticipant *))arg1;
@end

