//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNMutableContact, NSString;

__attribute__((visibility("hidden")))
@interface CNContactVCardParsedResultBuilder : NSObject
{
    CNMutableContact *_contact;	// 8 = 0x8
    _Bool _empty;	// 16 = 0x10
}

+ (id)labeledValuesWithValues:(id)arg1 transform:(CDUnknownBlockType)arg2 labels:(id)arg3 isPrimaries:(id)arg4;	// IMP=0x0010000000027106
+ (id)os_log;	// IMP=0x0010000000026bea
+ (CDUnknownBlockType)contactValueTransformForVCardKey:(id)arg1;	// IMP=0x0010000000026424
+ (id)contactKeyForVCardKey:(id)arg1;	// IMP=0x0010000000025ef7
- (void).cxx_destruct;	// IMP=0x00000000000276a4
- (long long)personFlags;	// IMP=0x0000000000027640
- (_Bool)setPersonFlags:(long long)arg1;	// IMP=0x00000000000275e0
- (unsigned long long)personFlagsByAddingSharedPhotoDisplayPreference:(long long)arg1 toFlags:(unsigned long long)arg2;	// IMP=0x00000000000275b8
- (long long)sharedPhotoDisplayPreferenceFromPersonFlags:(long long)arg1;	// IMP=0x000000000002759e
- (unsigned long long)personFlagsByAddingContactType:(long long)arg1 toFlags:(unsigned long long)arg2;	// IMP=0x0000000000027588
- (long long)contactTypeFromPersonFlags:(long long)arg1;	// IMP=0x0000000000027577
- (id)validCountryCodes;	// IMP=0x000000000002756f
- (void)setUnknownProperties:(id)arg1;	// IMP=0x0000000000027569
- (_Bool)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;	// IMP=0x0000000000027438
- (_Bool)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;	// IMP=0x0000000000026ef9
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x0000000000026ced
- (_Bool)canSetValueForProperty:(id)arg1;	// IMP=0x0000000000026ce5
- (id)valueForProperty:(id)arg1;	// IMP=0x0000000000026c6e
- (id)build;	// IMP=0x0000000000026c46
- (id)init;	// IMP=0x0000000000026b7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

