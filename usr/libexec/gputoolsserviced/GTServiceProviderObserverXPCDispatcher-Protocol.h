//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GTXPCDispatcher-Protocol.h"

@class NSObject;
@protocol GTXPCConnection, OS_xpc_object;

@protocol GTServiceProviderObserverXPCDispatcher <GTXPCDispatcher>
- (void)notifyServiceListChanged_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
@end

