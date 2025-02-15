//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperation, NSUUID, OTCustodianRecoveryKey, OTOperationDependencies;

@interface OTCreateCustodianRecoveryKeyOperation
{
    OTCustodianRecoveryKey *_crk;	// 16 = 0x10
    OTOperationDependencies *_deps;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    NSOperation *_finishOp;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000b50cd
@property(retain) NSOperation *finishOp; // @synthesize finishOp=_finishOp;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) OTCustodianRecoveryKey *crk; // @synthesize crk=_crk;
- (void)proceedWithKeys:(id)arg1 salt:(id)arg2;	// IMP=0x00100000000b4d36
- (void)groupStart;	// IMP=0x00100000000b4940
- (id)initWithUUID:(id)arg1 dependencies:(id)arg2;	// IMP=0x00100000000b487c

@end

