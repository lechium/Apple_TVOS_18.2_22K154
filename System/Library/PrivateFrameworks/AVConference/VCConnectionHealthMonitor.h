//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, VCConnectionHealthMonitorDelegate;

__attribute__((visibility("hidden")))
@interface VCConnectionHealthMonitor : NSObject
{
    unsigned char _lastReportedIndex;	// 8 = 0x8
    struct ConnectionStatsHistory _statsHistory;	// 9 = 0x9
    struct _opaque_pthread_rwlock_t _peerStateRWLock;	// 40 = 0x28
    struct ConnectionStatsHistory _peerStatsHistory;	// 240 = 0xf0
    id _delegate;	// 272 = 0x110
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 280 = 0x118
    _Bool _reportedSymptomOnRecoveryAfterLongMediaStall;	// 288 = 0x120
    double _firstTimeRecordedLongMediaStall;	// 296 = 0x128
    struct _opaque_pthread_rwlock_t _stateRWLock;	// 304 = 0x130
    struct ConnectionStats _currentReceivingStats;	// 504 = 0x1f8
    struct ConnectionStats _tempReceivingStats;	// 520 = 0x208
    _Bool _firstPacketReceived;	// 536 = 0x218
    double _primaryConnHealthAllowedDelay;	// 544 = 0x220
    _Bool _usingServerBasedLinks;	// 552 = 0x228
    struct ConnectionStatsSequenceNumberData _secondaryConnReceivedSequenceNumberStats[1024];	// 560 = 0x230
}

@property _Bool usingServerBasedLinks; // @synthesize usingServerBasedLinks=_usingServerBasedLinks;
@property double primaryConnHealthAllowedDelay; // @synthesize primaryConnHealthAllowedDelay=_primaryConnHealthAllowedDelay;
- (void)resetHistory:(struct ConnectionStatsHistory *)arg1;	// IMP=0x000000000035258a
- (void)resetConnectionStats:(_Bool)arg1;	// IMP=0x0000000000352530
- (void)processPeerStatsBlob:(unsigned int)arg1;	// IMP=0x0000000000352030
- (unsigned int)generateStatsBlob;	// IMP=0x0000000000351f7e
@property id <VCConnectionHealthMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x0000000000351b21
- (id)init;	// IMP=0x0000000000351993

@end

