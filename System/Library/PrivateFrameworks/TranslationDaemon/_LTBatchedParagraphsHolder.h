//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _LTBatchedParagraphsHolder : NSObject
{
    NSMutableDictionary *_paragraphs;	// 8 = 0x8
    NSMutableArray *_orderedParagraphIds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000005da4
- (void)completeAllAndCleanWithError:(id)arg1;	// IMP=0x0000000000005bab
- (id)paragraphs;	// IMP=0x00000000000059a4
- (void)removeParagraphWithId:(id)arg1;	// IMP=0x0000000000005941
- (void)insertParagraph:(id)arg1 withId:(id)arg2;	// IMP=0x00000000000058a2
- (id)paragraphWithId:(id)arg1;	// IMP=0x000000000000588c
@property(readonly) unsigned long long count;
- (id)init;	// IMP=0x00000000000057ca

@end

