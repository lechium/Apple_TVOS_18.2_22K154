//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PBEBluetoothRemoteEventEntry
{
    int _timestampType;	// 16 = 0x10
    unsigned long long _timestamp;	// 24 = 0x18
    long long _usagePage;	// 32 = 0x20
    long long _usage;	// 40 = 0x28
}

- (long long)type;	// IMP=0x00000000000021b8
- (id)initWithEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000000002117

@end

