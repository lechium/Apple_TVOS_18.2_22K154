//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;
@protocol GCAxis2DInput, GCAxisInput, GCLinearInput><GCPressedStateInput;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputDirectionPadElement
{
    unsigned long long _upValueFieldSlot;	// 8 = 0x8
    unsigned long long _downValueFieldSlot;	// 16 = 0x10
    unsigned long long _leftValueFieldSlot;	// 24 = 0x18
    unsigned long long _rightValueFieldSlot;	// 32 = 0x20
    unsigned long long _xyAxesSlot;	// 40 = 0x28
    unsigned long long _xAxisSlot;	// 48 = 0x30
    unsigned long long _yAxisSlot;	// 56 = 0x38
    unsigned long long _upInputSlot;	// 64 = 0x40
    unsigned long long _downInputSlot;	// 72 = 0x48
    unsigned long long _leftInputSlot;	// 80 = 0x50
    unsigned long long _rightInputSlot;	// 88 = 0x58
}

+ (unsigned short)updateContextSize;	// IMP=0x001000000006c67c
- (_Bool)update:(void *)arg1 forGamepadEvent:(id)arg2 withTimestamp:(double)arg3;	// IMP=0x000000000006de0d
@property(readonly) id <GCLinearInput><GCPressedStateInput> right;
@property(readonly) id <GCLinearInput><GCPressedStateInput> left;
@property(readonly) id <GCLinearInput><GCPressedStateInput> down;
@property(readonly) id <GCLinearInput><GCPressedStateInput> up;
@property(readonly) id <GCAxisInput> yAxis;
@property(readonly) id <GCAxisInput> xAxis;
@property(readonly) id <GCAxis2DInput> xyAxes;
@property(readonly, copy) NSString *description;
- (_Bool)isEqualToElement:(id)arg1;	// IMP=0x000000000006d8c4
- (void)postCommit:(const void *)arg1 sender:(id)arg2;	// IMP=0x000000000006d661
- (void)preCommit:(const void *)arg1 sender:(id)arg2;	// IMP=0x000000000006d3fe
- (_Bool)update:(void *)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;	// IMP=0x000000000006c752
- (id)initWithTemplate:(id)arg1 context:(id)arg2;	// IMP=0x000000000006c38c
- (id)initWithParameters:(id)arg1;	// IMP=0x000000000006b688

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

