//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSTimer;

@interface CCDEnrollmentOperation
{
    _Bool _certificateRetrievalFailed;	// 8 = 0x8
    CDUnknownBlockType _enrollmentCompletionBlock;	// 16 = 0x10
    long long _certificateRetrievalRequestCount;	// 24 = 0x18
    NSTimer *_timeoutTimer;	// 32 = 0x20
    double _retryAfterInterval;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000004bdc
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double retryAfterInterval; // @synthesize retryAfterInterval=_retryAfterInterval;
@property(nonatomic) _Bool certificateRetrievalFailed; // @synthesize certificateRetrievalFailed=_certificateRetrievalFailed;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) long long certificateRetrievalRequestCount; // @synthesize certificateRetrievalRequestCount=_certificateRetrievalRequestCount;
@property(copy, nonatomic) CDUnknownBlockType enrollmentCompletionBlock; // @synthesize enrollmentCompletionBlock=_enrollmentCompletionBlock;
- (id)errorForStatusCode:(long long)arg1 responseData:(id)arg2;	// IMP=0x0010000000004b02
- (id)responseWithResponseData:(id)arg1 contentType:(id)arg2 outError:(id *)arg3;	// IMP=0x0010000000004afa
- (void)completeOperationWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x0010000000004982
- (id)responseWithResponseData:(id)arg1 contentType:(id)arg2 statusCode:(long long)arg3 retryNeeded:(_Bool *)arg4 outError:(id *)arg5;	// IMP=0x0010000000004850

@end

