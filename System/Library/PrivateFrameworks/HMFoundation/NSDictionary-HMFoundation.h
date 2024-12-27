//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class NSArray, NSString;

@interface NSDictionary (HMFoundation)
+ (id)shortDescription;	// IMP=0x0010000000037c87
- (void)hmf_enumerateKeysAndObjectsWithAutoreleasePoolUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000038f58
- (id)hmf_fileHandleForKey:(id)arg1;	// IMP=0x0010000000038f01
- (id)hmf_unarchivedObjectForKey:(id)arg1 ofClasses:(id)arg2;	// IMP=0x0010000000038ced
- (id)hmf_valueForKey:(id)arg1;	// IMP=0x0010000000038c96
- (id)hmf_UUIDForKey:(id)arg1;	// IMP=0x0010000000038b7d
- (id)hmf_URLForKey:(id)arg1;	// IMP=0x0010000000038b26
- (id)hmf_timeZoneForKey:(id)arg1;	// IMP=0x0010000000038acf
- (id)hmf_stringForKey:(id)arg1;	// IMP=0x0010000000038a78
- (id)hmf_mutableSetForKey:(id)arg1;	// IMP=0x0010000000038a21
- (id)hmf_setForKey:(id)arg1;	// IMP=0x00100000000389ca
- (id)hmf_numberForKey:(id)arg1;	// IMP=0x0010000000038973
- (long long)hmf_integerForKey:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003887d
- (id)hmf_nullForKey:(id)arg1;	// IMP=0x0010000000038826
- (id)hmf_flowForKey:(id)arg1;	// IMP=0x0010000000038744
- (id)hmf_errorForKey:(id)arg1;	// IMP=0x00100000000386ed
- (id)hmf_mutableDictionaryForKey:(id)arg1;	// IMP=0x0010000000038696
- (id)hmf_dictionaryForKey:(id)arg1;	// IMP=0x001000000003863f
- (id)hmf_dateComponentsForKey:(id)arg1;	// IMP=0x00100000000385e8
- (id)hmf_dateForKey:(id)arg1;	// IMP=0x0010000000038591
- (id)hmf_dataForKey:(id)arg1;	// IMP=0x001000000003853a
- (id)hmf_calendarForKey:(id)arg1;	// IMP=0x00100000000384e3
- (_Bool)hmf_boolForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000383ed
- (_Bool)hmf_boolForKey:(id)arg1 isPresent:(_Bool *)arg2;	// IMP=0x0010000000038391
- (_Bool)hmf_boolForKey:(id)arg1;	// IMP=0x001000000003837d
- (id)hmf_base64EncodedDataForKey:(id)arg1;	// IMP=0x0010000000038318
- (id)hmf_mutableArrayForKey:(id)arg1;	// IMP=0x00100000000382c1
- (id)hmf_arrayForKey:(id)arg1 ofClasses:(id)arg2;	// IMP=0x0010000000038009
- (id)hmf_arrayForKey:(id)arg1;	// IMP=0x0010000000037fb2
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)arrayOfDateComponentsFromDataForKey:(id)arg1;	// IMP=0x0010000000039b48
- (id)urlForKey:(id)arg1;	// IMP=0x0010000000039b36
- (id)nsValueForKey:(id)arg1;	// IMP=0x0010000000039b24
- (id)predicateFromDataForKey:(id)arg1;	// IMP=0x00100000000399c7
- (id)calendarFromDataForKey:(id)arg1;	// IMP=0x0010000000039977
- (id)calendarForKey:(id)arg1;	// IMP=0x0010000000039965
- (id)errorFromDataForKey:(id)arg1;	// IMP=0x001000000003987e
- (id)errorForKey:(id)arg1;	// IMP=0x001000000003986c
- (id)dateComponentsFromDataForKey:(id)arg1;	// IMP=0x001000000003981c
- (id)dateComponentsForKey:(id)arg1;	// IMP=0x0010000000039793
- (id)timeZoneFromDataForKey:(id)arg1;	// IMP=0x0010000000039743
- (id)timeZoneForKey:(id)arg1;	// IMP=0x0010000000039731
- (id)dateForKey:(id)arg1;	// IMP=0x001000000003971f
- (id)base64EncodedDataForKey:(id)arg1;	// IMP=0x001000000003970d
- (id)dataForKey:(id)arg1;	// IMP=0x00100000000396fb
- (id)setForKey:(id)arg1;	// IMP=0x00100000000396e9
- (id)mutableSetForKey:(id)arg1;	// IMP=0x00100000000396d7
- (id)arrayForKey:(id)arg1;	// IMP=0x00100000000396c5
- (id)mutableArrayForKey:(id)arg1;	// IMP=0x00100000000396b3
- (id)mutableDictionaryForKey:(id)arg1;	// IMP=0x00100000000396a1
- (id)dictionaryForKey:(id)arg1;	// IMP=0x001000000003968f
- (id)uuidFromStringForKey:(id)arg1;	// IMP=0x001000000003962f
- (id)uuidForKey:(id)arg1;	// IMP=0x001000000003961d
- (id)secureDescriptionWithBlacklistKeys:(id)arg1;	// IMP=0x0010000000039601
- (id)secureDescriptionWithIndent:(id)arg1 newLine:(_Bool)arg2 blacklistedKeys:(id)arg3;	// IMP=0x001000000003905a

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;
@end

