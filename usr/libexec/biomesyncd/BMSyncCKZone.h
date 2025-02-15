//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface BMSyncCKZone : NSObject
{
    int _recoveryState;	// 8 = 0x8
    NSString *_zoneName;	// 16 = 0x10
    NSString *_zoneUUID;	// 24 = 0x18
    NSDate *_attemptedRecoveryDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001d8a4
@property(readonly, nonatomic) NSDate *attemptedRecoveryDate; // @synthesize attemptedRecoveryDate=_attemptedRecoveryDate;
@property(readonly, nonatomic) int recoveryState; // @synthesize recoveryState=_recoveryState;
@property(readonly, nonatomic) NSString *zoneUUID; // @synthesize zoneUUID=_zoneUUID;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (id)initWithFMResultSet:(id)arg1;	// IMP=0x001000000001d77e

@end

