//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIDictionaryManager : NSObject
{
    NSArray *_availableDefinitionDictionaries;	// 8 = 0x8
}

+ (id)assetManager;	// IMP=0x006000000073c28a
- (void).cxx_destruct;	// IMP=0x000000000073d639
@property(readonly) NSArray *availableDefinitionDictionaries; // @synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries;
- (_Bool)_isTTYEnabled;	// IMP=0x000000000073d61d
- (id)_allAvailableDefinitionDictionaries;	// IMP=0x000000000073c9f1
- (id)_availableDictionaryAssets;	// IMP=0x000000000073c919
- (void)_downloadDictionaryAssetCatalog:(CDUnknownBlockType)arg1;	// IMP=0x000000000073c7c7
- (id)_dictionaryAssetType;	// IMP=0x000000000073c695
- (id)_definitionValuesForTerm:(id)arg1;	// IMP=0x000000000073c425
- (_Bool)_hasDefinitionForTerm:(id)arg1;	// IMP=0x000000000073c2a4
- (id)init;	// IMP=0x000000000073c228

@end

