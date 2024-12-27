//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface _ADPBProxyWakeUpRequest : PBRequest
{
    NSString *_streamId;	// 8 = 0x8
}

+ (unsigned short)_ADPBProxyRequestType;	// IMP=0x0020000000192770
- (void).cxx_destruct;	// IMP=0x00200000000f2f59
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000f2f10
- (unsigned long long)hash;	// IMP=0x00100000000f2ef3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000f2e63
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000f2deb
- (void)copyTo:(id)arg1;	// IMP=0x00100000000f2dc1
- (void)writeTo:(id)arg1;	// IMP=0x00100000000f2d9d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000f2c54
- (id)dictionaryRepresentation;	// IMP=0x00100000000f2bf8
- (id)description;	// IMP=0x00100000000f2b49
@property(readonly, nonatomic) _Bool hasStreamId;
- (void)_ad_performWithPeerStreamConnection:(id)arg1 context:(id)arg2;	// IMP=0x00100000000dc00d

@end

