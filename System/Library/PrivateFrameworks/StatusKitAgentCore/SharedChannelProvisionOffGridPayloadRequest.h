//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class AuthCredential, ChannelDeferredPublishInfo;

__attribute__((visibility("hidden")))
@interface SharedChannelProvisionOffGridPayloadRequest : PBRequest
{
    AuthCredential *_authCredential;	// 8 = 0x8
    ChannelDeferredPublishInfo *_channelDeferredPublishInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000416aa
@property(retain, nonatomic) ChannelDeferredPublishInfo *channelDeferredPublishInfo; // @synthesize channelDeferredPublishInfo=_channelDeferredPublishInfo;
@property(retain, nonatomic) AuthCredential *authCredential; // @synthesize authCredential=_authCredential;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000415d1
- (unsigned long long)hash;	// IMP=0x0000000000041584
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000414cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004142e
- (void)copyTo:(id)arg1;	// IMP=0x00000000000413cb
- (void)writeTo:(id)arg1;	// IMP=0x000000000004136e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000041361
- (id)dictionaryRepresentation;	// IMP=0x00000000000410af
- (id)description;	// IMP=0x0000000000041000
@property(readonly, nonatomic) _Bool hasChannelDeferredPublishInfo;
@property(readonly, nonatomic) _Bool hasAuthCredential;

@end

