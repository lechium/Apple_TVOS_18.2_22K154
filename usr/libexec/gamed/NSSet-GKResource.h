//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@interface NSSet (GKResource)
+ (id)_gkSetOfResourcesWithIDs:(id)arg1;	// IMP=0x00100000000eaf3c
- (_Bool)_gkContainsInvalidResource;	// IMP=0x00200000000eb5c5
- (_Bool)_gkContainsExpiredResource;	// IMP=0x00100000000eb597
- (_Bool)_gkContainsInvalidOrExpiredResource;	// IMP=0x00100000000eb530
- (id)_gkAllResourceIDs;	// IMP=0x00100000000eb517
- (id)_gkAllRepresentedItems;	// IMP=0x00100000000eb4fe
- (id)_gkInvalidOrExpiredResources;	// IMP=0x00100000000eb497
- (id)_gkValidAndNonExpiredResources;	// IMP=0x00100000000eb42a
- (id)_gkInvalidResources;	// IMP=0x00100000000eb3fc
- (id)_gkExpiredResources;	// IMP=0x00100000000eb3ce
- (_Bool)_gkContainsObjectPassingPredicate:(CDUnknownBlockType)arg1;	// IMP=0x00100000000eb2b6
- (id)_gkResourceWithID:(id)arg1;	// IMP=0x00100000000eb19b
- (id)_gkResourcesWithIDs:(id)arg1;	// IMP=0x00100000000eafcc
@end

