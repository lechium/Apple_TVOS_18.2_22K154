//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SEMTokenizer;

@interface SEMSkitInjector : NSObject
{
    SEMTokenizer *_tokenizer;	// 8 = 0x8
    struct Indexer _indexer;	// 16 = 0x10
    struct Searcher _searcher;	// 144 = 0x90
    struct vector<std::pair<semskitbridge::SearchGroup, std::vector<std::byte>>, std::allocator<std::pair<semskitbridge::SearchGroup, std::vector<std::byte>>>> _documents;	// 192 = 0xc0
}

- (id).cxx_construct;	// IMP=0x000000000004890c
- (void).cxx_destruct;	// IMP=0x0000000000048869
@property(readonly, copy) NSString *description;
- (id)accessDescription;	// IMP=0x00000000000487c8
- (_Bool)setEntityPool:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004875a
- (_Bool)supportsIndexSiteType:(unsigned char)arg1;	// IMP=0x000000000004874e
- (id)skitReadAccessWithIndexSiteType:(unsigned char)arg1;	// IMP=0x0000000000048745
- (void)prewarm;	// IMP=0x000000000004873f
- (id)matchSpans:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000048581
- (_Bool)isEmpty;	// IMP=0x00000000000484cc
- (id)indexLocale;	// IMP=0x00000000000484b6
- (_Bool)_analyzeCascadeEntity:(id)arg1 outSearchGroup:(unsigned short *)arg2 indexTokens:(void *)arg3 builder:(void *)arg4 error:(id *)arg5;	// IMP=0x000000000004809b
- (_Bool)_buildDocumentsFromEntities:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004775b
- (id)init;	// IMP=0x00000000000476f7
- (id)initWithTokenizer:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000046f94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

