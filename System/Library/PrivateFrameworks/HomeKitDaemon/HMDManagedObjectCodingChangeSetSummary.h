//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDManagedObjectCodingChangeSetSummary : HMFObject
{
    NSString *_shortDescriptionForChangeSet;	// 8 = 0x8
    NSSet *_insertedObjectNames;	// 16 = 0x10
    NSSet *_modifiedObjectPropertyNames;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000915c6a
@property(readonly) NSSet *modifiedObjectPropertyNames; // @synthesize modifiedObjectPropertyNames=_modifiedObjectPropertyNames;
@property(readonly) NSSet *insertedObjectNames; // @synthesize insertedObjectNames=_insertedObjectNames;
@property(readonly) NSString *shortDescriptionForChangeSet; // @synthesize shortDescriptionForChangeSet=_shortDescriptionForChangeSet;
- (id)attributeDescriptions;	// IMP=0x0000000000915b0a
- (id)initWithShortDescriptionForChangeSet:(id)arg1 insertedObjectNames:(id)arg2 modifiedObjectPropertyNames:(id)arg3;	// IMP=0x0000000000915a40

@end

