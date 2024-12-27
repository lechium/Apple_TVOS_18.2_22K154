//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface CLCompanionSyncAuthObject : PBCodable
{
    unsigned int _authMask;	// 8 = 0x8
    NSMutableArray *_interestZones;	// 16 = 0x10
    NSString *_clientKey;	// 24 = 0x18
    unsigned int _correctiveCompensationMask;	// 32 = 0x20
    int _notification;	// 36 = 0x24
    int _operationType;	// 40 = 0x28
    NSMutableArray *_vectorClocks;	// 48 = 0x30
    _Bool _clearClient;	// 56 = 0x38
    _Bool _suppressShowingInSettings;	// 57 = 0x39
    struct {
        unsigned int authMask:1;
        unsigned int correctiveCompensationMask:1;
        unsigned int notification:1;
        unsigned int clearClient:1;
        unsigned int suppressShowingInSettings:1;
    } _has;	// 60 = 0x3c
}

+ (Class)interestZonesType;	// IMP=0x00200000008e5324
+ (Class)vectorClocksType;	// IMP=0x00100000008e526f
@property(retain, nonatomic) NSMutableArray *interestZones; // @synthesize interestZones=_interestZones;
@property(retain, nonatomic) NSMutableArray *vectorClocks; // @synthesize vectorClocks=_vectorClocks;
@property(nonatomic) int operationType; // @synthesize operationType=_operationType;
@property(nonatomic) unsigned int correctiveCompensationMask; // @synthesize correctiveCompensationMask=_correctiveCompensationMask;
@property(retain, nonatomic) NSString *clientKey; // @synthesize clientKey=_clientKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000008e6a85
- (unsigned long long)hash;	// IMP=0x00100000008e693f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000008e677d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000008e63da
- (void)copyTo:(id)arg1;	// IMP=0x00100000008e6215
- (void)writeTo:(id)arg1;	// IMP=0x00100000008e5f4d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000008e5f40
- (id)dictionaryRepresentation;	// IMP=0x00100000008e541c
- (id)description;	// IMP=0x00100000008e53a5
@property(nonatomic) _Bool hasSuppressShowingInSettings;
@property(nonatomic) _Bool suppressShowingInSettings; // @synthesize suppressShowingInSettings=_suppressShowingInSettings;
- (id)interestZonesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000008e5307
- (unsigned long long)interestZonesCount;	// IMP=0x00100000008e52ea
- (void)addInterestZones:(id)arg1;	// IMP=0x00100000008e529d
- (void)clearInterestZones;	// IMP=0x00100000008e5280
- (id)vectorClocksAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008e5252
- (unsigned long long)vectorClocksCount;	// IMP=0x00100000008e5235
- (void)addVectorClocks:(id)arg1;	// IMP=0x00100000008e51e8
- (void)clearVectorClocks;	// IMP=0x00100000008e51cb
- (int)StringAsOperationType:(id)arg1;	// IMP=0x00100000008e515c
- (id)operationTypeAsString:(int)arg1;	// IMP=0x00100000008e5121
- (int)StringAsNotification:(id)arg1;	// IMP=0x00100000008e50ba
- (id)notificationAsString:(int)arg1;	// IMP=0x00100000008e5081
@property(nonatomic) _Bool hasNotification;
@property(nonatomic) int notification; // @synthesize notification=_notification;
@property(nonatomic) _Bool hasClearClient;
@property(nonatomic) _Bool clearClient; // @synthesize clearClient=_clearClient;
@property(nonatomic) _Bool hasCorrectiveCompensationMask;
@property(nonatomic) _Bool hasAuthMask;
@property(nonatomic) unsigned int authMask; // @synthesize authMask=_authMask;
- (void)dealloc;	// IMP=0x00100000008e4e94

@end

