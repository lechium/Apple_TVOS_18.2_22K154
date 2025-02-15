//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/SwiftNativeNSObject.h>

@class MISSING_TYPE, NSData, NSDictionary, NSString;

@interface GKPeerDiscovery : SwiftNativeNSObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *delegate;	// 112 = 0x70
    MISSING_TYPE *browser;	// 120 = 0x78
    MISSING_TYPE *listener;	// 128 = 0x80
    MISSING_TYPE *localPlayerID;	// 136 = 0x88
    MISSING_TYPE *localPushToken;	// 152 = 0x98
    MISSING_TYPE *pendingInboundConnections;	// 168 = 0xa8
    MISSING_TYPE *acceptedInBoundConnections;	// 176 = 0xb0
    MISSING_TYPE *outboundConnections;	// 184 = 0xb8
}

- (id)init;	// IMP=0x002000000018d1b1
- (void)sendDataToParticipant:(NSString *)arg1 deviceID:(NSString *)arg2 data:(NSData *)arg3 completionHandler:(void (^)(NSError *))arg4;	// IMP=0x001000000018cef2
- (void)stopListeningWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x001000000018c660
- (void)startListening:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;	// IMP=0x001000000018c4ee
- (void)stopBrowsingWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x001000000018b3e8
- (void)startBrowsingWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x001000000018b36b
- (id)initWithDelegate:(id)arg1 localPlayerID:(id)arg2 localPushToken:(id)arg3;	// IMP=0x001000000018a8bd

@end

