//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CDServiceConnection, CDServiceListener;

@protocol CDServiceListenerDelegate <NSObject>
- (void)serviceListener:(CDServiceListener *)arg1 connectionInvalidated:(CDServiceConnection *)arg2;
- (void)serviceListener:(CDServiceListener *)arg1 willAcceptConnection:(CDServiceConnection *)arg2;
@end

