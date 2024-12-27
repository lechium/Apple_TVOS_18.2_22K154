//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CCDataResourceWriter, CCDatabaseSetStateReader, CCDatabaseUpdater, CCDevice, CCDifferentialUpdateCache, CCSet;
@protocol CCSetChangeNotifierProtocol;

__attribute__((visibility("hidden")))
@interface CCDifferentialUpdater : NSObject
{
    CCDatabaseUpdater *_databaseUpdater;	// 8 = 0x8
    CCDatabaseSetStateReader *_stateReader;	// 16 = 0x10
    CCDataResourceWriter *_setWriter;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
    unsigned int _clientAddOrUpdateCount;	// 40 = 0x28
    unsigned int _clientRemoveCount;	// 44 = 0x2c
    CCSet *_set;	// 48 = 0x30
    CCDevice *_device;	// 56 = 0x38
    CCDifferentialUpdateCache *_diffUpdateCache;	// 64 = 0x40
    id <CCSetChangeNotifierProtocol> _changeNotifier;	// 72 = 0x48
    _Bool _isIncremental;	// 80 = 0x50
    _Bool _interrupt;	// 81 = 0x51
    _Bool _didCommit;	// 82 = 0x52
    long long _incrementalErrorCode;	// 88 = 0x58
}

+ (id)updaterForSet:(id)arg1 withRequest:(id)arg2 setWriter:(id)arg3 changeNotifier:(id)arg4 timeout:(double)arg5;	// IMP=0x0060000000013a05
- (void).cxx_destruct;	// IMP=0x000000000001709d
@property(nonatomic) _Bool didCommit; // @synthesize didCommit=_didCommit;
@property(readonly, nonatomic) long long incrementalErrorCode; // @synthesize incrementalErrorCode=_incrementalErrorCode;
- (_Bool)mergeDelta:(id)arg1;	// IMP=0x00000000000162e0
- (_Bool)_deleteStaleItems;	// IMP=0x00000000000161d6
- (_Bool)_diffUpdateItemsWithContents:(id)arg1 metaContents:(id)arg2;	// IMP=0x00000000000155b2
- (void)_interrupt;	// IMP=0x00000000000155a8
- (void)abort;	// IMP=0x0000000000015578
- (_Bool)_shouldCommit:(_Bool *)arg1;	// IMP=0x00000000000152e6
- (_Bool)finish:(_Bool)arg1;	// IMP=0x0000000000014fcb
- (_Bool)_clearSetTombstoneStatus;	// IMP=0x0000000000014fa1
- (_Bool)_tombstoneSet;	// IMP=0x0000000000014e98
- (_Bool)removeSourceItemIdentifier:(id)arg1;	// IMP=0x0000000000014dea
- (_Bool)addItemsWithContents:(id)arg1 metaContents:(id)arg2;	// IMP=0x0000000000014c52
- (void)_complete:(_Bool)arg1;	// IMP=0x0000000000014c1b
- (_Bool)isIncremental;	// IMP=0x0000000000014c12
- (unsigned long long)priorVersion;	// IMP=0x0000000000014bfc
- (unsigned long long)modifiedRowCount;	// IMP=0x0000000000014be3
- (id)initWithSet:(id)arg1 device:(id)arg2 request:(id)arg3 setWriter:(id)arg4 database:(id)arg5 changeNotifier:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000000144b9

@end

