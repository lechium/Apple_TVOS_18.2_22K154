//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngineEvent, MPCPlaybackEngineEventStream, NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlaybackEngineEventStreamCursor : NSObject
{
    unsigned long long _startNS;	// 8 = 0x8
    unsigned long long _endNS;	// 16 = 0x10
    MPCPlaybackEngineEventStream *_eventStream;	// 24 = 0x18
    MPCPlaybackEngineEvent *_startEvent;	// 32 = 0x20
    MPCPlaybackEngineEvent *_endEvent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002b7e70
@property(readonly, nonatomic) MPCPlaybackEngineEvent *endEvent; // @synthesize endEvent=_endEvent;
@property(readonly, nonatomic) MPCPlaybackEngineEvent *startEvent; // @synthesize startEvent=_startEvent;
@property(readonly, nonatomic) MPCPlaybackEngineEventStream *eventStream; // @synthesize eventStream=_eventStream;
- (id)findPreviousEventWithTypes:(id)arg1 matchingPayload:(id)arg2;	// IMP=0x00000000002b7b16
- (id)findPreviousEventWithType:(id)arg1 matchingPayload:(id)arg2;	// IMP=0x00000000002b7a36
- (void)enumeratePreviousEventsWithTypes:(id)arg1 matchingPayload:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b75b0
- (void)enumeratePreviousEventsWithTypes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b7594
- (void)enumeratePreviousEventsWithType:(id)arg1 matchingPayload:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b741f
- (void)enumeratePreviousEventsWithType:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b72e4
- (long long)countOfPreviousEventsWithTypes:(id)arg1 matchingPayload:(id)arg2;	// IMP=0x00000000002b710d
- (long long)countOfPreviousEventsWithType:(id)arg1 matchingPayload:(id)arg2;	// IMP=0x00000000002b6ffe
- (id)cursorFromEvent:(id)arg1 untilEvent:(id)arg2;	// IMP=0x00000000002b6e71
- (id)cursorUntilEvent:(id)arg1;	// IMP=0x00000000002b6dfb
@property(readonly, copy) NSString *description;
- (id)initWithEventStream:(id)arg1 startEvent:(id)arg2 endEvent:(id)arg3;	// IMP=0x00000000002b6bba
- (id)initWithEventStream:(id)arg1 fromNanoSeconds:(unsigned long long)arg2 endEvent:(id)arg3;	// IMP=0x00000000002b6aaf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

