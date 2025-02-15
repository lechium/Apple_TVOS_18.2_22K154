//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSData, NSMutableArray, NSString;

@interface OTAccountMetadataClassC : PBCodable
{
    long long _epoch;	// 8 = 0x8
    unsigned long long _lastHealthCheckup;	// 16 = 0x10
    NSString *_altDSID;	// 24 = 0x18
    int _attemptedJoin;	// 32 = 0x20
    int _cdpState;	// 36 = 0x24
    int _icloudAccountState;	// 40 = 0x28
    NSString *_oldPeerID;	// 48 = 0x30
    NSString *_peerID;	// 56 = 0x38
    NSData *_secureElementIdentity;	// 64 = 0x40
    int _sendingMetricsPermitted;	// 72 = 0x48
    NSData *_syncingPolicy;	// 80 = 0x50
    NSMutableArray *_tlkSharesForVouchedIdentitys;	// 88 = 0x58
    int _trustState;	// 96 = 0x60
    NSData *_voucher;	// 104 = 0x68
    NSData *_voucherSignature;	// 112 = 0x70
    _Bool _isInheritedAccount;	// 120 = 0x78
    _Bool _warmedEscrowCache;	// 121 = 0x79
    _Bool _warnedTooManyPeers;	// 122 = 0x7a
    struct {
        unsigned int epoch:1;
        unsigned int lastHealthCheckup:1;
        unsigned int attemptedJoin:1;
        unsigned int cdpState:1;
        unsigned int icloudAccountState:1;
        unsigned int sendingMetricsPermitted:1;
        unsigned int trustState:1;
        unsigned int isInheritedAccount:1;
        unsigned int warmedEscrowCache:1;
        unsigned int warnedTooManyPeers:1;
    } _has;	// 124 = 0x7c
}

