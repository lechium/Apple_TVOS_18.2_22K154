//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSOperation, NSString, OTOperationDependencies;

@interface OTSetRecoveryKeyOperation
{
    NSString *;	// 16 = 0x10
    NSString *_recoveryKey;	// 24 = 0x18
    NSData *_voucher;	// 32 = 0x20
    NSData *_voucherSig;	// 40 = 0x28
    OTOperationDependencies *_deps;	// 48 = 0x30
    NSOperation *_finishOp;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000b448f
@property(retain) NSOperation *finishOp; // @synthesize finishOp=_finishOp;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain, nonatomic) NSData *voucherSig; // @synthesize voucherSig=_voucherSig;
@property(retain, nonatomic) NSData *voucher; // @synthesize voucher=_voucher;
@property(retain, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(retain, nonatomic) NSString *salt; // @synthesize salt=_salt;
- (void)proceedWithKeys:(id)arg1 salt:(id)arg2;	// IMP=0x00100000000b41f7
- (void)groupStart;	// IMP=0x00100000000b3e01
- (id)initWithDependencies:(id)arg1 recoveryKey:(id)arg2;	// IMP=0x00100000000b3d5f

@end

