//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@interface NSCoder (TVTopShelf)
+ (_Bool)_tvs_validateDictionaryContents:(id)arg1 allowedKeyClasses:(id)arg2 allowedValueClasses:(id)arg3;	// IMP=0x006000000003aab5
+ (_Bool)_tvs_validateObject:(id)arg1 allowedClasses:(id)arg2;	// IMP=0x006000000003a96d
+ (_Bool)_tvs_validateObject:(id)arg1 allowedClass:(Class)arg2;	// IMP=0x006000000003a8e9
+ (id)tvs_topShelfUserInfoAllowedClasses;	// IMP=0x0060000000038efc
- (id)tvs_decodeSimpleDictionaryWithDictionaryKeyClass:(Class)arg1 dictionaryValueClass:(Class)arg2 forKey:(id)arg3;	// IMP=0x001000000003a3cc
- (void)tvs_encodeSimpleDictionary:(id)arg1 withDictionaryKeyClass:(Class)arg2 dictionaryValueClass:(Class)arg3 forKey:(id)arg4;	// IMP=0x001000000003a0e7
- (id)tvs_decodeSimpleSetWithElementClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x0010000000039ddb
- (void)tvs_encodeSimpleSet:(id)arg1 withElementClass:(Class)arg2 forKey:(id)arg3;	// IMP=0x0010000000039aff
- (id)tvs_decodeSimpleArrayWithElementClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x00100000000397ef
- (void)tvs_encodeSimpleArray:(id)arg1 withElementClass:(Class)arg2 forKey:(id)arg3;	// IMP=0x0010000000039513
- (void)tvs_encodeObject:(id)arg1 ofClasses:(id)arg2 forKey:(id)arg3;	// IMP=0x00100000000393fe
- (void)tvs_encodeObject:(id)arg1 ofClass:(Class)arg2 forKey:(id)arg3;	// IMP=0x0010000000039364
- (id)tvs_decodeTopShelfMutableImageRequestDictionaryForKey:(id)arg1;	// IMP=0x001000000003930a
- (id)tvs_decodeTopShelfImageRequestDictionaryForKey:(id)arg1;	// IMP=0x0010000000039294
- (void)tvs_encodeTopShelfImageRequestDictionary:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000003920a
- (id)tvs_decodeTopShelfUserInfoForKey:(id)arg1;	// IMP=0x0010000000039150
- (void)tvs_encodeTopShelfUserInfo:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000038fa6
@end

