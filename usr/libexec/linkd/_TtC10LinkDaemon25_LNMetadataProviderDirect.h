//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC10LinkDaemon25_LNMetadataProviderDirect : NSObject
{
    MISSING_TYPE *connection;	// 8 = 0x8
    MISSING_TYPE *requiresAssertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000008ee20
- (id)init;	// IMP=0x001000000008edea
- (id)examplePhrasesForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008ed80
- (id)appShortcutsProviderMangledTypeNameForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008ecc3
- (long long)metadataVersionForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008ec61
- (id)entityIdentifiersForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008ea43
- (id)entitiesForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008ea17
- (id)entitiesWithError:(id *)arg1;	// IMP=0x001000000008e9ff
- (id)enumsForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008e68b
- (id)enumsWithError:(id *)arg1;	// IMP=0x001000000008e673
- (id)queriesForBundleIdentifier:(id)arg1 ofType:(id)arg2 error:(id *)arg3;	// IMP=0x001000000008e269
- (id)queriesWithError:(id *)arg1;	// IMP=0x001000000008e251
- (id)bundleRegistrationsWithError:(id *)arg1;	// IMP=0x001000000008dea3
- (id)bundlesWithError:(id *)arg1;	// IMP=0x001000000008dc48
- (id)actionsWithFullyQualifiedIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008db5f
- (id)actionsConformingToSystemProtocol:(id)arg1 withParametersOfTypes:(id)arg2 bundleIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x001000000008d88d
- (id)actionsForBundleIdentifier:(id)arg1 andActionIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000008d429
- (id)actionForBundleIdentifier:(id)arg1 andActionIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000008d17a
- (id)actionIdentifiersForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008cf9c
- (id)actionsForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008cf70
- (id)actionsAndSystemProtocolDefaultsForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008ce8a
- (id)actionsConformingToSystemProtocols:(id)arg1 logicalType:(unsigned long long)arg2 bundleIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x001000000008c75e
- (id)actionsWithError:(id *)arg1;	// IMP=0x001000000008c5b7
- (id)initWithConnection:(id)arg1 options:(long long)arg2 error:(id *)arg3;	// IMP=0x001000000008365b
- (id)propertiesForIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008fe70
- (id)autoShortcutsForLocaleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008f959
- (void)autoShortcutsForLocaleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008f888
- (void)autoShortcutsForBundleIdentifier:(id)arg1 localeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008f4fb

@end

