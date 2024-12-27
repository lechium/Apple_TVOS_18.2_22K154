//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface SharedChannelPublishOffGridPayloadRequest : PBRequest
{
    unsigned long long _notificationDisplayEpochSeconds;	// 8 = 0x8
    NSData *_encryptionKey;	// 16 = 0x10
    CDStruct_5cfe0f80 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000fab3
@property(nonatomic) unsigned long long notificationDisplayEpochSeconds; // @synthesize notificationDisplayEpochSeconds=_notificationDisplayEpochSeconds;
@property(retain, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000fa19
- (unsigned long long)hash;	// IMP=0x000000000000f9c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000f90e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f875
- (void)copyTo:(id)arg1;	// IMP=0x000000000000f811
- (void)writeTo:(id)arg1;	// IMP=0x000000000000f7ab
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000f79e
- (id)dictionaryRepresentation;	// IMP=0x000000000000f4fb
- (id)description;	// IMP=0x000000000000f44c
@property(nonatomic) _Bool hasNotificationDisplayEpochSeconds;
@property(readonly, nonatomic) _Bool hasEncryptionKey;

@end

