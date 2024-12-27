//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ICPAPlayActivityEnqueuerProperties : PBCodable
{
    unsigned long long _storeAccountID;	// 8 = 0x8
    NSString *_buildVersion;	// 16 = 0x10
    NSString *_deviceGUID;	// 24 = 0x18
    NSString *_deviceName;	// 32 = 0x20
    NSString *_storeFrontID;	// 40 = 0x28
    int _systemReleaseType;	// 48 = 0x30
    NSString *_timeZoneName;	// 56 = 0x38
    _Bool _privateListeningEnabled;	// 64 = 0x40
    _Bool _sBEnabled;	// 65 = 0x41
    struct {
        unsigned int storeAccountID:1;
        unsigned int systemReleaseType:1;
        unsigned int privateListeningEnabled:1;
        unsigned int sBEnabled:1;
    } _has;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000000134c0b
- (unsigned long long)hash;	// IMP=0x0000000000134acd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001348d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013474a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000134605
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001345f8
- (id)dictionaryRepresentation;	// IMP=0x000000000013438f
- (id)description;	// IMP=0x00000000001342e0

@end

