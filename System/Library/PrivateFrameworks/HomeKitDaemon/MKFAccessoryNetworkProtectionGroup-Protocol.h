//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFAccessoryNetworkProtectionGroupPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFModel-Protocol.h>

@class MKFAccessoryNetworkProtectionGroupDatabaseID, NSDate, NSNumber, NSString;
@protocol MKFHome;

@protocol MKFAccessoryNetworkProtectionGroup <MKFModel, MKFAccessoryNetworkProtectionGroupPublicExtensions>
@property(readonly, copy, nonatomic) MKFAccessoryNetworkProtectionGroupDatabaseID *databaseID;
@property(readonly, retain, nonatomic) id <MKFHome> home;
@property(copy, nonatomic) NSDate *writerTimestamp;
@property(copy, nonatomic) NSNumber *targetProtectionMode;
@property(copy, nonatomic) NSString *manufacturer;
@property(copy, nonatomic) NSNumber *category;
@end

