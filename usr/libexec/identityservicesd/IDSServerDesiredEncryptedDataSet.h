//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface IDSServerDesiredEncryptedDataSet : NSObject
{
    _Bool _requireSignature;	// 8 = 0x8
    int _type;	// 12 = 0xc
    NSData *_encryptedData;	// 16 = 0x10
    struct __SecKey *_forPublicIdentity;	// 24 = 0x18
    unsigned long long _forParticipantID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000de2ca
@property(readonly) unsigned long long forParticipantID; // @synthesize forParticipantID=_forParticipantID;
@property(readonly) struct __SecKey *forPublicIdentity; // @synthesize forPublicIdentity=_forPublicIdentity;
@property(readonly) _Bool requireSignature; // @synthesize requireSignature=_requireSignature;
@property(readonly) int type; // @synthesize type=_type;
@property(readonly, copy) NSData *encryptedData; // @synthesize encryptedData=_encryptedData;
- (id)materialDataByID;	// IMP=0x00100000000ddecd
- (id)_wrapData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000dde60
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ddd90
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00100000000ddce2
- (id)initWithEncryptedData:(id)arg1 type:(int)arg2 forPublicIdentity:(struct __SecKey *)arg3 forParticipantID:(unsigned long long)arg4;	// IMP=0x00100000000ddc49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

