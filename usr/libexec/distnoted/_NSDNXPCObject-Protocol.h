//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue;

@protocol _NSDNXPCObject <NSObject>
- (void)start:(NSObject<OS_dispatch_queue> *)arg1;
- (void)addInvalidationHandler:(void (^)(void))arg1;
- (void)invalidate;
@end

