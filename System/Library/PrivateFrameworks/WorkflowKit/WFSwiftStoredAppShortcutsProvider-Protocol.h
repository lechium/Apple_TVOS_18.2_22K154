//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString, NSUUID;

@protocol WFSwiftStoredAppShortcutsProvider
- (void)retrieveActionForBundleIdentifier:(NSString *)arg1 basePhraseTemplate:(NSString *)arg2 actionIdentifier:(NSString *)arg3 parameterIdentifier:(NSUUID *)arg4 completion:(void (^)(LNAction *, NSError *))arg5;
- (NSDictionary *)propertiesForIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (NSDictionary *)autoShortcutsForLocaleIdentifier:(NSString *)arg1 error:(id *)arg2;
@end

