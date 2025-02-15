//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBundle.h>

@class NSString;

@interface NSBundle (SafariCoreExtras)
+ (_Bool)safari_isSafariFamilyBundleIdentifier:(id)arg1;	// IMP=0x002000000001a0e7
+ (_Bool)safari_isICloudAppWithBundleIdentifier:(id)arg1;	// IMP=0x002000000001a027
+ (id)safari_safariInjectedBundleURL;	// IMP=0x0020000000019e8c
+ (id)safari_currentTemplateAppName;	// IMP=0x0020000000019a80
+ (id)safari_safariApplicationPlatformBundleIdentifier;	// IMP=0x0020000000019a78
+ (id)safari_safariCoreBundle;	// IMP=0x00200000000199ca
@property(readonly, nonatomic) _Bool safari_isSafariFamilyApplicationBundle;
@property(readonly, copy, nonatomic) NSString *safari_normalizedVersion;
@property(readonly, copy, nonatomic) NSString *safari_version;
@property(readonly, nonatomic) _Bool safari_primaryLocalizationIsEnglish;
@property(readonly, nonatomic) NSString *safari_shortVersion;
@property(readonly, nonatomic) NSString *safari_localizedShortVersion;
@property(readonly, nonatomic) NSString *safari_localizedDisplayName;
@property(readonly, nonatomic) NSString *safari_displayName;
@property(readonly, nonatomic) _Bool safari_isInSyncAgent;
@end

