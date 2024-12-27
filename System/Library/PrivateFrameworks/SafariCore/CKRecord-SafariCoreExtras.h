//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@class NSData;
@protocol CKRecordKeyValueSetting, NSSecureCoding;

@interface CKRecord (SafariCoreExtras)
- (id)safari_referenceForKey:(id)arg1;	// IMP=0x0030000000014bdd
- (id)safari_encryptedDataForKey:(id)arg1;	// IMP=0x0030000000014b63
- (id)safari_arrayForKey:(id)arg1;	// IMP=0x0030000000014b0c
- (id)safari_dateForKey:(id)arg1;	// IMP=0x0030000000014ab5
- (id)safari_dataForKey:(id)arg1;	// IMP=0x0030000000014a5e
- (id)safari_numberForKey:(id)arg1;	// IMP=0x0030000000014a07
- (id)safari_stringForKey:(id)arg1;	// IMP=0x00300000000149b0
- (_Bool)safari_boolForKey:(id)arg1;	// IMP=0x003000000001496c
@property(readonly, copy, nonatomic) id <CKRecordKeyValueSetting> safari_encryptedValues;
@property(readonly, nonatomic) _Bool safari_hasAtLeastOneChangedField;
@property(readonly, nonatomic) NSData *safari_encodedSystemFieldsData;
- (id)safari_initWithEncodedRecordData:(id)arg1;	// IMP=0x00300000000146e0
@property(readonly, nonatomic) id <NSSecureCoding> safari_systemFieldsEncoder;
@end

