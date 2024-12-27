//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface URLBagTimer : NSObject
{
    NSString *_bagKey;	// 8 = 0x8
    NSString *_cellularBagKey;	// 16 = 0x10
    double _defaultInterval;	// 24 = 0x18
    double _defaultWindow;	// 32 = 0x20
    CDUnknownBlockType _eventBlock;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
    _Bool _started;	// 56 = 0x38
    CDUnknownBlockType _preconditionsBlock;	// 64 = 0x40
    id _taskObserver;	// 72 = 0x48
}

+ (id)subscriptionRenewTimer;	// IMP=0x00400000000ec832
- (void).cxx_destruct;	// IMP=0x00200000000ed397
@property(copy, nonatomic) CDUnknownBlockType preconditionsBlock; // @synthesize preconditionsBlock=_preconditionsBlock;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
@property(nonatomic) double defaultWindow; // @synthesize defaultWindow=_defaultWindow;
@property(nonatomic) double defaultInterval; // @synthesize defaultInterval=_defaultInterval;
@property(copy, nonatomic) NSString *cellularBagKey; // @synthesize cellularBagKey=_cellularBagKey;
@property(copy, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
- (double)_windowWithUserDefaultsKey:(id)arg1;	// IMP=0x00100000000ed285
- (id)_userDefaultsKeyWindowOverride;	// IMP=0x00100000000ed268
- (id)_userDefaultsKeyWiFiOverride;	// IMP=0x00100000000ed24b
- (id)_userDefaultsKeyLastTimeCheck;	// IMP=0x00100000000ed22e
- (id)_userDefaultsKeyCellularOverride;	// IMP=0x00100000000ed211
- (double)_timerIntervalWithBagKey:(id)arg1 userDefaultsKey:(id)arg2;	// IMP=0x00100000000ed0c1
- (double)_timerInterval;	// IMP=0x00100000000ecfe2
- (void)_setLastFireDate:(id)arg1;	// IMP=0x00100000000ecf70
- (void)_resetBackgroundTaskJobs;	// IMP=0x00100000000ecf6a
- (double)_readTimeIntervalFromUserDefaultsKey:(id)arg1;	// IMP=0x00100000000ecea2
- (id)_nextFireDateWithInterval:(double)arg1;	// IMP=0x00100000000ecd0c
- (void)_fireTimer;	// IMP=0x00100000000ecc3d
- (void)_attemptFireForJob:(id)arg1 withName:(id)arg2;	// IMP=0x00100000000ecc37
- (void)_addJobWithDate:(id)arg1 window:(double)arg2 allowsCellular:(_Bool)arg3;	// IMP=0x00100000000ecc31
- (void)start;	// IMP=0x00100000000ec981
- (void)reset;	// IMP=0x00100000000ec91f
- (void)invalidate;	// IMP=0x00100000000ec8a6
- (void)dealloc;	// IMP=0x00100000000ec7b5
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00100000000ec5cb

@end