+ (Class)tlkSharesForVouchedIdentityType;	// IMP=0x002000000002cc3e
+ (id)loadFromKeychainForContainer:(id)arg1 contextID:(id)arg2 personaAdapter:(id)arg3 personaUniqueString:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000a81f5
+ (_Bool)deleteFromKeychainForContainer:(id)arg1 contextID:(id)arg2 personaAdapter:(id)arg3 personaUniqueString:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000a7f95
- (void).cxx_destruct;	// IMP=0x002000000002cba7
@property(retain, nonatomic) NSString *oldPeerID; // @synthesize oldPeerID=_oldPeerID;
@property(nonatomic) _Bool warnedTooManyPeers; // @synthesize warnedTooManyPeers=_warnedTooManyPeers;
@property(nonatomic) _Bool warmedEscrowCache; // @synthesize warmedEscrowCache=_warmedEscrowCache;
@property(nonatomic) _Bool isInheritedAccount; // @synthesize isInheritedAccount=_isInheritedAccount;
@property(retain, nonatomic) NSData *secureElementIdentity; // @synthesize secureElementIdentity=_secureElementIdentity;
@property(retain, nonatomic) NSMutableArray *tlkSharesForVouchedIdentitys; // @synthesize tlkSharesForVouchedIdentitys=_tlkSharesForVouchedIdentitys;
@property(retain, nonatomic) NSData *voucherSignature; // @synthesize voucherSignature=_voucherSignature;
@property(retain, nonatomic) NSData *voucher; // @synthesize voucher=_voucher;
@property(retain, nonatomic) NSData *syncingPolicy; // @synthesize syncingPolicy=_syncingPolicy;
@property(nonatomic) unsigned long long lastHealthCheckup; // @synthesize lastHealthCheckup=_lastHealthCheckup;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(nonatomic) long long epoch; // @synthesize epoch=_epoch;
@property(retain, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002c6c8
- (unsigned long long)hash;	// IMP=0x001000000002c475
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002c0cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002bca0
- (void)copyTo:(id)arg1;	// IMP=0x001000000002b9cc
- (void)writeTo:(id)arg1;	// IMP=0x001000000002b660
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000002ae30
- (id)dictionaryRepresentation;	// IMP=0x001000000002a8b7
- (id)description;	// IMP=0x001000000002a808
@property(readonly, nonatomic) _Bool hasOldPeerID;
- (int)StringAsSendingMetricsPermitted:(id)arg1;	// IMP=0x001000000002a75c
- (id)sendingMetricsPermittedAsString:(int)arg1;	// IMP=0x001000000002a714
@property(nonatomic) _Bool hasSendingMetricsPermitted;
@property(nonatomic) int sendingMetricsPermitted; // @synthesize sendingMetricsPermitted=_sendingMetricsPermitted;
@property(nonatomic) _Bool hasWarnedTooManyPeers;
@property(nonatomic) _Bool hasWarmedEscrowCache;
@property(nonatomic) _Bool hasIsInheritedAccount;
@property(readonly, nonatomic) _Bool hasSecureElementIdentity;
- (id)tlkSharesForVouchedIdentityAtIndex:(unsigned long long)arg1;	// IMP=0x001000000002a58f
- (unsigned long long)tlkSharesForVouchedIdentitysCount;	// IMP=0x001000000002a572
- (void)addTlkSharesForVouchedIdentity:(id)arg1;	// IMP=0x001000000002a508
- (void)clearTlkSharesForVouchedIdentitys;	// IMP=0x001000000002a4eb
@property(readonly, nonatomic) _Bool hasVoucherSignature;
@property(readonly, nonatomic) _Bool hasVoucher;
@property(readonly, nonatomic) _Bool hasSyncingPolicy;
- (int)StringAsCdpState:(id)arg1;	// IMP=0x001000000002a415
- (id)cdpStateAsString:(int)arg1;	// IMP=0x001000000002a3cd
@property(nonatomic) _Bool hasCdpState;
@property(nonatomic) int cdpState; // @synthesize cdpState=_cdpState;
- (int)StringAsAttemptedJoin:(id)arg1;	// IMP=0x001000000002a2cd
- (id)attemptedJoinAsString:(int)arg1;	// IMP=0x001000000002a285
@property(nonatomic) _Bool hasAttemptedJoin;
@property(nonatomic) int attemptedJoin; // @synthesize attemptedJoin=_attemptedJoin;
@property(nonatomic) _Bool hasLastHealthCheckup;
- (int)StringAsTrustState:(id)arg1;	// IMP=0x001000000002a13b
- (id)trustStateAsString:(int)arg1;	// IMP=0x001000000002a0f3
@property(nonatomic) _Bool hasTrustState;
@property(nonatomic) int trustState; // @synthesize trustState=_trustState;
@property(readonly, nonatomic) _Bool hasAltDSID;
@property(nonatomic) _Bool hasEpoch;
- (int)StringAsIcloudAccountState:(id)arg1;	// IMP=0x0010000000029f78
- (id)icloudAccountStateAsString:(int)arg1;	// IMP=0x0010000000029f30
@property(nonatomic) _Bool hasIcloudAccountState;
@property(nonatomic) int icloudAccountState; // @synthesize icloudAccountState=_icloudAccountState;
@property(readonly, nonatomic) _Bool hasPeerID;
- (id)parsedSecureElementIdentity;	// IMP=0x00100000000a7853
- (void)setOctagonSecureElementIdentity:(id)arg1;	// IMP=0x00100000000a7772
- (id)getTLKSharesPairedWithVoucher;	// IMP=0x00100000000a7559
- (MISSING_TYPE *)setTLKSharesPairedWithVoucher: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000a731e
- (id)getTPSyncingPolicy;	// IMP=0x00100000000a727e
- (void)setTPSyncingPolicy:(id)arg1;	// IMP=0x00100000000a71be
- (_Bool)saveToKeychainForContainer:(id)arg1 contextID:(id)arg2 personaAdapter:(id)arg3 personaUniqueString:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000a7022

@end

