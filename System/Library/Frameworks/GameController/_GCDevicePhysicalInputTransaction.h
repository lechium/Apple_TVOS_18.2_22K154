//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _GCDevicePhysicalInput, _GCDevicePhysicalInputChangedElementsEnumerator;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputTransaction
{
    _GCDevicePhysicalInput *_physicalInput;	// 8 = 0x8
    double _lastEventTimestamp;	// 16 = 0x10
    _GCDevicePhysicalInputChangedElementsEnumerator *_changedElements;	// 24 = 0x18
    _Bool _updateContextsValid;	// 32 = 0x20
}

- (double)lastEventTimestamp;	// IMP=0x00000000000e24c1
- (_Bool)isSnapshot;	// IMP=0x00000000000e216f
- (id)description;	// IMP=0x00000000000e20d7
- (id)physicalInput;	// IMP=0x00000000000e2061
- (_Bool)allowsWeakReference;	// IMP=0x00000000000e2059
- (void)dealloc;	// IMP=0x00000000000e1fe7

@end

