//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol HHAQuarantineExpirationDelegate, HHATimer, HHATimerFactory, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HHAQuarantinedHubs : NSObject
{
    unsigned int _quarantinedHubRetries;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSSet *_hubsInQuarantine;	// 24 = 0x18
    unsigned long long _quarantineTimeoutNsec;	// 32 = 0x20
    id <HHATimerFactory> _timerFactory;	// 40 = 0x28
    id <HHATimer> _quarantineHubTimer;	// 48 = 0x30
    id <HHAQuarantineExpirationDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001b32b
@property(readonly, nonatomic) __weak id <HHAQuarantineExpirationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <HHATimer> quarantineHubTimer; // @synthesize quarantineHubTimer=_quarantineHubTimer;
@property(readonly, nonatomic) id <HHATimerFactory> timerFactory; // @synthesize timerFactory=_timerFactory;
@property(readonly, nonatomic) unsigned long long quarantineTimeoutNsec; // @synthesize quarantineTimeoutNsec=_quarantineTimeoutNsec;
@property(readonly, nonatomic) NSSet *hubsInQuarantine; // @synthesize hubsInQuarantine=_hubsInQuarantine;
- (void)addHubsToQuarantine:(id)arg1;	// IMP=0x000000000001b04b
- (void)clearQuarantineRetryCounter;	// IMP=0x000000000001b03e
- (void)resetQuarantinedHubs;	// IMP=0x000000000001b00c
- (void)_purgeQuarantinedHubs;	// IMP=0x000000000001afb5
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 timerFactory:(id)arg3;	// IMP=0x000000000001aeb7
- (void)_handleQuarantineHubTimerFired;	// IMP=0x000000000001ad86

@end

