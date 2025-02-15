//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPOwner/NSObject-Protocol.h>

@class NSDate, NSNumber, NSSet, NSString, NSUUID;

@protocol SPFMIPRegisterInfo <NSObject>
@property(readonly, copy, nonatomic) NSDate *lastKeyRollDate;
@property(readonly, copy, nonatomic) NSNumber *beaconZoneCreationErrorCode;
@property(readonly, copy, nonatomic) NSDate *beaconZoneCreationDate;
@property(readonly, copy, nonatomic) NSSet *serviceDisabledReasons;
@property(readonly, copy, nonatomic) NSString *serviceState;
@property(readonly, copy, nonatomic) NSUUID *baUUID;
@end

