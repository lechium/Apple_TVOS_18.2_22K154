//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPStoreModelObjectBuilder.h"

__attribute__((visibility("hidden")))
@interface MPStoreModelCreditsArtistBuilder : MPStoreModelObjectBuilder
{
    struct {
        unsigned int initialized:1;
        unsigned int name:1;
        unsigned int artwork:1;
    } _requestedCreditsArtistProperties;	// 8 = 0x8
}

+ (id)allSupportedProperties;	// IMP=0x006000000024e05f
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;	// IMP=0x000000000024e1bf

@end

