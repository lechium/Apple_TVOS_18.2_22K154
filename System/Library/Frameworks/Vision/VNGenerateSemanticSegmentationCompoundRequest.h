//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface VNGenerateSemanticSegmentationCompoundRequest
{
}

+ (Class)detectorForSemanticSegmentationRequestAndReturnError:(id *)arg1;	// IMP=0x00600000004275e3
+ (id)detectorTypeForSemanticSegmentationRequest;	// IMP=0x00600000004275b3
+ (Class)detectorForPersonInstanceRequestAndReturnError:(id *)arg1;	// IMP=0x0060000000427485
+ (id)detectorTypeForPersonInstanceRequest;	// IMP=0x0060000000427455
+ (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000426fd3
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x006000000042688a
+ (long long)compoundRequestRevisionForRequest:(id)arg1;	// IMP=0x006000000042672e
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x0060000000427af6
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000425e74
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000425dd7
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;	// IMP=0x0000000000423f1a
- (id)initWithOriginalRequests:(id)arg1;	// IMP=0x0000000000423d90

// Remaining properties
@property(readonly, copy) NSArray *results; // @dynamic results;

@end

