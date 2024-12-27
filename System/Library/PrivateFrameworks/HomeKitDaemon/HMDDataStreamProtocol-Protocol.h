//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString;
@protocol HMDDataStreamProtocolDelegate;

@protocol HMDDataStreamProtocol <NSObject>
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)dataStream:(id <HMDDataStreamProtocolDelegate>)arg1 didReceiveResponse:(NSString *)arg2 header:(NSDictionary *)arg3 payload:(NSDictionary *)arg4;
- (void)dataStream:(id <HMDDataStreamProtocolDelegate>)arg1 didReceiveRequest:(NSString *)arg2 header:(NSDictionary *)arg3 payload:(NSDictionary *)arg4;
- (void)dataStream:(id <HMDDataStreamProtocolDelegate>)arg1 didReceiveEvent:(NSString *)arg2 header:(NSDictionary *)arg3 payload:(NSDictionary *)arg4;
- (void)dataStream:(id <HMDDataStreamProtocolDelegate>)arg1 didFailWithError:(NSError *)arg2;
- (void)dataStreamDidClose:(id <HMDDataStreamProtocolDelegate>)arg1;
- (void)dataStreamInitiatedClose:(id <HMDDataStreamProtocolDelegate>)arg1;
- (void)dataStreamDidOpen:(id <HMDDataStreamProtocolDelegate>)arg1;
@end

