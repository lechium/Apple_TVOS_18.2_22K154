//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthentication/NSObject-Protocol.h>

@class NSData, NSUUID, NSXPCConnection;

@protocol LASecureStorageService <NSObject>
- (void)aclForKey:(long long)arg1 contextUUID:(NSUUID *)arg2 connection:(NSXPCConnection *)arg3 completionHandler:(void (^)(NSData *, NSError *))arg4;
- (void)aclForKey:(long long)arg1 contextUUID:(NSUUID *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
- (void)removeObjectForKey:(long long)arg1 contextUUID:(NSUUID *)arg2 connection:(NSXPCConnection *)arg3 completionHandler:(void (^)(id, NSError *))arg4;
- (void)removeObjectForKey:(long long)arg1 contextUUID:(NSUUID *)arg2 completionHandler:(void (^)(id, NSError *))arg3;
- (void)objectForKey:(long long)arg1 contextUUID:(NSUUID *)arg2 connection:(NSXPCConnection *)arg3 completionHandler:(void (^)(id, NSError *))arg4;
- (void)objectForKey:(long long)arg1 contextUUID:(NSUUID *)arg2 completionHandler:(void (^)(id, NSError *))arg3;
- (void)setObject:(NSData *)arg1 acl:(NSData *)arg2 forKey:(long long)arg3 contextUUID:(NSUUID *)arg4 connection:(NSXPCConnection *)arg5 completionHandler:(void (^)(id, NSError *))arg6;
- (void)setObject:(NSData *)arg1 acl:(NSData *)arg2 forKey:(long long)arg3 contextUUID:(NSUUID *)arg4 completionHandler:(void (^)(id, NSError *))arg5;
@end

