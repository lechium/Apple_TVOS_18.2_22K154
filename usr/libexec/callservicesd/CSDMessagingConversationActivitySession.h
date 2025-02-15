//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingConversationActivity, CSDMessagingConversationActivitySessionLocallyPersistedMetadata, NSString, TUConversationActivitySession;

@interface CSDMessagingConversationActivitySession : PBCodable
{
    double _creationDateEpochTime;	// 8 = 0x8
    CSDMessagingConversationActivity *_activity;	// 16 = 0x10
    NSString *_identifierUUIDString;	// 24 = 0x18
    CSDMessagingConversationActivitySessionLocallyPersistedMetadata *_locallyPersistedMetadata;	// 32 = 0x20
    struct {
        unsigned int creationDateEpochTime:1;
    } _has;	// 40 = 0x28
}

+ (id)activitySessionWithTUConversationActivitySession:(id)arg1 fromConversation:(id)arg2;	// IMP=0x00200000001cecb9
+ (id)activitySessionWithTUConversationActivitySession:(id)arg1 fromConversation:(id)arg2 forStorage:(_Bool)arg3;	// IMP=0x00100000001cec00
- (void).cxx_destruct;	// IMP=0x00200000000d9309
@property(retain, nonatomic) CSDMessagingConversationActivitySessionLocallyPersistedMetadata *locallyPersistedMetadata; // @synthesize locallyPersistedMetadata=_locallyPersistedMetadata;
@property(nonatomic) double creationDateEpochTime; // @synthesize creationDateEpochTime=_creationDateEpochTime;
@property(retain, nonatomic) CSDMessagingConversationActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSString *identifierUUIDString; // @synthesize identifierUUIDString=_identifierUUIDString;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000d91b5
- (unsigned long long)hash;	// IMP=0x00100000000d9051
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000d8f38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d8e46
- (void)copyTo:(id)arg1;	// IMP=0x00100000000d8d9f
- (void)writeTo:(id)arg1;	// IMP=0x00100000000d8cfd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000d8cf0
- (id)dictionaryRepresentation;	// IMP=0x00100000000d890d
- (id)description;	// IMP=0x00100000000d885e
@property(readonly, nonatomic) _Bool hasLocallyPersistedMetadata;
@property(nonatomic) _Bool hasCreationDateEpochTime;
@property(readonly, nonatomic) _Bool hasActivity;
@property(readonly, nonatomic) _Bool hasIdentifierUUIDString;
@property(readonly, nonatomic) TUConversationActivitySession *tuConversationActivitySession;

@end

