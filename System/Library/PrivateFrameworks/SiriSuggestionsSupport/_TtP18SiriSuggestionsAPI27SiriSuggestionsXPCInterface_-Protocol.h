//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, NSUUID;
@protocol _TtP18SiriSuggestionsAPI15XPCClientBridge_;

@protocol _TtP18SiriSuggestionsAPI27SiriSuggestionsXPCInterface_
- (void)logWithSuggestions:(NSData *)arg1 deliveryVehicle:(NSData *)arg2 generationId:(NSUUID *)arg3 completion:(void (^)(NSError *))arg4;
- (void)warmupWithCompletion:(void (^)(NSError *))arg1;
- (void)refreshServiceWithCompletion:(void (^)(NSError *))arg1;
- (void)submitFor:(NSString *)arg1 stateStoreProperties:(NSData *)arg2 completion:(void (^)(NSError *))arg3;
- (void)submitFor:(NSString *)arg1 propertyKey:(NSString *)arg2 propertyValue:(NSData *)arg3 completion:(void (^)(NSError *))arg4;
- (void)disconnectForAppWithAppBundleId:(NSString *)arg1 placementId:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)getSuggestionsForAppWithAppBundleId:(NSString *)arg1 placementId:(NSString *)arg2 entities:(NSData *)arg3 intentToSuggest:(NSData *)arg4 bridge:(id <_TtP18SiriSuggestionsAPI15XPCClientBridge_>)arg5 completionHandler:(void (^)(NSError *))arg6;
- (void)logIntentFor:(NSString *)arg1 intent:(NSData *)arg2 completion:(void (^)(NSError *))arg3;
- (void)suggestNextWithRequestId:(NSString *)arg1 extraStateStoreProperties:(NSData *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
@end

