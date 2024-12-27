//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppIntents/NSObject-Protocol.h>

@class LNActionConfirmationRequest, LNConfirmationRequest, LNContinueInAppRequest, LNDisambiguationRequest, LNNeedsValueRequest, LNOpenURLRequest;

@protocol LNConnectionClientInterface <NSObject>
- (void)requestExtendTimeout;
- (void)requestCancelTimeout;
- (void)requestOpenURL:(LNOpenURLRequest *)arg1 completionHandler:(void (^)(LNOpenURLResponse *, NSError *))arg2;
- (void)requestContinueInApp:(LNContinueInAppRequest *)arg1 completionHandler:(void (^)(LNContinueInAppResponse *, NSError *))arg2;
- (void)requestViewSnippetEnvironmentWithCompletion:(void (^)(LNSnippetEnvironment *))arg1;
- (void)requestActionConfirmation:(LNActionConfirmationRequest *)arg1 completionHandler:(void (^)(LNActionConfirmationResponse *, NSError *))arg2;
- (void)requestParameterNeedsValue:(LNNeedsValueRequest *)arg1 completionHandler:(void (^)(LNNeedsValueResponse *, NSError *))arg2;
- (void)requestParameterConfirmation:(LNConfirmationRequest *)arg1 completionHandler:(void (^)(LNConfirmationResponse *, NSError *))arg2;
- (void)requestParameterDisambiguation:(LNDisambiguationRequest *)arg1 completionHandler:(void (^)(LNDisambiguationResponse *, NSError *))arg2;
@end

