//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriCore/NSObject-Protocol.h>

@class NSArray, NSError, NSString, NSURL;
@protocol SiriCoreSessionObject, SiriCoreSiriConnectionDelegate;

@protocol SiriCoreSiriConnection <NSObject>
@property(nonatomic) _Bool imposePolicyBan;
@property(copy, nonatomic) NSString *connectionId;
@property(retain, nonatomic) Class peerProviderClass;
@property(nonatomic) _Bool siriConnectionUsesPeerManagedSync;
@property(nonatomic) _Bool deviceIsInWalkaboutExperimentGroup;
@property(nonatomic) _Bool usesProxyConnection;
@property(copy, nonatomic) NSString *productTypePrefix;
@property(copy, nonatomic) NSString *peerVersion;
@property(copy, nonatomic) NSString *peerType;
@property(copy, nonatomic) NSString *peerAssistantIdentifier;
@property(copy, nonatomic) NSString *assistantIdentifier;
@property(nonatomic) double timeout;
@property(copy, nonatomic) NSString *languageCode;
@property(copy, nonatomic) NSString *aceHost;
@property(nonatomic) _Bool forceReconnect;
@property(copy, nonatomic) NSError *skipPeerError;
@property(nonatomic) _Bool useWiFiHint;
@property(nonatomic) _Bool skipPeer;
@property(nonatomic) _Bool prefersWWAN;
@property(copy, nonatomic) NSURL *url;
@property(nonatomic) __weak id <SiriCoreSiriConnectionDelegate> delegate;
- (void)getConnectionMetricsSynchronously:(_Bool)arg1 completion:(void (^)(SiriCoreConnectionMetrics *))arg2;
- (void)getAnalysisInfo:(void (^)(SiriCoreAceConnectionAnalysisInfo *))arg1;
- (void)probeConnection;
- (void)barrier:(void (^)(_Bool))arg1;
- (void)cancelSynchronously:(_Bool)arg1 onQueue:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)setSendPings:(_Bool)arg1;
- (void)sendCommands:(NSArray *)arg1 errorHandler:(void (^)(id <SiriCoreSessionObject>, NSError *))arg2;
- (void)sendCommand:(id <SiriCoreSessionObject>)arg1 errorHandler:(void (^)(NSError *))arg2;
- (void)start;
@end

