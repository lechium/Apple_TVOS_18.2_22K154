//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, SEMSkitInfo;

@interface SEMSkitWriter : NSObject
{
    NSURL *_directoryURL;	// 8 = 0x8
    SEMSkitInfo *_info;	// 16 = 0x10
    struct unique_ptr<semskitbridge::Indexer, std::default_delete<semskitbridge::Indexer>> _indexer;	// 24 = 0x18
    _Bool _inTransaction;	// 32 = 0x20
    unsigned long long _flushThreshold;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x001000000004e04e
- (id).cxx_construct;	// IMP=0x000000000004fc87
- (void).cxx_destruct;	// IMP=0x000000000004fc49
@property(readonly, nonatomic) unsigned long long flushThreshold; // @synthesize flushThreshold=_flushThreshold;
- (_Bool)shouldMerge:(_Bool *)arg1 error:(id *)arg2;	// IMP=0x000000000004fa55
- (_Bool)cleanup:(id *)arg1;	// IMP=0x000000000004f9ea
- (_Bool)clearWithError:(id *)arg1;	// IMP=0x000000000004f8c0
- (_Bool)removeItemWithExternalId:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004f7a3
- (_Bool)addCascadeSharedItemContent:(id)arg1 allMetaContent:(id)arg2 sourceIdentifier:(id)arg3 personaIdentifier:(id)arg4 externalId:(id)arg5 error:(id *)arg6;	// IMP=0x000000000004f31e
- (_Bool)setTransactionIndexFeatures:(unsigned short)arg1 error:(id *)arg2;	// IMP=0x000000000004f06c
- (_Bool)setTransactionLocale:(long long)arg1 assetPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004ec58
- (unsigned short)indexFeatures;	// IMP=0x000000000004ebfb
- (long long)indexLocale;	// IMP=0x000000000004eb9e
- (_Bool)rollbackChanges:(id *)arg1;	// IMP=0x000000000004ea35
- (_Bool)commitChanges:(_Bool *)arg1 error:(id *)arg2;	// IMP=0x000000000004e656
- (_Bool)_beginTransactionWithError:(id *)arg1;	// IMP=0x000000000004e55d
- (id)init;	// IMP=0x000000000004e4f9
- (id)initWithSkitDirectoryURL:(id)arg1 dataProtectionClass:(int)arg2 flushThreshold:(unsigned long long)arg3;	// IMP=0x000000000004e077

@end

