//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface CKCDPInitializeContainerRequest : PBRequest
{
    NSString *_containerName;	// 8 = 0x8
    NSString *_environment;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003a9f84
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003a9e92
- (unsigned long long)hash;	// IMP=0x00000000003a9e25
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003a9d45
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003a9c81
- (void)copyTo:(id)arg1;	// IMP=0x00000000003a9bfe
- (Class)responseClass;	// IMP=0x00000000003a9bed
- (unsigned int)requestTypeCode;	// IMP=0x00000000003a9be2
- (void)writeTo:(id)arg1;	// IMP=0x00000000003a9b68
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003a99dc
- (id)dictionaryRepresentation;	// IMP=0x00000000003a9932
- (id)description;	// IMP=0x00000000003a9883
@property(readonly, nonatomic) _Bool hasEnvironment;
@property(readonly, nonatomic) _Bool hasPath;
@property(readonly, nonatomic) _Bool hasContainerName;

@end

