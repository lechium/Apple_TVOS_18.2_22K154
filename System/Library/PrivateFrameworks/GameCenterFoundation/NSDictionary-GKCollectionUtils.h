//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (GKCollectionUtils)
+ (id)_gkDictionaryWithFormEncodedString:(id)arg1;	// IMP=0x0050000000005859
+ (id)_gkClientImageDictionaryForServerImageURLs:(id)arg1;	// IMP=0x00500000000961c5
+ (id)_gkImageCacheKeyPathsByKey;	// IMP=0x0050000000096175
- (id)numberValueFromKey:(id)arg1;	// IMP=0x0010000000005d68
- (double)doubleValueFromKey:(id)arg1 defaultValue:(double)arg2;	// IMP=0x0010000000005d16
- (unsigned long long)unsignedIntegerValueFromKey:(id)arg1 defaultValue:(unsigned long long)arg2;	// IMP=0x0010000000005ccb
- (long long)integerValueFromKey:(id)arg1 defaultValue:(long long)arg2;	// IMP=0x0010000000005c80
- (_Bool)boolValueFromKey:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x0010000000005c38
- (id)_gkAddEntriesFrom:(id)arg1;	// IMP=0x0010000000005b93
- (id)_gkDictionaryWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000005ae0
- (id)_gkValuesForKeys:(id)arg1;	// IMP=0x00100000000058fc
- (id)_gkSubDictionaryWithKeys:(id)arg1 mappedToNewKeys:(id)arg2;	// IMP=0x00100000000055a3
- (id)_gkSubDictionaryWithKeys:(id)arg1;	// IMP=0x00100000000053ba
- (id)_gkDictionaryByRemovingObjectForKey:(id)arg1;	// IMP=0x001000000000535d
- (id)_gkDictionaryByRemovingObjectsForKeys:(id)arg1;	// IMP=0x0010000000005300
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x00100000000263c2
- (id)_gkImageURLForSize:(long long)arg1 scale:(double)arg2;	// IMP=0x0010000000096342
- (id)_gkImageURLForSize:(long long)arg1 scale:(double)arg2 foundSize:(out unsigned long long *)arg3;	// IMP=0x0010000000095d8b
@end

