//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;
@protocol GCSwitchPositionInput;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputSwitchElement
{
    unsigned long long _sourcesSlot;	// 8 = 0x8
    unsigned long long _canWrapSlot;	// 16 = 0x10
    unsigned long long _isSequentialSlot;	// 24 = 0x18
    unsigned long long _positionMinSlot;	// 32 = 0x20
    unsigned long long _positionMaxSlot;	// 40 = 0x28
    unsigned long long _positionFieldSlot;	// 48 = 0x30
    unsigned long long _positionChangedHandlerSlot;	// 56 = 0x38
    unsigned long long _positionSlot;	// 64 = 0x40
    unsigned long long _timestampSlot;	// 72 = 0x48
}

+ (unsigned short)updateContextSize;	// IMP=0x0010000000022aea
- (_Bool)update:(void *)arg1 forGamepadEvent:(id)arg2 withTimestamp:(double)arg3;	// IMP=0x00000000000237e9
@property(readonly, copy) NSSet *sources;
@property(readonly) double lastPositionLatency;
@property(readonly) double lastPositionTimestamp;
@property(readonly) _Bool canWrap;
@property(readonly, getter=isSequential) _Bool sequential;
@property(readonly) struct _NSRange positionRange;
@property(readonly) long long position;
@property(copy) CDUnknownBlockType positionDidChangeHandler;
@property(readonly, copy) NSString *description;
- (_Bool)isEqualToElement:(id)arg1;	// IMP=0x00000000000232d9
@property(readonly) id <GCSwitchPositionInput> positionInput;
- (void)postCommit:(const void *)arg1 sender:(id)arg2;	// IMP=0x0000000000023126
- (void)preCommit:(const void *)arg1 sender:(id)arg2;	// IMP=0x0000000000022fd4
- (_Bool)update:(void *)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;	// IMP=0x0000000000022b1f
- (id)initWithTemplate:(id)arg1 context:(id)arg2;	// IMP=0x00000000000228f6
- (id)initWithParameters:(id)arg1;	// IMP=0x00000000000225c0

// Remaining properties
@property(readonly, copy) NSSet *aliases;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *localizedName;
@property(readonly, copy) NSString *sfSymbolsName;
@property(readonly) Class superclass;

@end

