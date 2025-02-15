//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTRecognitionResult, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTKeywordFinderRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct KeywordFinderRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000103077
- (id)flatbuffData;	// IMP=0x0000000000102efa
- (Offset_002dc819)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001028e2
@property(readonly, nonatomic) _Bool enable_sanitization;
@property(readonly, nonatomic) FTRecognitionResult *recognition_result;
- (void)keywords_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010262d
- (unsigned long long)keywords_count;	// IMP=0x0000000000102591
- (id)keywords_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000102497
@property(readonly, nonatomic) NSArray *keywords;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000102224
- (id)initWithFlatbuffData:(id)arg1 root:(const struct KeywordFinderRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000102079
- (id)initWithFlatbuffData:(id)arg1 root:(const struct KeywordFinderRequest *)arg2;	// IMP=0x0000000000102064
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000010204a
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000102033

@end

