//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class MTRPluginClientConnection, NSDictionary, NSNumber, NSUUID;

@protocol MTRPluginClientConnectionDelegate <NSObject>
- (_Bool)connection:(MTRPluginClientConnection *)arg1 sendMessagePayloadToPrimaryResident:(NSDictionary *)arg2 responseHandler:(void (^)(NSError *, NSDictionary *))arg3 error:(id *)arg4;
- (_Bool)connection:(MTRPluginClientConnection *)arg1 allowsOperationWithHome:(NSUUID *)arg2 operationType:(long long)arg3 nodeId:(NSNumber *)arg4 commandId:(NSNumber *)arg5 endpointId:(NSNumber *)arg6 clusterId:(NSNumber *)arg7 attributeId:(NSNumber *)arg8;
@end

