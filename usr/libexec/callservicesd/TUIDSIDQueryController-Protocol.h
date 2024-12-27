//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IDSURI, NSArray, NSString, OS_dispatch_queue;

@protocol TUIDSIDQueryController <NSObject>
- (_Bool)currentRemoteDevicesForDestinations:(NSArray *)arg1 service:(NSString *)arg2 preferredFromID:(IDSURI *)arg3 listenerID:(NSString *)arg4 queue:(OS_dispatch_queue *)arg5 completionBlock:(void (^)(NSDictionary *))arg6;
- (_Bool)currentIDStatusForDestinations:(NSArray *)arg1 service:(NSString *)arg2 preferredFromID:(IDSURI *)arg3 listenerID:(NSString *)arg4 queue:(OS_dispatch_queue *)arg5 completionBlock:(void (^)(NSDictionary *))arg6;
- (_Bool)requiredIDStatusForDestinations:(NSArray *)arg1 service:(NSString *)arg2 preferredFromID:(IDSURI *)arg3 listenerID:(NSString *)arg4 queue:(OS_dispatch_queue *)arg5 completionBlock:(void (^)(NSDictionary *))arg6;
- (_Bool)refreshIDStatusForDestinations:(NSArray *)arg1 service:(NSString *)arg2 preferredFromID:(IDSURI *)arg3 listenerID:(NSString *)arg4 queue:(OS_dispatch_queue *)arg5 completionBlock:(void (^)(NSDictionary *))arg6;
@end

