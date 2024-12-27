//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TimeSync/NSObject-Protocol.h>

@class NSData, NSString;

@protocol TSXDaemonServiceServerProtocol <NSObject>
- (void)propertiesForRegistryEntryID:(unsigned long long)arg1 signpostID:(unsigned long long)arg2 reply:(void (^)(NSDictionary *))arg3;
- (void)propertyForRegistryEntryID:(unsigned long long)arg1 signpostID:(unsigned long long)arg2 key:(NSString *)arg3 reply:(void (^)(id))arg4;
- (void)callMethodForDaemonClient:(unsigned int)arg1 clientMethodSelector:(unsigned int)arg2 scalarInputs:(struct ScalarArgsArray *)arg3 structInput:(NSData *)arg4 scalarOutputCount:(unsigned int)arg5 reply:(void (^)(_Bool, struct ScalarArgsArray *, NSError *))arg6;
- (void)closeDaemonClient:(unsigned int)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)openDaemonClientWithRegistryEntryID:(unsigned long long)arg1 clientType:(unsigned int)arg2 reply:(void (^)(unsigned int, NSError *))arg3;
- (void)openXPCConnection;
@end

