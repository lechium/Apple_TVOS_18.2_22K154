//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSTLKShare, NSData, NSString;

@interface CKKSTLKShareRecord
{
    CKKSTLKShare *_share;	// 8 = 0x8
}

+ (id)countsWithContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00400000001b12f6
+ (_Bool)intransactionRecordDeleted:(id)arg1 contextID:(id)arg2 resync:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000001b1057
+ (_Bool)intransactionRecordChanged:(id)arg1 contextID:(id)arg2 resync:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000001b0e6f
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x00100000001b0a3f
+ (id)sqlColumns;	// IMP=0x00100000001b0a32
+ (id)sqlTable;	// IMP=0x00100000001b0a25
+ (id)ckrecordPrefix;	// IMP=0x00100000001b0a18
+ (id)tryFromDatabaseFromCKRecordID:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001b03c9
+ (id)allInZone:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001b0232
+ (id)allForUUID:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000001b0014
+ (id)allFor:(id)arg1 contextID:(id)arg2 keyUUID:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x00100000001afdbf
+ (id)tryFromDatabase:(id)arg1 contextID:(id)arg2 receiverPeerID:(id)arg3 senderPeerID:(id)arg4 zoneID:(id)arg5 error:(id *)arg6;	// IMP=0x00100000001afa77
+ (id)fromDatabase:(id)arg1 contextID:(id)arg2 receiverPeerID:(id)arg3 senderPeerID:(id)arg4 zoneID:(id)arg5 error:(id *)arg6;	// IMP=0x00100000001af72f
+ (id)share:(id)arg1 contextID:(id)arg2 as:(id)arg3 to:(id)arg4 epoch:(long long)arg5 poisoned:(long long)arg6 error:(id *)arg7;	// IMP=0x00100000001af383
- (void).cxx_destruct;	// IMP=0x00200000001af370
@property(retain) CKKSTLKShare *share; // @synthesize share=_share;
- (id)sqlValues;	// IMP=0x00100000001aec52
- (id)whereClauseToFindSelf;	// IMP=0x00100000001aea47
- (void)setFromCKRecord:(id)arg1;	// IMP=0x00100000001ae575
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x00100000001ae3f7
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000001adcd8
- (id)CKRecordName;	// IMP=0x00100000001adbb8
- (id)recoverTLK:(id)arg1 trustedPeers:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001adafb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001ada2d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001ad92f
- (_Bool)signatureVerifiesWithPeerSet:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001ad893
- (_Bool)verifySignature:(id)arg1 verifyingPeer:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001ad7e4
- (id)signRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001ad73a
- (id)dataForSigning;	// IMP=0x00100000001ad6ba
@property(readonly) NSData *signature;
@property(readonly) NSData *wrappedTLK;
@property(readonly) long long poisoned;
@property(readonly) long long epoch;
@property(readonly) NSString *senderPeerID;
@property(readonly) NSString *tlkUUID;
- (id)description;	// IMP=0x00100000001ad369
- (id)initForKey:(id)arg1 contextID:(id)arg2 senderPeerID:(id)arg3 recieverPeerID:(id)arg4 receiverEncPublicKeySPKI:(id)arg5 curve:(long long)arg6 version:(unsigned long long)arg7 epoch:(long long)arg8 poisoned:(long long)arg9 wrappedKey:(id)arg10 signature:(id)arg11 zoneID:(id)arg12 encodedCKRecord:(id)arg13;	// IMP=0x00100000001ad221
- (id)init:(id)arg1 contextID:(id)arg2 sender:(id)arg3 receiver:(id)arg4 curve:(long long)arg5 version:(unsigned long long)arg6 epoch:(long long)arg7 poisoned:(long long)arg8 zoneID:(id)arg9 encodedCKRecord:(id)arg10;	// IMP=0x00100000001ad11f
- (id)initWithShare:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 encodedCKRecord:(id)arg4;	// IMP=0x00100000001ad08e

@end

