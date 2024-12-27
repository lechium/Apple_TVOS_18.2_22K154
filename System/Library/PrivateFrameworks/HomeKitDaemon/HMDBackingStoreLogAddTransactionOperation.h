//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDBackingStoreTransactionBlock;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreLogAddTransactionOperation
{
    _Bool _isAtomicSaveEnabled;	// 40 = 0x28
    HMDBackingStoreTransactionBlock *_transaction;	// 48 = 0x30
    long long _pushFlags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000abac97
@property(readonly, nonatomic) _Bool isAtomicSaveEnabled; // @synthesize isAtomicSaveEnabled=_isAtomicSaveEnabled;
@property(nonatomic) long long pushFlags; // @synthesize pushFlags=_pushFlags;
@property(retain, nonatomic) HMDBackingStoreTransactionBlock *transaction; // @synthesize transaction=_transaction;
- (id)mainReturningError;	// IMP=0x0000000000aba72e
- (id)initWithAtomicSaveEnabled:(_Bool)arg1 transaction:(id)arg2;	// IMP=0x0000000000aba69b
- (id)initWithTransaction:(id)arg1;	// IMP=0x0000000000aba654

@end

