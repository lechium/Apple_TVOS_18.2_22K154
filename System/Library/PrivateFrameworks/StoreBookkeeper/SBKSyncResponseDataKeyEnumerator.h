//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSEnumerator, SBKSyncResponseData, SBKSyncTransaction;

__attribute__((visibility("hidden")))
@interface SBKSyncResponseDataKeyEnumerator : NSObject
{
    _Bool _resolvedConflictsNeedSyncToServer;	// 8 = 0x8
    SBKSyncResponseData *_responseData;	// 16 = 0x10
    SBKSyncTransaction *_transaction;	// 24 = 0x18
    CDUnknownBlockType _completionBlock;	// 32 = 0x20
    NSEnumerator *_updatedKeysEnumerator;	// 40 = 0x28
    NSEnumerator *_conflictedKeysEnumerator;	// 48 = 0x30
    NSEnumerator *_deletedKeysEnumerator;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001d2b3
@property(retain, nonatomic) NSEnumerator *deletedKeysEnumerator; // @synthesize deletedKeysEnumerator=_deletedKeysEnumerator;
@property(retain, nonatomic) NSEnumerator *conflictedKeysEnumerator; // @synthesize conflictedKeysEnumerator=_conflictedKeysEnumerator;
@property(retain, nonatomic) NSEnumerator *updatedKeysEnumerator; // @synthesize updatedKeysEnumerator=_updatedKeysEnumerator;
@property(nonatomic) _Bool resolvedConflictsNeedSyncToServer; // @synthesize resolvedConflictsNeedSyncToServer=_resolvedConflictsNeedSyncToServer;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) SBKSyncTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) SBKSyncResponseData *responseData; // @synthesize responseData=_responseData;
- (void)_processNextKey;	// IMP=0x000000000001d0f7
- (void)_processDeletedKey:(id)arg1 isDirty:(_Bool *)arg2;	// IMP=0x000000000001d07b
- (void)_processUpdatedKey:(id)arg1 isConflict:(_Bool)arg2 isDirty:(_Bool *)arg3;	// IMP=0x000000000001cfc2
- (void)enumerateKeysInResponseForTransaction:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ce7b
- (id)initWithResponseData:(id)arg1;	// IMP=0x000000000001ce10

@end

