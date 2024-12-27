//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@class NSData, NSString;

@protocol CLKappaNotifierProtocol <CLNotifierServiceProtocol>
- (void)forceCompanionHeartbeat;
- (void)remoteTimeout;
- (void)companionHeartbeat:(NSData *)arg1;
- (void)forceTriggerIgneous:(NSString *)arg1;
- (void)stopDem;
- (void)startDem;
- (void)forceTrigger;
- (void)dontcollect:(struct OverrideClient)arg1 isLocal:(_Bool)arg2;
- (void)collect:(struct OverrideClient)arg1 isLocal:(_Bool)arg2;
- (int)syncgetKappaState;
- (void)simulateTriggerWithDelay:(int)arg1 forMode:(unsigned char)arg2;
- (void)simulateTriggerWithDelay:(int)arg1;
- (_Bool)syncgetDoSync:(void (^)(void *))arg1;
- (void)doAsync:(void (^)(void *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(void *))arg1;
@end

