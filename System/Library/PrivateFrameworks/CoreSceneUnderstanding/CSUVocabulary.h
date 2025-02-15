//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CSUVocabulary : NSObject
{
    NSString *_labelFilePath;	// 8 = 0x8
    NSArray *_labels;	// 16 = 0x10
    struct vector<std::pair<NSString *, unsigned long>, std::allocator<std::pair<NSString *, unsigned long>>> _visibleLabels;	// 24 = 0x18
    NSString *_name;	// 48 = 0x30
    unsigned long long _count;	// 56 = 0x38
    unsigned long long _internalCount;	// 64 = 0x40
    unsigned long long _startIndex;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x000000000003b1c0
- (void).cxx_destruct;	// IMP=0x000000000003b140
@property(readonly, nonatomic) unsigned long long startIndex; // @synthesize startIndex=_startIndex;
@property(readonly, nonatomic) unsigned long long internalCount; // @synthesize internalCount=_internalCount;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_enumerateVisibleLabelsAndIndicesInVocabularyUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003b050
- (void)_enumerateVisibleLabelsInVocabularyUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003afa0
- (void)_enumerateAllLabelsInVocabularyUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ae70
@property(readonly, copy, nonatomic) NSArray *labels;
- (id)initWithName:(id)arg1 labelFilePath:(id)arg2 internalCount:(unsigned long long)arg3 visibleCount:(unsigned long long)arg4 startIndex:(unsigned long long)arg5;	// IMP=0x000000000003a8d0

@end

