//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@class NSString;

@protocol CLBeaconFenceAuthorizationManagerProtocol <CLNotifierServiceProtocol>
- (int)syncgetCanBundle:(NSString *)arg1 performFenceOperationFor:(NSString *)arg2;
- (_Bool)syncgetFences:(void *)arg1 forBundle:(NSString *)arg2 onBehalfOf:(NSString *)arg3;
- (_Bool)syncgetFences:(void *)arg1 forBundle:(NSString *)arg2;
- (void)fetchAllFencesCountWithReply:(void (^)(unsigned char))arg1;
- (_Bool)syncgetRemoveFence:(const void *)arg1;
- (_Bool)syncgetAddFence:(const void *)arg1;
- (_Bool)syncgetDoSync:(void (^)(void *))arg1;
- (void)doAsync:(void (^)(void *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(void *))arg1;
@end

