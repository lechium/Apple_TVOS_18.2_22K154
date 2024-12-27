//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtension.h>

@interface NSExtension (Intents)
+ (_Bool)appAllowedToTalkToSiri:(id)arg1;	// IMP=0x006000000034c7f8
+ (void)_findAppsWithAnyIntentsExtensionCheckingSiriEnabledUseFilter:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x006000000034c6d4
+ (void)_intents_findSiriEntitledAppsContainingAnIntentsExtensionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x006000000034c641
+ (void)_intents_findPossibleSiriEnabledAppsWithAnIntentsServiceExtension:(CDUnknownBlockType)arg1;	// IMP=0x006000000034c62a
+ (void)_intents_findAppsWithAnIntentsServiceExtension:(CDUnknownBlockType)arg1;	// IMP=0x006000000034c597
+ (id)_extensionMatchingDictionaryForIntentClassNames:(id)arg1 extensionPointName:(id)arg2 launchId:(id)arg3;	// IMP=0x006000000034c424
+ (id)_intents_uiExtensionMatchingAttributesForIntents:(id)arg1;	// IMP=0x006000000034c408
+ (id)_intents_extensionMatchingAttributesForIntents:(id)arg1;	// IMP=0x006000000034c3ec
+ (void)_matchExtensionsWithAttributes:(id)arg1 extensionPointName:(id)arg2 requireTrustCheck:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x006000000034c331
+ (void)_matchSnippetExtensionsWithExtensionPointName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x006000000034c1b0
+ (void)_matchExtensionsForIntent:(id)arg1 extensionPointName:(id)arg2 shouldCheckForSiriEnabled:(_Bool)arg3 shouldIgnoreLaunchId:(_Bool)arg4 requireTrustCheck:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x006000000034bc6b
+ (void)_matchExtensionsForIntent:(id)arg1 extensionPointName:(id)arg2 shouldCheckForSiriEnabled:(_Bool)arg3 requireTrustCheck:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x006000000034bc4a
+ (void)_intents_matchSiriUISnippetExtensionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x006000000034bbb5
+ (void)_intents_matchSiriUIExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x006000000034bb08
+ (void)_intents_matchSiriExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x006000000034bad6
+ (void)_intents_matchUIExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x006000000034ba2c
+ (void)_intents_matchExtensionsForIntent:(id)arg1 requireTrustCheck:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x006000000034ba00
+ (void)_intents_matchExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x006000000034b9d1
+ (void)_intents_matchExtensionsForIntent:(id)arg1 shouldIgnoreLaunchId:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x006000000034b9a7
- (_Bool)_intents_extensionSupportsAtLeastOneSiriIntent;	// IMP=0x001000000034b881
- (id)_intents_intentsRestrictedWhileProtectedDataUnavailable;	// IMP=0x001000000034b7f6
@end

