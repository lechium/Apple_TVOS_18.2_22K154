//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputTouchedStateInput
{
    unsigned long long _sourcesSlot;	// 8 = 0x8
    unsigned long long _touchedChangedHandlerSlot;	// 16 = 0x10
    unsigned long long _touchedSlot;	// 24 = 0x18
    unsigned long long _touchedTimestampSlot;	// 32 = 0x20
}

+ (unsigned short)updateContextSize;	// IMP=0x001000000001c07c
@property(readonly, copy) NSSet *sources;
@property(readonly) double lastTouchedStateLatency;
@property(readonly) double lastTouchedStateTimestamp;
@property(readonly, getter=isTouched) _Bool touched;
@property(copy) CDUnknownBlockType touchedDidChangeHandler;
- (_Bool)_setTouchedDidChangeHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c68e
- (CDUnknownBlockType)_touchedDidChangeHandler;	// IMP=0x000000000001c67a
@property(readonly, copy) NSString *description;
- (void)postCommit:(const void *)arg1 sender:(id)arg2;	// IMP=0x000000000001c39e
- (void)preCommit:(const void *)arg1 sender:(id)arg2;	// IMP=0x000000000001c2c3
- (_Bool)update:(void *)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;	// IMP=0x000000000001c0b0
- (id)initWithTemplate:(id)arg1 context:(id)arg2;	// IMP=0x000000000001bf50
- (id)initWithParameters:(id)arg1;	// IMP=0x000000000001be24
- (id)init;	// IMP=0x000000000001be01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

