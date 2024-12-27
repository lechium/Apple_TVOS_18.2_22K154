//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSUUID;
@protocol LAUIDelegate;

@protocol LAContextClientEvaluationProt
- (void)verifyFileVaultUser:(NSUUID *)arg1 volumeUuid:(NSUUID *)arg2 options:(unsigned long long)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)credentialOfType:(long long)arg1 reply:(void (^)(NSData *, NSError *))arg2;
- (void)invalidateWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)setCredential:(NSData *)arg1 type:(long long)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)isCredentialSet:(long long)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)evaluateACL:(NSData *)arg1 operation:(id)arg2 options:(NSDictionary *)arg3 uiDelegate:(id <LAUIDelegate>)arg4 reply:(void (^)(NSDictionary *, NSError *))arg5;
- (void)evaluatePolicy:(long long)arg1 options:(NSDictionary *)arg2 uiDelegate:(id <LAUIDelegate>)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)getDomainStateWithOptions:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
@end

