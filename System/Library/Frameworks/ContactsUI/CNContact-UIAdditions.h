//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContact.h>

@class NSArray, NSData, NSString;

@interface CNContact (UIAdditions)
+ (id)contactWithStateRestorationCoder:(id)arg1 store:(id)arg2 keys:(id)arg3;	// IMP=0x0020000000081436
+ (id)multiValuePropertiesSupportingPredicateValidation;	// IMP=0x0020000000080e8a
+ (id)descriptorForAllUIKeys;	// IMP=0x0020000000080b29
+ (_Bool)settableMeCardEnabled;	// IMP=0x0020000000080abe
+ (_Bool)quickActionsEnabled;	// IMP=0x0020000000080a53
+ (_Bool)suggestionsShownInEditMode;	// IMP=0x00200000000809e8
+ (_Bool)suggestionsEnabled;	// IMP=0x002000000008097d
@property(readonly, nonatomic) NSData *vCardRepresentation;
- (id)validPropertiesByEvaluatingPredicate:(id)arg1 onMultiValueProperties:(id)arg2;	// IMP=0x0010000000080fa9
@property(readonly, nonatomic) NSArray *birthdays;
@property(readonly, nonatomic) NSString *personName;
@property(readonly, nonatomic) _Bool supportsInstantMessageService;
@property(readonly, nonatomic) _Bool hasNonPersistedData;
@property(readonly, nonatomic, getter=isUnknown) _Bool unknown;
@end

