//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface ICAppleMusicAPITokenRequest : PBRequest
{
    NSString *_bagProfile;	// 8 = 0x8
    NSString *_bagProfileVersion;	// 16 = 0x10
    NSString *_clientIdentifier;	// 24 = 0x18
    NSString *_clientVersion;	// 32 = 0x20
    _Bool _shouldIgnoreDeveloperTokenCache;	// 40 = 0x28
    _Bool _shouldIgnoreUserTokenCache;	// 41 = 0x29
    struct {
        unsigned int shouldIgnoreDeveloperTokenCache:1;
        unsigned int shouldIgnoreUserTokenCache:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00200000000a58be
@property(nonatomic) _Bool shouldIgnoreDeveloperTokenCache; // @synthesize shouldIgnoreDeveloperTokenCache=_shouldIgnoreDeveloperTokenCache;
@property(nonatomic) _Bool shouldIgnoreUserTokenCache; // @synthesize shouldIgnoreUserTokenCache=_shouldIgnoreUserTokenCache;
@property(retain, nonatomic) NSString *bagProfileVersion; // @synthesize bagProfileVersion=_bagProfileVersion;
@property(retain, nonatomic) NSString *bagProfile; // @synthesize bagProfile=_bagProfile;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000a572a
- (unsigned long long)hash;	// IMP=0x00100000000a5658
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a54de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a53b1
- (void)writeTo:(id)arg1;	// IMP=0x00100000000a52c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000a4fe9
- (id)dictionaryRepresentation;	// IMP=0x00100000000a4e52
- (id)description;	// IMP=0x00100000000a4da3
@property(nonatomic) _Bool hasShouldIgnoreDeveloperTokenCache;
@property(nonatomic) _Bool hasShouldIgnoreUserTokenCache;
@property(readonly, nonatomic) _Bool hasBagProfileVersion;
@property(readonly, nonatomic) _Bool hasBagProfile;
@property(readonly, nonatomic) _Bool hasClientVersion;
@property(readonly, nonatomic) _Bool hasClientIdentifier;

@end

