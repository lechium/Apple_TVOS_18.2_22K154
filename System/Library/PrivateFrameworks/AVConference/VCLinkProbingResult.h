//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface VCLinkProbingResult : NSObject
{
    unsigned int _reorderedPacketsCount;	// 8 = 0x8
    unsigned int _sentRequestCount;	// 12 = 0xc
    unsigned int _receivedResponseCount;	// 16 = 0x10
    NSMutableArray *_requestTimestampAndRTTList;	// 24 = 0x18
    NSNumber *_expMovMeanRTT;	// 32 = 0x20
    NSNumber *_plrEnvelopeValue;	// 40 = 0x28
    NSNumber *_plrTier;	// 48 = 0x30
    CDStruct_7421bd8e _linkProbingResultConfig;	// 56 = 0x38
}

@property(readonly) NSNumber *plrTier; // @synthesize plrTier=_plrTier;
@property(readonly) NSNumber *plrEnvelopeValue; // @synthesize plrEnvelopeValue=_plrEnvelopeValue;
@property(readonly) NSNumber *expMovMeanRTT; // @synthesize expMovMeanRTT=_expMovMeanRTT;
@property(readonly) NSMutableArray *requestTimestampAndRTTList; // @synthesize requestTimestampAndRTTList=_requestTimestampAndRTTList;
@property(readonly) unsigned int receivedResponseCount; // @synthesize receivedResponseCount=_receivedResponseCount;
@property(readonly) unsigned int sentRequestCount; // @synthesize sentRequestCount=_sentRequestCount;
@property(readonly) unsigned int reorderedPacketsCount; // @synthesize reorderedPacketsCount=_reorderedPacketsCount;
- (id)description;	// IMP=0x00000000004453fc
- (unsigned char)getPLRTierFromPLREnvelope:(double)arg1;	// IMP=0x0000000000445353
- (void)updateLinkStatsWithArrivingNewValueMeanRTT:(double)arg1 arrivingNewValuePLR:(double)arg2;	// IMP=0x00000000004451a9
- (void)updateProbingResult:(id)arg1 initialResult:(_Bool)arg2;	// IMP=0x0000000000444d22
- (void)mergeProbingResults:(id)arg1;	// IMP=0x0000000000444d0e
- (void)dealloc;	// IMP=0x0000000000444c93
- (id)initWithProbingResults:(id)arg1 linkProbingResultConfig:(CDStruct_7421bd8e)arg2;	// IMP=0x0000000000444b85

@end

