//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWPBHostEndpoint : PBCodable
{
    NSString *_hostname;	// 8 = 0x8
    NSString *_port;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000007d9270
- (unsigned long long)hash;	// IMP=0x00000000007d9220
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007d9160
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007d90c0
- (void)writeTo:(id)arg1;	// IMP=0x00000000007d9060
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000007d9050
- (id)dictionaryRepresentation;	// IMP=0x00000000007d8fc0
- (id)description;	// IMP=0x00000000007d8f10

@end

