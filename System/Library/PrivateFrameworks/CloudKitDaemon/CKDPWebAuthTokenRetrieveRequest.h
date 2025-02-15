//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface CKDPWebAuthTokenRetrieveRequest : PBRequest
{
    NSString *_apiToken;	// 8 = 0x8
    _Bool _forceFetchToken;	// 16 = 0x10
    struct {
        unsigned int forceFetchToken:1;
    } _has;	// 20 = 0x14
}

+ (id)options;	// IMP=0x00100000001babe6
- (void).cxx_destruct;	// IMP=0x00000000001bb326
@property(nonatomic) _Bool forceFetchToken; // @synthesize forceFetchToken=_forceFetchToken;
@property(retain, nonatomic) NSString *apiToken; // @synthesize apiToken=_apiToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001bb28e
- (unsigned long long)hash;	// IMP=0x00000000001bb23b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bb171
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001bb0d9
- (void)copyTo:(id)arg1;	// IMP=0x00000000001bb076
- (Class)responseClass;	// IMP=0x00000000001bb065
- (unsigned int)requestTypeCode;	// IMP=0x00000000001bb05a
- (void)writeTo:(id)arg1;	// IMP=0x00000000001baff3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001bafe6
- (id)dictionaryRepresentation;	// IMP=0x00000000001bad3f
- (id)description;	// IMP=0x00000000001bac90
@property(nonatomic) _Bool hasForceFetchToken;
@property(readonly, nonatomic) _Bool hasApiToken;

@end

