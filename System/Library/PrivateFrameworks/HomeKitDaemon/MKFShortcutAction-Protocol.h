//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFAction-Protocol.h>
#import <HomeKitDaemon/MKFShortcutActionPublicExtensions-Protocol.h>

@class MKFShortcutActionDatabaseID, NSData;
@protocol MKFHome;

@protocol MKFShortcutAction <MKFAction, MKFShortcutActionPublicExtensions>
@property(readonly) id <MKFHome> home;
@property(readonly, copy, nonatomic) MKFShortcutActionDatabaseID *databaseID;
@property(retain, nonatomic) NSData *data;
@end

