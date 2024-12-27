//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, CKRecordZoneID, NSString;

@interface CKDAnonymousShareTuple : NSObject
{
    CKRecordZoneID *_zoneID;	// 8 = 0x8
    CKRecordID *_shareID;	// 16 = 0x10
    NSString *_ckAnonymousShareHashIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000022c711
- (void).cxx_destruct;	// IMP=0x000000000022ca25
@property(copy) NSString *ckAnonymousShareHashIdentifier; // @synthesize ckAnonymousShareHashIdentifier=_ckAnonymousShareHashIdentifier;
@property(readonly, copy, nonatomic) CKRecordID *shareID; // @synthesize shareID=_shareID;
@property(readonly, copy, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022c90c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000022c7fc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000022c719
- (id)initWithZoneID:(id)arg1 shareID:(id)arg2;	// IMP=0x000000000022c658

@end

