//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class BSWatchdog;

@interface PBKioskAppAnimationTransaction : BSTransaction
{
    BSTransaction *_animateTransaction;	// 8 = 0x8
    BSWatchdog *_watchdog;	// 16 = 0x10
    CDStruct_ce5a068a _context;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000221b92
@property(readonly, nonatomic) BSWatchdog *watchdog; // @synthesize watchdog=_watchdog;
@property(readonly, nonatomic) BSTransaction *animateTransaction; // @synthesize animateTransaction=_animateTransaction;
@property(readonly, nonatomic) CDStruct_ce5a068a context; // @synthesize context=_context;
- (void)_prepareAnimationInTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000221950
- (void)_didComplete;	// IMP=0x0010000000221837
- (void)_willAddChildTransaction:(id)arg1;	// IMP=0x001000000022178b
- (void)_begin;	// IMP=0x0010000000221512
- (_Bool)_canBeInterrupted;	// IMP=0x001000000022150a
- (id)initWithSceneLayoutViewController:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 shouldPlaySound:(_Bool)arg4 isLaunchingFromKiosk:(_Bool)arg5;	// IMP=0x001000000022142d

@end

