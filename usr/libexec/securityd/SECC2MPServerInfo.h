//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SECC2MPServerInfo : PBCodable
{
    NSString *_partition;	// 8 = 0x8
    NSString *_serviceBuild;	// 16 = 0x10
    NSString *_serviceInstance;	// 24 = 0x18
    NSString *_serviceName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001e3a31
@property(retain, nonatomic) NSString *serviceInstance; // @synthesize serviceInstance=_serviceInstance;
@property(retain, nonatomic) NSString *serviceBuild; // @synthesize serviceBuild=_serviceBuild;
@property(retain, nonatomic) NSString *partition; // @synthesize partition=_partition;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001e38fa
- (unsigned long long)hash;	// IMP=0x00100000001e3876
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001e376a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001e3680
- (void)copyTo:(id)arg1;	// IMP=0x00100000001e35dd
- (void)writeTo:(id)arg1;	// IMP=0x00100000001e3546
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001e3539
- (id)dictionaryRepresentation;	// IMP=0x00100000001e3468
- (id)description;	// IMP=0x00100000001e33b9
@property(readonly, nonatomic) _Bool hasServiceInstance;
@property(readonly, nonatomic) _Bool hasServiceBuild;
@property(readonly, nonatomic) _Bool hasPartition;
@property(readonly, nonatomic) _Bool hasServiceName;

@end

