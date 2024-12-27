//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _MPCProtoDelegateInfoTokenB : PBCodable
{
    unsigned long long _sessionID;	// 8 = 0x8
    NSData *_hardwareInfoData;	// 16 = 0x10
    NSData *_machineIDData;	// 24 = 0x18
    NSData *_picData;	// 32 = 0x20
    NSString *_userAgent;	// 40 = 0x28
    struct {
        unsigned int sessionID:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000274050
- (unsigned long long)hash;	// IMP=0x0000000000273fa2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000273e67
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000273d56
- (void)writeTo:(id)arg1;	// IMP=0x0000000000273c9c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000273a4e
- (id)dictionaryRepresentation;	// IMP=0x0000000000273918
- (id)description;	// IMP=0x0000000000273869

@end

