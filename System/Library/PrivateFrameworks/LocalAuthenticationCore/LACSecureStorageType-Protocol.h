//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationCore/NSObject-Protocol.h>

@class NSData, NSXPCConnection;
@protocol LACSecureStorageDelegate, LACStorageRequest;

@protocol LACSecureStorageType <NSObject>
+ (_Bool)isKeyAvailable:(long long)arg1 operation:(long long)arg2;
@property(nonatomic) __weak id <LACSecureStorageDelegate> delegate;
- (void)removeObjectForRequest:(id <LACStorageRequest>)arg1 connection:(NSXPCConnection *)arg2 completionHandler:(void (^)(id, NSError *))arg3;
- (void)setObject:(NSData *)arg1 forRequest:(id <LACStorageRequest>)arg2 connection:(NSXPCConnection *)arg3 completionHandler:(void (^)(id, NSError *))arg4;
- (void)objectForRequest:(id <LACStorageRequest>)arg1 connection:(NSXPCConnection *)arg2 completionHandler:(void (^)(id, NSError *))arg3;
- (void)aclForRequest:(id <LACStorageRequest>)arg1 connection:(NSXPCConnection *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
@end

