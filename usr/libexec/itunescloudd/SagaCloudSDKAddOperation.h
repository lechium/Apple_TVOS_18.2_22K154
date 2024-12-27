//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SagaCloudSDKAddOperation
{
    NSString *_opaqueID;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    CDUnknownBlockType _updateCompletionBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000ec69e
@property(copy, nonatomic) CDUnknownBlockType updateCompletionBlock; // @synthesize updateCompletionBlock=_updateCompletionBlock;
@property(copy, nonatomic) NSString *opaqueID; // @synthesize opaqueID=_opaqueID;
- (void)main;	// IMP=0x00100000000eb829
- (id)requestWithDatabaseID:(int)arg1 databaseRevision:(int)arg2 opaqueID:(id)arg3 bundleID:(id)arg4;	// IMP=0x00100000000eb810
- (unsigned int)currentDatabaseRevision;	// IMP=0x00100000000eb7c2
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 opaqueID:(id)arg3 bundleID:(id)arg4;	// IMP=0x00100000000eb6f3
- (id)initWithClientIdentity:(id)arg1 opaqueID:(id)arg2 bundleID:(id)arg3;	// IMP=0x00100000000eb654

@end

