//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFetchRequest, NSPersistentHistoryChangeRequest;

__attribute__((visibility("hidden")))
@interface NSSQLPersistentHistoryChangeRequestContext
{
    NSFetchRequest *_fetchRequest;	// 88 = 0x58
    _Bool _shouldUseBatches;	// 96 = 0x60
}

@property(readonly, nonatomic) _Bool shouldUseBatches; // @synthesize shouldUseBatches=_shouldUseBatches;
- (_Bool)executeRequestUsingConnection:(id)arg1;	// IMP=0x000000000028ccb3
- (void)executePrologue;	// IMP=0x000000000028cb72
- (_Bool)isWritingRequest;	// IMP=0x000000000028cb11
- (id)createDeleteTransactionsRequestContext;	// IMP=0x000000000028ca53
- (id)createRequestContextForChangesWithTransactionIDs:(id)arg1;	// IMP=0x000000000028c9bf
- (id)fetchRequestContextForChanges;	// IMP=0x000000000028c6db
- (id)createCountRequestContextForChanges;	// IMP=0x000000000028c675
@property(readonly, nonatomic) NSPersistentHistoryChangeRequest *request;
- (void)dealloc;	// IMP=0x000000000028c254
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;	// IMP=0x000000000028c1d4

@end

