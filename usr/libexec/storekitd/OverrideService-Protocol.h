//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@protocol OverrideService
- (void)setClientOverrideWithRequest:(NSData *)arg1 reply:(void (^)(NSError *))arg2;
- (void)clientOverridesWithReply:(void (^)(NSData *, NSError *))arg1;
@end

