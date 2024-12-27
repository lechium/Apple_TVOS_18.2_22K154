//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcuts/NSObject-Protocol.h>

@class INAppInfo, NSArray, NSString, NSURL;

@protocol INVCIntentDefinitionManager <NSObject>
+ (NSArray *)allBundleIdentifiers;
+ (INAppInfo *)appInfoForBundleID:(NSString *)arg1;
+ (NSURL *)intentDefinitionBundleURLForBundleID:(NSString *)arg1;
+ (NSArray *)intentDefinitionURLsForBundleID:(NSString *)arg1;
@end

