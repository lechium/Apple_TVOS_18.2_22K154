//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HBCollectionChangeSetComparator : NSObject
{
}

+ (id)_movedIdentifiersWithSourceIdentifiers:(id)arg1 destinationIdentifiers:(id)arg2;	// IMP=0x008000000002196e
+ (id)_indexByIdentifierDictionaryWithIdentifiers:(id)arg1;	// IMP=0x008000000002180a
+ (id)_identifiersWithObjects:(id)arg1 identifierBlock:(CDUnknownBlockType)arg2;	// IMP=0x00800000000215bd
+ (id)_changeSetWithSourceObjects:(id)arg1 destinationObjects:(id)arg2 identifierBlock:(CDUnknownBlockType)arg3 isEqualBlock:(CDUnknownBlockType)arg4 updateChangeSetBlock:(CDUnknownBlockType)arg5;	// IMP=0x00800000000208d1
+ (id)changeSetFromObjects:(id)arg1 toObjects:(id)arg2 identifierBlock:(CDUnknownBlockType)arg3 updateChangeSetBlock:(CDUnknownBlockType)arg4;	// IMP=0x00800000000208af
+ (id)changeSetFromObjects:(id)arg1 toObjects:(id)arg2 identifierBlock:(CDUnknownBlockType)arg3 isEqualBlock:(CDUnknownBlockType)arg4;	// IMP=0x008000000002088c
+ (id)changeSetFromObjects:(id)arg1 toObjects:(id)arg2;	// IMP=0x008000000002085a

@end

