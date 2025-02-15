//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NDApplication : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSMutableArray *_observers;	// 16 = 0x10
    _Bool isInTransitionalDiscretionaryPeriod;	// 24 = 0x18
    double _currentRequestDelay;	// 32 = 0x20
}

+ (_Bool)springBoardApplicationExistsWithIdentifier:(id)arg1;	// IMP=0x004000000003e6cf
+ (id)springboardApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x001000000003e5a0
+ (id)applicationWithIdentifier:(id)arg1;	// IMP=0x001000000003e467
+ (void)initialize;	// IMP=0x001000000003e443
- (void).cxx_destruct;	// IMP=0x002000000003e04d
@property double currentRequestDelay; // @synthesize currentRequestDelay=_currentRequestDelay;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property _Bool isInTransitionalDiscretionaryPeriod; // @synthesize isInTransitionalDiscretionaryPeriod;
- (void)_onqueue_resetRequestDelay;	// IMP=0x001000000003df65
- (_Bool)backgroundUpdatesEnabled;	// IMP=0x001000000003df5d
- (void)invokeSelectorForAllObservers:(SEL)arg1 pid:(int)arg2;	// IMP=0x001000000003dedc
- (void)invokeSelectorForAllObservers:(SEL)arg1;	// IMP=0x001000000003de64
- (void)removeObserver:(id)arg1;	// IMP=0x001000000003ddb3
- (void)addObserver:(id)arg1;	// IMP=0x001000000003dd28
- (_Bool)isHandlingBackgroundURLSessionWithIdentifier:(id)arg1 withSessionUUID:(id)arg2;	// IMP=0x001000000003dd20
- (_Bool)hasBackgroundTaskCompletion;	// IMP=0x001000000003dd18
- (_Bool)canBeSuspended;	// IMP=0x001000000003dd10
- (_Bool)isForeground;	// IMP=0x001000000003dd08
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x001000000003dd00
- (_Bool)shouldElevateDiscretionaryPriority;	// IMP=0x001000000003dcf8
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2 wakeRequirement:(long long)arg3;	// IMP=0x001000000003db63
- (_Bool)maySupportWakesLater;	// IMP=0x001000000003db3c
- (_Bool)supportsWakes;	// IMP=0x001000000003dacd
- (_Bool)usesContainerManagerForAVAsset;	// IMP=0x001000000003dac5
- (id)containerURL;	// IMP=0x001000000003dabd
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000003d9fb

@end

