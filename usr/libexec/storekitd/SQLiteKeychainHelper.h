//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SQLiteKeychainHelper : NSObject
{
}

+ (struct __CFDictionary *)_baseQueryForKeyID:(id)arg1 additionalCapacity:(unsigned long long)arg2;	// IMP=0x0040000000078ea7
+ (id)_valueFromKeychainForKey:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000078d1e
+ (_Bool)_saveValueToKeychain:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000078b9e
+ (id)_copyErrorForOSStatus:(int)arg1;	// IMP=0x00100000000789ba
+ (_Bool)storeKey:(id)arg1 withIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000078922
+ (id)fetchKeyWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000788a4

@end

