//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NWPBUpdateBrowse : PBCodable
{
    NSString *_clientUUID;	// 8 = 0x8
    NSMutableArray *_discoveredEndpoints;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000007354e0
- (unsigned long long)hash;	// IMP=0x0000000000735490
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007353d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000735150
- (void)writeTo:(id)arg1;	// IMP=0x0000000000734fe0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000734b10
- (id)dictionaryRepresentation;	// IMP=0x0000000000734890
- (id)description;	// IMP=0x00000000007347e0

@end

