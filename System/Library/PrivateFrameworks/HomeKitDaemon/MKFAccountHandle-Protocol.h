//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFAccountHandlePublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFModel-Protocol.h>

@class IDSURI, MKFAccountHandleDatabaseID, NSDate, NSNumber;
@protocol MKFAccount;

@protocol MKFAccountHandle <MKFModel, MKFAccountHandlePublicExtensions>
@property(readonly, copy, nonatomic) MKFAccountHandleDatabaseID *databaseID;
@property(readonly, retain, nonatomic) id <MKFAccount> account;
@property(copy, nonatomic) NSDate *writerTimestamp;
@property(copy, nonatomic) NSNumber *local;
@property(retain, nonatomic) IDSURI *idsURI;
@end

