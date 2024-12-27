//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface CSDVoiceOverObserver : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    NSMapTable *_delegateToQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001dbc1a
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
- (void)updateEnabled;	// IMP=0x00100000001dbbd1
- (void)handleAXSVoiceOverTouchEnabledNotification:(id)arg1;	// IMP=0x00100000001dbac3
- (void)removeDelegate:(id)arg1;	// IMP=0x00100000001db9e0
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00100000001db8d1
- (void)performAsynchronousBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001db84e
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001db7cb
@property(readonly, nonatomic) _Bool shouldRouteToSpeakerWithProximity;
@property(readonly, nonatomic, getter=isBrailleScreenInputEnabled) _Bool brailleScreenInputEnabled;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)dealloc;	// IMP=0x00100000001db414
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001db398

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

