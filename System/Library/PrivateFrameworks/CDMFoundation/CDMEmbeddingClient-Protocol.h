//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLocale, NSString, SIRINLUEXTERNALRequestID;

@protocol CDMEmbeddingClient
- (void)processEmbeddingRequest:(NSString *)arg1 requestId:(SIRINLUEXTERNALRequestID *)arg2 completionHandler:(void (^)(SIRINLUEXTERNALSUBWORD_EMBEDDINGSubwordEmbeddingResponse *, NSError *))arg3;
- (void)processEmbeddingRequest:(NSString *)arg1 completionHandler:(void (^)(SIRINLUEXTERNALSUBWORD_EMBEDDINGSubwordEmbeddingResponse *, NSError *))arg2;
- (void)setupWithLocale:(NSLocale *)arg1 embeddingVersion:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

