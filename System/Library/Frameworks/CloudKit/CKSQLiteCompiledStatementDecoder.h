//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@class CKSQLiteCompiledStatement, NSMutableDictionary;

@interface CKSQLiteCompiledStatementDecoder : NSCoder
{
    CKSQLiteCompiledStatement *_statement;	// 8 = 0x8
    NSMutableDictionary *_propertyValues;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d11b9
- (id)fillProperties;	// IMP=0x00000000000d1110
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x00000000000d10f0
- (id)decodeObjectForKey:(id)arg1;	// IMP=0x00000000000d10d3
- (long long)decodeInt64ForKey:(id)arg1;	// IMP=0x00000000000d1084
- (int)decodeInt32ForKey:(id)arg1;	// IMP=0x00000000000d1035
- (int)decodeIntForKey:(id)arg1;	// IMP=0x00000000000d0fe6
- (float)decodeFloatForKey:(id)arg1;	// IMP=0x00000000000d0f8b
- (double)decodeDoubleForKey:(id)arg1;	// IMP=0x00000000000d0f30
- (_Bool)decodeBoolForKey:(id)arg1;	// IMP=0x00000000000d0ee1
- (_Bool)containsValueForKey:(id)arg1;	// IMP=0x00000000000d0ea3
- (_Bool)ck_isDecodingForCKSQLiteDatabase;	// IMP=0x00000000000d0e9b
- (id)initWithStatement:(id)arg1;	// IMP=0x00000000000d0e0c

@end

