//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelForYouRecommendationItemBuilder, MPMutableSectionedCollection, MPPropertySet, NSDateFormatter, NSDictionary;

__attribute__((visibility("hidden")))
@interface MPModelForYouRecommendationGroupBuilder : NSObject
{
    struct {
        unsigned int initialized:1;
        unsigned int groupType:1;
        unsigned int lastUpdatedDate:1;
        unsigned int title:1;
        unsigned int subgroups:1;
        unsigned int loadAdditionalContentURL:1;
        unsigned int refreshURL:1;
    } _requestedGroupProperties;	// 8 = 0x8
    MPModelForYouRecommendationItemBuilder *_itemBuilder;	// 16 = 0x10
    NSDateFormatter *_lastUpdatedDateFormatter;	// 24 = 0x18
    MPPropertySet *_requestedGroupPropertySet;	// 32 = 0x20
    MPPropertySet *_requestedItemPropertySet;	// 40 = 0x28
    NSDictionary *_storeItemMetadataResults;	// 48 = 0x30
    MPMutableSectionedCollection *_flatSectionedItems;	// 56 = 0x38
}

+ (id)allSupportedItemProperties;	// IMP=0x006000000024029d
+ (id)allSupportedGroupProperties;	// IMP=0x00600000002401c3
- (void).cxx_destruct;	// IMP=0x000000000023f792
@property(readonly, nonatomic) MPMutableSectionedCollection *flatSectionedItems; // @synthesize flatSectionedItems=_flatSectionedItems;
@property(readonly, nonatomic) NSDictionary *storeItemMetadataResults; // @synthesize storeItemMetadataResults=_storeItemMetadataResults;
@property(readonly, nonatomic) MPPropertySet *requestedItemPropertySet; // @synthesize requestedItemPropertySet=_requestedItemPropertySet;
@property(readonly, nonatomic) MPPropertySet *requestedGroupPropertySet; // @synthesize requestedGroupPropertySet=_requestedGroupPropertySet;
- (id)modelObjectForRecommendationDictionary:(id)arg1 userIdentity:(id)arg2;	// IMP=0x000000000023f2be
- (id)initWithRequestedGroupPropertySet:(id)arg1 requestedItemPropertySet:(id)arg2 storeItemMetadataResults:(id)arg3 flatSectionedItems:(id)arg4;	// IMP=0x000000000023f1b0

@end

