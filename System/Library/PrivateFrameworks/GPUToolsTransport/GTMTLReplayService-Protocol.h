//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GTReplayProfileRequest, GTReplayRaytraceRequest, GTReplayRequestBatch, GTReplayRequestToken, GTReplayShaderDebugRequest, GTReplayerDisplayRequest, NSURL;
@protocol GTMTLReplayServiceObserver;

@protocol GTMTLReplayService
- (void)deregisterObserver:(unsigned long long)arg1;
- (unsigned long long)registerObserver:(id <GTMTLReplayServiceObserver>)arg1;
- (_Bool)resume:(unsigned long long)arg1;
- (_Bool)pause:(unsigned long long)arg1;
- (_Bool)cancel:(unsigned long long)arg1;
- (void)terminateProcess;
- (void)display:(GTReplayerDisplayRequest *)arg1;
- (GTReplayRequestToken *)shaderdebug:(GTReplayShaderDebugRequest *)arg1;
- (GTReplayRequestToken *)raytrace:(GTReplayRaytraceRequest *)arg1;
- (GTReplayRequestToken *)profile:(GTReplayProfileRequest *)arg1;
- (GTReplayRequestToken *)decode:(GTReplayRequestBatch *)arg1;
- (GTReplayRequestToken *)update:(GTReplayRequestBatch *)arg1;
- (GTReplayRequestToken *)query:(GTReplayRequestBatch *)arg1;
- (GTReplayRequestToken *)fetch:(GTReplayRequestBatch *)arg1;
- (_Bool)load:(NSURL *)arg1 error:(id *)arg2;
@end

