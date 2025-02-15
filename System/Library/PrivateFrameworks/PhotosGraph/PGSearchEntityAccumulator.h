//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, PGGraphSearchEntity;

@interface PGSearchEntityAccumulator : NSObject
{
    MISSING_TYPE *internalSearchEntitiesByMomentUUID;	// 8 = 0x8
    MISSING_TYPE *internalMePersonEntity;	// 16 = 0x10
    MISSING_TYPE *internalRelatedPersonAndPetDescriptorByPersonIdentifier;	// 24 = 0x18
    MISSING_TYPE *synonymsByCategoryMask;	// 32 = 0x20
    MISSING_TYPE *logger;	// 0 = 0x0
    MISSING_TYPE *graphSearchEntityDonationEnabled;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000001c8a50
- (id)init;	// IMP=0x00000000001c89f0
- (id)initWithSynonymsByCategoryMask:(id)arg1;	// IMP=0x00000000001c8920
@property(nonatomic, readonly) PGGraphSearchEntity *mePersonEntity;
@property(nonatomic, readonly) NSDictionary *relatedPersonAndPetDescriptorByRelatedPersonIdentifier;
@property(nonatomic, readonly) NSDictionary *searchEntitiesByMomentUUID;
- (_Bool)accumulatePersonAndPetRelationshipsFromGraph:(id)arg1 progressReporter:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001cabe0
- (_Bool)accumulateHomeAndWorkWithHomeAndWorkKeywords:(id)arg1 forMomentUUID:(id)arg2 dateInterval:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001ca1d0
- (_Bool)accumulateSeasons:(id)arg1 forMomentUUID:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001c9df0
- (_Bool)accumulateHolidays:(id)arg1 forMomentUUID:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001c9ad0
- (_Bool)accumulateMeanings:(id)arg1 forMomentUUID:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001c9720
- (_Bool)accumulateTrip:(id)arg1 forMomentUUID:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001c9360
- (_Bool)accumulatePublicEventsInPublicEventKeywords:(id)arg1 forMomentUUID:(id)arg2 dateInterval:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001c8e80

@end

