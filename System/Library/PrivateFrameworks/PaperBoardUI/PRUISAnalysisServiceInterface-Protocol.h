//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSProgress, PRUISAnalysisServiceRequest, PRUISAnalysisServiceResponse;

@protocol PRUISAnalysisServiceInterface
- (void)cancelRequest:(PRUISAnalysisServiceRequest *)arg1;
- (PRUISAnalysisServiceResponse *)executeAnalysisRequest:(PRUISAnalysisServiceRequest *)arg1 error:(out id *)arg2;
- (NSProgress *)executeAnalysisRequest:(PRUISAnalysisServiceRequest *)arg1 reply:(void (^)(PRUISAnalysisServiceResponse *, NSError *))arg2;
@end

