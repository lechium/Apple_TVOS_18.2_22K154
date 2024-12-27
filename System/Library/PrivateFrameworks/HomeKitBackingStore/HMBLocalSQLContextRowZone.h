//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSUUID;
@protocol HMBLocalZoneID;

__attribute__((visibility("hidden")))
@interface HMBLocalSQLContextRowZone : HMFObject
{
    id <HMBLocalZoneID> _identifier;	// 8 = 0x8
    unsigned long long _zoneRow;	// 16 = 0x10
    NSUUID *_replication;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000038e98
@property(retain, nonatomic) NSUUID *replication; // @synthesize replication=_replication;
@property(nonatomic) unsigned long long zoneRow; // @synthesize zoneRow=_zoneRow;
@property(retain, nonatomic) id <HMBLocalZoneID> identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000038d80
- (id)debugDescription;	// IMP=0x0000000000038cd4
- (id)initWithZoneRow:(unsigned long long)arg1 name:(id)arg2 token:(id)arg3;	// IMP=0x0000000000038c14
- (id)initWithZoneRow:(unsigned long long)arg1;	// IMP=0x0000000000038bd0
- (id)init;	// IMP=0x0000000000038ba1

@end

