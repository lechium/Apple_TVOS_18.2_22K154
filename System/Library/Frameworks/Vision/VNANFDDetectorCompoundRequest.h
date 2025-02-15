//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNANFDDetectorCompoundRequest
{
}

+ (Class)configurationClass;	// IMP=0x008000000044213f
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x0080000000441bf2
+ (long long)compoundRequestRevisionForRequest:(id)arg1;	// IMP=0x0080000000441a96
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x008000000044285b
- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;	// IMP=0x0000000000441519
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000441289
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;	// IMP=0x00000000004411ba
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000440bce
- (long long)dependencyProcessingOrdinality;	// IMP=0x0000000000440bbc
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000440a7c

@end

