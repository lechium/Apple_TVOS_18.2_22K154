//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (NAAdditions)
- (void)na_each:(CDUnknownBlockType)arg1;	// IMP=0x006000000000243a
- (_Bool)na_allSatisfy:(CDUnknownBlockType)arg1;	// IMP=0x0060000000002322
- (_Bool)na_any:(CDUnknownBlockType)arg1;	// IMP=0x006000000000220a
- (id)na_dictionaryByMappingValues:(CDUnknownBlockType)arg1;	// IMP=0x0060000000002084
- (id)na_filter:(CDUnknownBlockType)arg1;	// IMP=0x0060000000001eed
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(CDUnknownBlockType)arg2;	// IMP=0x0060000000001d14
- (id)na_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x0060000000001bdb
- (id)na_map:(CDUnknownBlockType)arg1;	// IMP=0x0060000000001a72
- (id)na_firstKeyPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00600000000017d7
@end

