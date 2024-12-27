//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, _GCDevicePhysicalInputTransaction;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInput
{
    CDUnknownBlockType _elementValueDidChangeHandler;	// 8 = 0x8
    CDUnknownBlockType _inputStateAvailableHandler;	// 16 = 0x10
    NSMutableArray *_allTransactions;	// 24 = 0x18
    _GCDevicePhysicalInputTransaction *_currentTransaction;	// 32 = 0x20
    _GCDevicePhysicalInputTransaction *_pendingTransaction;	// 40 = 0x28
    NSMutableArray *_bufferedTransactions;	// 48 = 0x30
    unsigned long long _bufferedTransactionsQueueDepth;	// 56 = 0x38
    _Atomic _Bool _isHandlingEvent;	// 64 = 0x40
}

- (double)lastEventTimestamp;	// IMP=0x00000000000bce2a
- (_Bool)isSnapshot;	// IMP=0x00000000000bce22
- (void)updateViewStateIfNeeded;	// IMP=0x00000000000bcdec
- (id)popTransaction;	// IMP=0x00000000000bcd4e
- (id)physicalInput;	// IMP=0x00000000000bccaf
- (void)setDataSource:(id)arg1;	// IMP=0x00000000000bcb1f
- (void)setDevice:(id)arg1;	// IMP=0x00000000000bcac2
- (void)dealloc;	// IMP=0x00000000000bc8d8
- (id)initWithFacade:(id)arg1 elements:(id)arg2;	// IMP=0x00000000000bbe01
- (id)initWithFacade:(id)arg1 elements:(id)arg2 attributes:(id)arg3;	// IMP=0x00000000000bbc59

@end

