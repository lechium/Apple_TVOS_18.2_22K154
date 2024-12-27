//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class LNSystemProtocol, NSArray, NSDictionary, NSSet, NSString, NSUUID;

@protocol LNDaemonRegistryInterface <NSObject>
- (void)metadataVersionForBundleIdentifier:(NSString *)arg1 reply:(void (^)(long long, NSError *))arg2;
- (void)unregisterBundleWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)scanBundlesWithReply:(void (^)(NSError *))arg1;
- (void)resetWithReply:(void (^)(NSError *))arg1;
- (void)registerBundleWithIdentifier:(NSString *)arg1 force:(_Bool)arg2 reply:(void (^)(NSError *))arg3;
- (void)actionForBundleIdentifier:(NSString *)arg1 appShortcutIdentifier:(NSString *)arg2 parameterIdentifier:(NSString *)arg3 completionHandler:(void (^)(LNAction *, NSError *))arg4;
- (void)actionForBundleIdentifier:(NSString *)arg1 basePhraseTemplate:(NSString *)arg2 actionIdentifier:(NSString *)arg3 parameterIdentifier:(NSUUID *)arg4 completionHandler:(void (^)(LNAction *, NSError *))arg5;
- (void)actionForBundleIdentifier:(NSString *)arg1 basePhraseTemplate:(NSString *)arg2 parameterIdentifier:(NSUUID *)arg3 completionHandler:(void (^)(LNAction *, NSError *))arg4;
- (void)actionForBundleIdentifier:(NSString *)arg1 basePhraseTemplate:(NSString *)arg2 completionHandler:(void (^)(LNAction *, NSError *))arg3;
- (void)relevantIntentsWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)relevantIntentsForBundleIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)propertiesForIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)autoShortcutsForLocaleIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)autoShortcutsForBundleIdentifier:(NSString *)arg1 localeIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)examplePhrasesForBundleIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)entitiesForBundleIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)entitiesWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)enumsForBundleIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)enumsWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)queriesForBundleIdentifier:(NSString *)arg1 ofType:(NSString *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)queriesWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)bundleRegistrationsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)bundlesWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)entityIdentifiersForBundleIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)actionIdentifiersForBundleIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)actionsWithFullyQualifiedIdentifiers:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)actionsForBundleIdentifier:(NSString *)arg1 andActionIdentifier:(NSString *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)actionsForBundleIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)actionsAndSystemProtocolDefaultsForBundleIdentifier:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)actionsConformingToSystemProtocol:(LNSystemProtocol *)arg1 withParametersOfTypes:(NSDictionary *)arg2 bundleIdentifier:(NSString *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)actionsConformingToSystemProtocols:(NSSet *)arg1 logicalType:(unsigned long long)arg2 bundleIdentifier:(NSString *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)actionsWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)fetchDatabaseURL:(void (^)(NSSecurityScopedURLWrapper *, NSError *))arg1;
@end

