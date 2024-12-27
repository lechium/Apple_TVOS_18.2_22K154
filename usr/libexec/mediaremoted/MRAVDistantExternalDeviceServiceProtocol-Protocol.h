//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MRAVRoutingDiscoverySessionConfiguration, MRGroupTopologyModificationRequest, MRRequestDetails, NSArray, NSData, NSDictionary, NSError, NSString;

@protocol MRAVDistantExternalDeviceServiceProtocol <NSObject>
@property(copy, nonatomic) NSArray *subscribedPlayerPaths;
- (void)requestGroupSessionWithDetails:(MRRequestDetails *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)setDiscoveryMode:(unsigned int)arg1 forConfiguration:(MRAVRoutingDiscoverySessionConfiguration *)arg2;
- (void)sendButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 down:(_Bool)arg3;
- (void)pingWithTimeout:(double)arg1 callback:(void (^)(NSError *))arg2;
- (void)sendCustomData:(NSData *)arg1 withName:(NSString *)arg2;
- (void)createHostedEndpointWithOutputDeviceUIDs:(NSArray *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)modifyTopologyWithRequest:(MRGroupTopologyModificationRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setConversationDetectionEnabled:(_Bool)arg1 outputDeviceUID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)setListeningMode:(NSString *)arg1 outputDeviceUID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)muteOutputDeviceVolume:(_Bool)arg1 outputDeviceUID:(NSString *)arg2 details:(MRRequestDetails *)arg3 completion:(void (^)(NSError *))arg4;
- (void)adjustOutputDeviceVolume:(long long)arg1 outputDeviceUID:(NSString *)arg2 details:(MRRequestDetails *)arg3 completion:(void (^)(NSError *))arg4;
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(NSString *)arg2 details:(MRRequestDetails *)arg3 completion:(void (^)(NSError *))arg4;
- (void)disconnect:(NSError *)arg1;
- (void)connectWithOptions:(unsigned int)arg1 userInfo:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)getDeviceInfoWithCompletion:(void (^)(MRDeviceInfo *))arg1;
- (void)getExternalOutputContextWithCompletion:(void (^)(MRExternalOutputContextDataSource *))arg1;
- (void)getCustomOriginDataWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)getPersonalOutputDevices:(void (^)(NSArray *))arg1;
- (void)setNotifications:(unsigned long long)arg1;
- (void)setRegisteredCallbacks:(unsigned long long)arg1;
@end

