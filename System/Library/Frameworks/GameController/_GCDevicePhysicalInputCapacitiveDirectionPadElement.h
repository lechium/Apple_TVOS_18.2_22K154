//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputCapacitiveDirectionPadElement
{
    unsigned long long _touchedValueFieldSlot;	// 8 = 0x8
    unsigned long long _touchedInputSlot;	// 16 = 0x10
}

+ (unsigned short)updateContextSize;	// IMP=0x0060000000077d17
- (_Bool)update:(void *)arg1 forGamepadEvent:(id)arg2 withTimestamp:(double)arg3;	// IMP=0x00000000000783b0
- (id)touchedInput;	// IMP=0x000000000007839e
- (id)description;	// IMP=0x00000000000781d4
- (_Bool)isEqualToElement:(id)arg1;	// IMP=0x0000000000078115
- (void)postCommit:(const void *)arg1 sender:(id)arg2;	// IMP=0x0000000000078018
- (void)preCommit:(const void *)arg1 sender:(id)arg2;	// IMP=0x0000000000077f1b
- (_Bool)update:(void *)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;	// IMP=0x0000000000077d6a
- (id)initWithTemplate:(id)arg1 context:(id)arg2;	// IMP=0x0000000000077bed
- (id)initWithParameters:(id)arg1;	// IMP=0x00000000000779ca

@end

