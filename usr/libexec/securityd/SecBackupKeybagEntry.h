//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSData;

@interface SecBackupKeybagEntry
{
    NSData *_publickeyHash;	// 8 = 0x8
    NSData *_publickey;	// 16 = 0x10
    NSData *_musr;	// 24 = 0x18
}

+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x00400000001bd1c5
+ (id)sqlColumns;	// IMP=0x00100000001bd1b8
+ (id)sqlTable;	// IMP=0x00100000001bd1ab
+ (id)tryFromDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bd0d5
+ (id)fromDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bcfff
+ (id)state:(id)arg1;	// IMP=0x00100000001bcec6
- (void).cxx_destruct;	// IMP=0x00200000001bce84
@property(retain) NSData *musr; // @synthesize musr=_musr;
@property(retain) NSData *publickey; // @synthesize publickey=_publickey;
@property(retain) NSData *publickeyHash; // @synthesize publickeyHash=_publickeyHash;
- (id)sqlValues;	// IMP=0x00100000001bcc94
- (id)whereClauseToFindSelf;	// IMP=0x00100000001bcbf3
- (MISSING_TYPE *)isEqual: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001bcb25
- (id)initWithPublicKey:(id)arg1 publickeyHash:(id)arg2 user:(id)arg3;	// IMP=0x00100000001bca5b

@end

