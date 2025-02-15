//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface IXSAppUninstallAlert
{
    _Bool _appManagedByManagedSettings;	// 8 = 0x8
    struct __CFBundle *_appStringsBundle;	// 16 = 0x10
    NSString *_appStringsTableName;	// 24 = 0x18
}

+ (id)_loadHBMCloudSyncUtilityClass;	// IMP=0x00400000000363fb
- (void).cxx_destruct;	// IMP=0x00200000000370f2
@property(readonly, nonatomic) NSString *appStringsTableName; // @synthesize appStringsTableName=_appStringsTableName;
@property(readonly, nonatomic) struct __CFBundle *appStringsBundle; // @synthesize appStringsBundle=_appStringsBundle;
@property(readonly, nonatomic) _Bool appManagedByManagedSettings; // @synthesize appManagedByManagedSettings=_appManagedByManagedSettings;
- (void)dealloc;	// IMP=0x001000000003706e
- (void)otherButtonActionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000036fd8
- (id)optionalButtonForNotRemovableAppActionURL;	// IMP=0x0010000000036e5f
- (id)optionalButtonForNotRemovableAppLabel;	// IMP=0x0010000000036d56
- (id)otherButtonLabel;	// IMP=0x0010000000036d04
- (id)cancelButtonLabel;	// IMP=0x0010000000036ce4
- (id)defaultButtonLabel;	// IMP=0x0010000000036cc4
- (id)message;	// IMP=0x00100000000369dd
- (id)title;	// IMP=0x00100000000368b4
- (id)appInstalledFonts;	// IMP=0x00100000000368ac
- (id)localizedStringForKey:(id)arg1 withFormatHint:(id)arg2;	// IMP=0x0010000000036805
- (id)customizedLocalizedStringForKey:(id)arg1;	// IMP=0x0010000000036685
@property(readonly, nonatomic) _Bool deviceHasOneHomeEnabled; // @dynamic deviceHasOneHomeEnabled;
- (id)initWithAppRecord:(id)arg1 bundleIdentifier:(id)arg2 removability:(unsigned long long)arg3 isManagedByManagedSettings:(_Bool)arg4 deletionIsRestricted:(_Bool)arg5;	// IMP=0x001000000003636c

@end

