//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NRPBSwitchRecordCollection, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NRPBDeviceCollectionHistory : PBCodable
{
    long long _startIndex;	// 8 = 0x8
    NSMutableArray *_historys;	// 16 = 0x10
    NRPBSwitchRecordCollection *_switchRecords;	// 24 = 0x18
    struct {
        unsigned int startIndex:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000776b
- (unsigned long long)hash;	// IMP=0x00000000000076d7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000075ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000073ef
- (void)writeTo:(id)arg1;	// IMP=0x0000000000007253
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000006fd8
- (id)dictionaryRepresentation;	// IMP=0x0000000000006cef
- (id)description;	// IMP=0x0000000000006c40

@end

