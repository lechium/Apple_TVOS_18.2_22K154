//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SECSFAActionAutomaticBugCapture, SECSFAActionDropEvent, SECSFAActionTapToRadar;

__attribute__((visibility("hidden")))
@interface SECSFAAction : PBCodable
{
    SECSFAActionAutomaticBugCapture *_abc;	// 8 = 0x8
    int _action;	// 16 = 0x10
    SECSFAActionDropEvent *_drop;	// 24 = 0x18
    NSString *_radarnumber;	// 32 = 0x20
    SECSFAActionTapToRadar *_ttr;	// 40 = 0x28
    struct {
        unsigned int action:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002a4b2
@property(retain, nonatomic) SECSFAActionDropEvent *drop; // @synthesize drop=_drop;
@property(retain, nonatomic) SECSFAActionAutomaticBugCapture *abc; // @synthesize abc=_abc;
@property(retain, nonatomic) SECSFAActionTapToRadar *ttr; // @synthesize ttr=_ttr;
@property(retain, nonatomic) NSString *radarnumber; // @synthesize radarnumber=_radarnumber;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002a355
- (unsigned long long)hash;	// IMP=0x000000000002a2a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a161
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a052
- (void)copyTo:(id)arg1;	// IMP=0x0000000000029f8f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000029ef8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000029eeb
- (id)dictionaryRepresentation;	// IMP=0x0000000000029d2c
- (id)description;	// IMP=0x0000000000029c7d
- (void)clearOneofValuesForAction;	// IMP=0x0000000000029c0b
- (int)StringAsAction:(id)arg1;	// IMP=0x0000000000029b57
- (id)actionAsString:(int)arg1;	// IMP=0x0000000000029b0f
@property(nonatomic) _Bool hasAction;
@property(nonatomic) int action; // @synthesize action=_action;
@property(readonly, nonatomic) _Bool hasDrop;
@property(readonly, nonatomic) _Bool hasAbc;
@property(readonly, nonatomic) _Bool hasTtr;
@property(readonly, nonatomic) _Bool hasRadarnumber;

@end

