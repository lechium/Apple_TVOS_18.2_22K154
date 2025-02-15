//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSComparisonPredicate.h>

@interface NSComparisonPredicate (Conversion)
- (id)CKDPQueryFiltersWithTranslator:(id)arg1 error:(id *)arg2;	// IMP=0x00600000001d7a2b
- (id)_parseBasicOperatorFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001d739d
- (id)_parseFullTextSearchFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001d6b18
- (id)_parseFullTextSearchUsingContainsTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001d6958
- (unsigned long long)_comparisonOptionForString:(id)arg1;	// IMP=0x00600000001d683a
- (id)_parseBetweenFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001d638a
- (id)_parseBeginsWithFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001d60be
- (id)_parseListContainsAllFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001d5e85
- (id)_parseListContainsAnyFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001d5b14
- (id)_parseInFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001d55e9
- (id)_parseListContainsFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001d5172
- (id)_parseNearFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000001d4aa0
- (id)_nearFilterWithKey:(id)arg1 location:(id)arg2 radius:(double)arg3 translator:(id)arg4;	// IMP=0x00600000001d4906
@end

