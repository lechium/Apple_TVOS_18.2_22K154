//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@protocol CUMessageSessionXPCServerInterface
- (void)remoteSendRequestID:(NSString *)arg1 options:(NSDictionary *)arg2 request:(NSDictionary *)arg3 responseHandler:(void (^)(int, NSDictionary *, NSDictionary *))arg4;
- (void)remoteRegisterRequestID:(NSString *)arg1 options:(NSDictionary *)arg2;
@end

