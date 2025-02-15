//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMediaTaskTypeConfig, NSArray, NSDictionary, NSString;
@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSMediaTaskURLBuilder : NSObject
{
    _Bool _charts;	// 8 = 0x8
    NSArray *_additionalPlatforms;	// 16 = 0x10
    NSDictionary *_additionalQueryParams;	// 24 = 0x18
    id <AMSBagProtocol> _bag;	// 32 = 0x20
    NSArray *_bundleIdentifiers;	// 40 = 0x28
    NSString *_clientVersion;	// 48 = 0x30
    AMSMediaTaskTypeConfig *_config;	// 56 = 0x38
    NSDictionary *_filters;	// 64 = 0x40
    NSArray *_includedResultKeys;	// 72 = 0x48
    NSArray *_itemIdentifiers;	// 80 = 0x50
    NSString *_logKey;	// 88 = 0x58
    NSString *_searchTerm;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000405abc
@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(retain, nonatomic) NSArray *includedResultKeys; // @synthesize includedResultKeys=_includedResultKeys;
@property(retain, nonatomic) NSDictionary *filters; // @synthesize filters=_filters;
@property(readonly, nonatomic) AMSMediaTaskTypeConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(nonatomic) _Bool charts; // @synthesize charts=_charts;
@property(retain, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) NSDictionary *additionalQueryParams; // @synthesize additionalQueryParams=_additionalQueryParams;
@property(retain, nonatomic) NSArray *additionalPlatforms; // @synthesize additionalPlatforms=_additionalPlatforms;
- (id)_devicePlatform;	// IMP=0x000000000040574f
- (void)_addSearchTerm:(id)arg1;	// IMP=0x0000000000405570
- (void)_addItemIdentifiers:(id)arg1;	// IMP=0x000000000040534e
- (void)_addCharts:(id)arg1;	// IMP=0x000000000040522b
- (void)_addBundleIdentifiers:(id)arg1;	// IMP=0x000000000040507f
- (id)_queryItemsWithLanguage:(id)arg1;	// IMP=0x0000000000404889
- (id)_pathPromise;	// IMP=0x00000000004042ae
- (id)_languagePromiseForType;	// IMP=0x0000000000404234
- (id)_languagePromiseAppDistribution;	// IMP=0x00000000004040f3
- (id)_languagePromise;	// IMP=0x0000000000403cfe
- (id)_hostPromise;	// IMP=0x0000000000403c39
- (id)_verifyConfiguration;	// IMP=0x00000000004038de
- (id)build;	// IMP=0x0000000000403557
- (id)initWithConfig:(id)arg1 clientVersion:(id)arg2 bag:(id)arg3;	// IMP=0x0000000000403484

@end

