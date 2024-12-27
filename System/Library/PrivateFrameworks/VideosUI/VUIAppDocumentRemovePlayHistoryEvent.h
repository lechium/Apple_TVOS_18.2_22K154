//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIAppDocumentUpdateEvent.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentRemovePlayHistoryEvent : VUIAppDocumentUpdateEvent
{
    NSSet *_removedCanonicalIDs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b3ffe
@property(copy, nonatomic) NSSet *removedCanonicalIDs; // @synthesize removedCanonicalIDs=_removedCanonicalIDs;
- (id)description;	// IMP=0x00000000000b3e91
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b3d33
- (unsigned long long)hash;	// IMP=0x00000000000b3cb6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b3cab
- (id)dictionaryRepresentation;	// IMP=0x00000000000b3bb4
- (id)initWithRemovedCanonicalIDs:(id)arg1;	// IMP=0x00000000000b3ad0
- (id)initWithDescriptor:(id)arg1;	// IMP=0x00000000000b3a61

@end

