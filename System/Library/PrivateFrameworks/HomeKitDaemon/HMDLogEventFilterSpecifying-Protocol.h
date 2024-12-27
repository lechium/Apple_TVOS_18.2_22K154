//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSData, NSString, NSUUID;

@protocol HMDLogEventFilterSpecifying <NSObject>
@property(readonly, nonatomic) NSData *sampledData;
@property(readonly, nonatomic) NSUUID *sampledUUID;
@property(readonly, nonatomic) NSString *sampledCategory;
@property(readonly) _Bool enableEventFilterSpecifying;
@end

