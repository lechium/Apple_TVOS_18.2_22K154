//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary;
@protocol LACContextUIDelegate;

@protocol LACRemoteContext <NSObject>
- (void)evaluatePolicy:(long long)arg1 options:(NSDictionary *)arg2 uiDelegate:(id <LACContextUIDelegate>)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
@end

