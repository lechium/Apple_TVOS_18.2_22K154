//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TRIEvaluationStatusCursor;

@protocol TRIEvaluationStatusProvider
- (TRIEvaluationStatusCursor *)enumerateStatusOfEvaluationsForMLRuntimeWithCursor:(TRIEvaluationStatusCursor *)arg1 error:(id *)arg2 block:(void (^)(TRIMLRuntimeEvaluation *, TRIEvaluationStatus *, _Bool *))arg3;
- (_Bool)enumerateActiveBMLTWithError:(id *)arg1 block:(void (^)(TRIClientBackgroundMLTask *, TRIFactorsState *, _Bool *))arg2;
- (_Bool)enumerateActiveEvaluationsForMLRuntimeWithError:(id *)arg1 block:(void (^)(TRIMLRuntimeEvaluation *, TRIFactorsState *, _Bool *))arg2;
@end

