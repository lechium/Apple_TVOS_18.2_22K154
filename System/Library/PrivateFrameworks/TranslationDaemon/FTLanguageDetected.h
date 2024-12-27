//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTLanguageDetected : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct LanguageDetected *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000139061
- (id)flatbuffData;	// IMP=0x0000000000138ee4
- (Offset_1e16e042)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000138a3b
- (void)predictions_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000013888a
- (unsigned long long)predictions_count;	// IMP=0x00000000001387ee
- (id)predictions_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001386f4
@property(readonly, nonatomic) NSArray *predictions;
@property(readonly, nonatomic) NSString *detected_locale;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013855d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetected *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000001383b2
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetected *)arg2;	// IMP=0x000000000013839d
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000138383
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000013836c

@end

