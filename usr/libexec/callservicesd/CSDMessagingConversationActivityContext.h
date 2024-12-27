//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, TUConversationActivityContext;

@interface CSDMessagingConversationActivityContext : PBCodable
{
    NSString *_actionDescription;	// 8 = 0x8
    NSString *_completedDescription;	// 16 = 0x10
    NSString *_contextIdentifier;	// 24 = 0x18
    NSString *_ongoingDescription;	// 32 = 0x20
}

+ (id)activityContextWithTUActivityContext:(id)arg1;	// IMP=0x0020000000058b35
- (void).cxx_destruct;	// IMP=0x0020000000081778
@property(retain, nonatomic) NSString *completedDescription; // @synthesize completedDescription=_completedDescription;
@property(retain, nonatomic) NSString *ongoingDescription; // @synthesize ongoingDescription=_ongoingDescription;
@property(retain, nonatomic) NSString *actionDescription; // @synthesize actionDescription=_actionDescription;
@property(retain, nonatomic) NSString *contextIdentifier; // @synthesize contextIdentifier=_contextIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000081641
- (unsigned long long)hash;	// IMP=0x00100000000815bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000814b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000813c7
- (void)copyTo:(id)arg1;	// IMP=0x0010000000081324
- (void)writeTo:(id)arg1;	// IMP=0x001000000008128d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000081280
- (id)dictionaryRepresentation;	// IMP=0x0010000000080feb
- (id)description;	// IMP=0x0010000000080f3c
@property(readonly, nonatomic) _Bool hasCompletedDescription;
@property(readonly, nonatomic) _Bool hasOngoingDescription;
@property(readonly, nonatomic) _Bool hasActionDescription;
@property(readonly, nonatomic) _Bool hasContextIdentifier;
@property(readonly, nonatomic) TUConversationActivityContext *tuConversationActivityContext;

@end

