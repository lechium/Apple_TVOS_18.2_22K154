//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@protocol NLXPCEmbeddingServer
- (void)_xpc_compileEmbeddingForIdentifier:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)_xpc_loadTokenVectorEmbeddingForIdentifier:(NSString *)arg1 timeout:(double)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)_xpc_dataFromSentenceVectorEmbeddingForString:(NSString *)arg1 language:(NSString *)arg2 identifier:(NSString *)arg3 completionHandler:(void (^)(NSData *, NSError *))arg4;
- (void)_xpc_batchDataFromTokenVectorEmbeddingForStrings:(NSArray *)arg1 language:(NSString *)arg2 identifier:(NSString *)arg3 completionHandler:(void (^)(NSArray *, NSArray *, NSError *))arg4;
- (void)_xpc_dataFromTokenVectorEmbeddingForString:(NSString *)arg1 language:(NSString *)arg2 identifier:(NSString *)arg3 completionHandler:(void (^)(NSData *, NSArray *, NSError *))arg4;
@end

