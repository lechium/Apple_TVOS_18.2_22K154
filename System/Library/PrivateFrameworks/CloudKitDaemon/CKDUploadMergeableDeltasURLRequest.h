//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSMutableDictionary;

@interface CKDUploadMergeableDeltasURLRequest : CKDURLRequest
{
    NSArray *_deltas;	// 8 = 0x8
    NSArray *_replacementRequests;	// 16 = 0x10
    CDUnknownBlockType _perDeltaCompletionBlock;	// 24 = 0x18
    CDUnknownBlockType _perReplaceDeltasRequestCompletionBlock;	// 32 = 0x20
    NSMutableDictionary *_deltasByRequestID;	// 40 = 0x28
    NSMutableDictionary *_replacementRequestsByRequestID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003e924
@property(retain, nonatomic) NSMutableDictionary *replacementRequestsByRequestID; // @synthesize replacementRequestsByRequestID=_replacementRequestsByRequestID;
@property(retain, nonatomic) NSMutableDictionary *deltasByRequestID; // @synthesize deltasByRequestID=_deltasByRequestID;
@property(copy, nonatomic) CDUnknownBlockType perReplaceDeltasRequestCompletionBlock; // @synthesize perReplaceDeltasRequestCompletionBlock=_perReplaceDeltasRequestCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perDeltaCompletionBlock; // @synthesize perDeltaCompletionBlock=_perDeltaCompletionBlock;
@property(readonly, copy, nonatomic) NSArray *replacementRequests; // @synthesize replacementRequests=_replacementRequests;
@property(readonly, copy, nonatomic) NSArray *deltas; // @synthesize deltas=_deltas;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x000000000003e509
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x000000000003e1f1
- (id)generateRequestOperations;	// IMP=0x000000000003d72a
- (id)anonymousUserIDForHTTPHeader;	// IMP=0x000000000003d6b0
- (_Bool)handlesAnonymousCKUserIDPropagation;	// IMP=0x000000000003d6a8
- (id)requestOperationClasses;	// IMP=0x000000000003d5bc
- (id)zoneIDsToLock;	// IMP=0x000000000003d4b4
- (_Bool)allowsAnonymousAccount;	// IMP=0x000000000003d49a
- (void)fillOutRequestProperties:(id)arg1;	// IMP=0x000000000003d3c9
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x000000000003d2e1
- (id)initWithOperation:(id)arg1 deltas:(id)arg2 replacementRequests:(id)arg3;	// IMP=0x000000000003d1c2

@end

