//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSString;

@protocol SSRRPISamplingXPCProtocol
- (void)removeMappingOnAndBefore:(NSDate *)arg1 completion:(void (^)(NSError *))arg2;
- (void)markFinishStatusForAllWithCompletion:(void (^)(NSError *))arg1;
- (void)removeAllSamplingMetaDataWithCompletion:(void (^)(void))arg1;
- (void)removeRequestIdToAudioIdMappingWithCompletion:(void (^)(void))arg1;
- (void)removeMappingWithLocale:(NSString *)arg1 date:(NSDate *)arg2 completion:(void (^)(NSError *))arg3;
- (void)writeIntoMappingWithRequestId:(NSString *)arg1 audioId:(NSString *)arg2 date:(NSDate *)arg3 locale:(NSString *)arg4 completion:(void (^)(NSError *))arg5;
- (void)getAudioIdWithRequestId:(NSString *)arg1 languageCode:(NSString *)arg2 date:(NSDate *)arg3 completion:(void (^)(NSError *, NSString *))arg4;
- (void)updateStatus:(NSNumber *)arg1 languageCode:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)getEnrollmentSelectionStatusWithLocale:(NSString *)arg1 completion:(void (^)(NSError *, NSNumber *))arg2;
@end

