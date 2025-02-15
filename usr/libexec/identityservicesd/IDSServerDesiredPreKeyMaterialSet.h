//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, NSUUID;

@interface IDSServerDesiredPreKeyMaterialSet : NSObject
{
    _Bool _requireSignature;	// 8 = 0x8
    int _type;	// 12 = 0xc
    NSData *_publicPreKeyData;	// 16 = 0x10
    NSDate *_creationDate;	// 24 = 0x18
    long long _wrapMode;	// 32 = 0x20
    NSUUID *_uuid;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000049c16f
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) _Bool requireSignature; // @synthesize requireSignature=_requireSignature;
@property(readonly) int type; // @synthesize type=_type;
@property(readonly) long long wrapMode; // @synthesize wrapMode=_wrapMode;
- (id)creationDate;	// IMP=0x001000000049c129
@property(readonly) NSData *publicPreKeyData; // @synthesize publicPreKeyData=_publicPreKeyData;
- (id)materialDataByID;	// IMP=0x001000000049bf11
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000049bead
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long forParticipantID;
- (id)initWithUUID:(id)arg1 publicPreKeyData:(id)arg2 wrapMode:(long long)arg3 creationDate:(id)arg4;	// IMP=0x001000000049bd6f
- (id)initWithPublicPreKeyData:(id)arg1 wrapMode:(long long)arg2 creationDate:(id)arg3;	// IMP=0x001000000049bcd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

