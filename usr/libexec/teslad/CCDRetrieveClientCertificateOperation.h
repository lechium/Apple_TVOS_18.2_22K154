//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSTimer;

@interface CCDRetrieveClientCertificateOperation
{
    _Bool _certificateRetrievalFailed;	// 8 = 0x8
    CDUnknownBlockType _certificateRetrievalCompletionBlock;	// 16 = 0x10
    long long _certificateRetrievalRequestCount;	// 24 = 0x18
    NSTimer *_timeoutTimer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000009e9f
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) long long certificateRetrievalRequestCount; // @synthesize certificateRetrievalRequestCount=_certificateRetrievalRequestCount;
@property(nonatomic) _Bool certificateRetrievalFailed; // @synthesize certificateRetrievalFailed=_certificateRetrievalFailed;
@property(copy, nonatomic) CDUnknownBlockType certificateRetrievalCompletionBlock; // @synthesize certificateRetrievalCompletionBlock=_certificateRetrievalCompletionBlock;
- (void)timeoutTimerDidFire:(id)arg1;	// IMP=0x0010000000009ddf
- (void)_startRetryTimerWithInterval:(double)arg1;	// IMP=0x0010000000009cd8
- (void)_retryCertificateRetrievalIfAllowedAfterDelayOrFailWithError:(id)arg1;	// IMP=0x0010000000009c5b
- (void)_retryCertificateRetrievalIfAllowed:(_Bool)arg1 afterDelay:(double)arg2 orFailWithError:(id)arg3;	// IMP=0x0010000000009b96
- (void)_completeOperationWithReferenceKey:(id)arg1 certificates:(id)arg2 error:(id)arg3;	// IMP=0x00100000000099b1
- (void)retrieveClientCertificate;	// IMP=0x0010000000009825
- (void)start;	// IMP=0x00100000000097e3
- (_Bool)isAsynchronous;	// IMP=0x00100000000097db

@end

