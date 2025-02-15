//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSData;

@interface SDAutoUnlockDeviceRegistrationStep : PBCodable
{
    unsigned int _errorCode;	// 8 = 0x8
    NSData *_stepData;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    CDStruct_8b9b3261 _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x002000000009199e
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSData *stepData; // @synthesize stepData=_stepData;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000918d2
- (unsigned long long)hash;	// IMP=0x001000000009185c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000091772
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000916bc
- (void)copyTo:(id)arg1;	// IMP=0x0010000000091635
- (void)writeTo:(id)arg1;	// IMP=0x00100000000915a7
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000009159a
- (id)dictionaryRepresentation;	// IMP=0x0010000000091207
- (MISSING_TYPE *)description;	// IMP=0x0010000000091158
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasStepData;
@property(nonatomic) _Bool hasVersion;

@end

