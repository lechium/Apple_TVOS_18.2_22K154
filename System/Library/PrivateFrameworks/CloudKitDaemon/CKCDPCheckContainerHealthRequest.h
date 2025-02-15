//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface CKCDPCheckContainerHealthRequest : PBRequest
{
    NSString *_containerName;	// 8 = 0x8
    NSString *_environment;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a7f68
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a7ebb
- (unsigned long long)hash;	// IMP=0x00000000000a7e6e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a7db6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a7d18
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a7cb5
- (Class)responseClass;	// IMP=0x00000000000a7ca4
- (unsigned int)requestTypeCode;	// IMP=0x00000000000a7c99
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a7c3c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a7ad2
- (id)dictionaryRepresentation;	// IMP=0x00000000000a7a4f
- (id)description;	// IMP=0x00000000000a79a0
@property(readonly, nonatomic) _Bool hasEnvironment;
@property(readonly, nonatomic) _Bool hasContainerName;

@end

