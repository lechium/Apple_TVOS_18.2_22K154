//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _MPCProtoDelegateInfoTokenA, _MPCProtoDelegateInfoTokenE;

__attribute__((visibility("hidden")))
@interface _MPCProtoDelegateInfo : PBCodable
{
    struct {
        int *list;
        unsigned long long count;
        unsigned long long size;
    } _accountCapabilities;	// 8 = 0x8
    unsigned long long _accountID;	// 32 = 0x20
    long long _delegateInfoID;	// 40 = 0x28
    NSString *_deviceGUID;	// 48 = 0x30
    NSString *_deviceName;	// 56 = 0x38
    NSString *_requestUserAgent;	// 64 = 0x40
    int _systemReleaseType;	// 72 = 0x48
    NSString *_timeZoneName;	// 80 = 0x50
    _MPCProtoDelegateInfoTokenA *_tokenA;	// 88 = 0x58
    _MPCProtoDelegateInfoTokenE *_tokenE;	// 96 = 0x60
    NSString *_uuid;	// 104 = 0x68
    _Bool _privateListeningEnabled;	// 112 = 0x70
    struct {
        unsigned int accountID:1;
        unsigned int delegateInfoID:1;
        unsigned int systemReleaseType:1;
        unsigned int privateListeningEnabled:1;
    } _has;	// 116 = 0x74
}

+ (id)currentDeviceDelegateInfo;	// IMP=0x00100000002796c0
- (void).cxx_destruct;	// IMP=0x000000000025ccf9
- (unsigned long long)hash;	// IMP=0x000000000025cb5e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000025c8e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025c6ce
- (void)writeTo:(id)arg1;	// IMP=0x000000000025c521
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000025c514
- (id)dictionaryRepresentation;	// IMP=0x000000000025c1d8
- (id)description;	// IMP=0x000000000025c129
- (void)dealloc;	// IMP=0x000000000025c0e9

@end

