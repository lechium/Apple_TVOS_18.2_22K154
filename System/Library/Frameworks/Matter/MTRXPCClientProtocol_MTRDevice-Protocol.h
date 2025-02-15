//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Matter/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSNumber;

@protocol MTRXPCClientProtocol_MTRDevice <NSObject>
- (oneway void)device:(NSNumber *)arg1 internalStateUpdated:(NSDictionary *)arg2;
- (oneway void)deviceConfigurationChanged:(NSNumber *)arg1;
- (oneway void)deviceCachePrimed:(NSNumber *)arg1;
- (oneway void)deviceBecameActive:(NSNumber *)arg1;
- (oneway void)device:(NSNumber *)arg1 receivedEventReport:(NSArray *)arg2;
- (oneway void)device:(NSNumber *)arg1 receivedAttributeReport:(NSArray *)arg2;
- (oneway void)device:(NSNumber *)arg1 stateChanged:(unsigned long long)arg2;
@end

