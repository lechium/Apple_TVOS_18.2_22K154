//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, VNRequestSpecifier;

__attribute__((visibility("hidden")))
@interface VNEntityIdentificationModelTrainedModelVIPv2
{
    shared_ptr_8c39738b _faceIDModel;	// 8 = 0x8
    VNRequestSpecifier *_entityPrintOriginatingRequestSpecifier;	// 24 = 0x18
    int _maximumElementsPerID;	// 32 = 0x20
    NSArray *_entityUniqueIdentifiers;	// 40 = 0x28
    NSArray *_entityPrintCounts;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000003c1ba4
+ (id)trainedModelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x00600000003c0ad5
+ (_Bool)getStoredRepresentationTag:(unsigned int *)arg1 forModelVersion:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00600000003c0ac7
- (id).cxx_construct;	// IMP=0x00000000003c0098
- (void).cxx_destruct;	// IMP=0x00000000003c0045
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003bfe30
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003bf858
- (id)printCountsForAllEntities;	// IMP=0x00000000003bf75e
- (id)printCountsForEntitiesWithUniqueIdentifiers:(id)arg1;	// IMP=0x00000000003bf5db
- (unsigned long long)printCountForEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000003bf518
- (unsigned long long)indexOfEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000003bf4fb
- (id)uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003bf4de
- (id)entityUniqueIdentifiers;	// IMP=0x00000000003bf4c9
- (unsigned long long)entityCount;	// IMP=0x00000000003bf4ac
- (id)predictionsForObservation:(id)arg1 limit:(unsigned long long)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x00000000003beebf
- (id)trainingEntityPrintsForEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003bebe7
- (id)entityPrintOriginatingRequestSpecifier;	// IMP=0x00000000003bebd2
- (id)initWithFaceIDModel:(shared_ptr_8c39738b)arg1 entityPrintOriginatingRequestSpecifier:(id)arg2 maximumElementsPerID:(unsigned long long)arg3 entityUniqueIdentifiers:(id)arg4 entityPrintCounts:(id)arg5;	// IMP=0x00000000003bea0d

@end

