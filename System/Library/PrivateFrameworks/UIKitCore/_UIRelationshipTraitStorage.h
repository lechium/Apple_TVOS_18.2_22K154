//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface _UIRelationshipTraitStorage
{
    NSOrderedSet *_relationshipCandidates;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000bb0116
- (id)_propertyDescriptionString;	// IMP=0x0000000000bb0089
- (void)applyRecordsMatchingTraitCollection:(id)arg1;	// IMP=0x0000000000bafa91
- (void)addRecordWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3;	// IMP=0x0000000000baf5d3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000baf556
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000baf4ca
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 relationshipCandidates:(id)arg3;	// IMP=0x0000000000baf43c

@end

