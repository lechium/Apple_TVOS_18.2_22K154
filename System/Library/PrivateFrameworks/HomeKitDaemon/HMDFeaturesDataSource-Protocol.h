//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSUUID;

@protocol HMDFeaturesDataSource <NSObject>
@property(readonly, getter=isSHADERMercuryEnabled) _Bool SHADERMercuryEnabled;
@property(readonly, getter=isSHADEREnabled) _Bool SHADEREnabled;
@property(readonly, getter=isRVCEnabled) _Bool RVCEnabled;
@property(readonly, getter=isNativeMatterEnabled) _Bool nativeMatterEnabled;
@property(readonly, getter=isHH2MigrationDryRunEnabled) _Bool hh2MigrationDryRunEnabled;
@property(readonly, getter=isHH2AutoMigrationEnabled) _Bool hh2AutoMigrationEnabled;
@property(readonly, getter=isUserActivityStateDetectionFeatureEnabled) _Bool userActivityStateDetectionFeatureEnabled;
@property(readonly, getter=isPersistentBulletinRegistrationsFeatureEnabled) _Bool persistentBulletinRegistrationsFeatureEnabled;
- (_Bool)isResidentSelectionEnabledForHomeUUID:(NSUUID *)arg1;
@end

