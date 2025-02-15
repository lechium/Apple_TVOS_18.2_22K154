//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TranslationDaemon/_LTAssetProgressReporting-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol _LTDAssetModelProtocol <_LTAssetProgressReporting>
@property(readonly, nonatomic) _Bool canBePurged;
@property(readonly, nonatomic) _Bool isInstalled;
@property(readonly, nonatomic) _Bool isDownloading;
@property(readonly, nonatomic) _Bool isAvailable;
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic) NSArray *supportedLanguages;
@property(readonly, nonatomic) NSString *assetLanguage;
@property(readonly, nonatomic) long long requiredCapabilityIdentifier;
@property(readonly, nonatomic) _Bool isPremiumTextLID;
@property(readonly, nonatomic) long long unarchivedSize;
@property(readonly, nonatomic) long long downloadSize;
@property(readonly, nonatomic) NSURL *getLocalFileUrl;
@property(readonly, nonatomic) long long contentVersion;
@property(readonly, nonatomic) long long formatVersion;
@property(readonly, nonatomic) NSString *assetBuild;
@property(readonly, nonatomic) long long assetVersion;
@property(readonly, nonatomic) NSString *managedAssetType;
@property(readonly, nonatomic) unsigned long long assetType;
@property(readonly, nonatomic) NSString *assetTypeName;
@property(readonly, nonatomic) NSString *coreAssetName;
@property(readonly, nonatomic) NSString *assetName;
@property(readonly, nonatomic) NSString *assetId;
@property(readonly, nonatomic) NSString *identifier;

@optional
- (_Bool)refreshState;
@end

