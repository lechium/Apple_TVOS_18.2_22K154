//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSPairedDeviceKeychainSchema : NSObject
{
}

- (id)_migrateFromSinglePairedDeviceToMultipleWithKeychainDictionary:(id)arg1;	// IMP=0x004000000013bcc7
- (id)migrateKeychainDictionary:(id)arg1;	// IMP=0x001000000013bbf4
- (unsigned long long)_migrationTypeForKeychainDictionary:(id)arg1;	// IMP=0x001000000013bb4b
- (_Bool)isMigrationRequiredForKeychainDictionary:(id)arg1;	// IMP=0x001000000013bb32
- (id)_propertyDictionariesFromPairedDevices:(id)arg1;	// IMP=0x001000000013b963
- (id)keychainDictionaryWithPairedDevices:(id)arg1;	// IMP=0x001000000013b8b5

@end

