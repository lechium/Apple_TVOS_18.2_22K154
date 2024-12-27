//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _GCDevicePhysicalInputBase;
@protocol _GCDevicePhysicalInputViewDataSource;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputView : NSObject
{
    id <_GCDevicePhysicalInputViewDataSource> _dataSource;	// 8 = 0x8
    _Bool _isPartOfPhysicalInput;	// 16 = 0x10
    _Bool _isSnapshot;	// 17 = 0x11
    _Atomic _Bool _isObserved;	// 18 = 0x12
}

+ (unsigned short)updateContextSize;	// IMP=0x00100000000cebdb
+ (id)withParameters:(id)arg1;	// IMP=0x00100000000ce9d9
+ (id)withTemplate:(id)arg1 context:(id)arg2;	// IMP=0x00100000000ce9ad
- (_Bool)allowsWeakReference;	// IMP=0x00000000000cee70
- (_Bool)retainWeakReference;	// IMP=0x00000000000cee1e
- (unsigned long long)retainCount;	// IMP=0x00000000000cedcc
- (oneway void)release;	// IMP=0x00000000000ced81
- (id)retain;	// IMP=0x00000000000ced34
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x00000000000ced00
- (void)postCommit:(const void *)arg1 sender:(id)arg2;	// IMP=0x00000000000cebf1
- (void)preCommit:(const void *)arg1 sender:(id)arg2;	// IMP=0x00000000000cebeb
- (_Bool)update:(void *)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;	// IMP=0x00000000000cebe3
- (void)dealloc;	// IMP=0x00000000000ceb88
- (id)init;	// IMP=0x00000000000ceb74
- (id)initWithParameters:(id)arg1;	// IMP=0x00000000000ceb41
- (id)initWithTemplate:(id)arg1 context:(id)arg2;	// IMP=0x00000000000cea00
- (unsigned long long)view:(id)arg1 allocateObjectSlot:(unsigned char)arg2 withCopyOfValueFromView:(id)arg3 slot:(unsigned long long)arg4;	// IMP=0x00000000000cefff
- (unsigned long long)view:(id)arg1 allocatePrimitiveSlot:(unsigned char)arg2 withCopyOfValueFromView:(id)arg3 slot:(unsigned long long)arg4;	// IMP=0x00000000000ceff7
- (unsigned long long)view:(id)arg1 makeReferenceToView:(id)arg2;	// IMP=0x00000000000cefd1
- (id)viewDataSource:(id)arg1;	// IMP=0x00000000000cefc8
@property(readonly) _GCDevicePhysicalInputBase *implementation;
- (id)view:(id)arg1 viewForSlot:(unsigned long long *)arg2;	// IMP=0x00000000000cefb7
- (_Bool)view:(id)arg1 testAndSetObjectValue:(id)arg2 forSlot:(unsigned long long *)arg3 policy:(unsigned long long)arg4;	// IMP=0x00000000000cefa2
- (void)view:(id)arg1 setObjectValue:(id)arg2 forSlot:(unsigned long long *)arg3 policy:(unsigned long long)arg4;	// IMP=0x00000000000ceef6
- (id)view:(id)arg1 objectValueForSlot:(unsigned long long *)arg2;	// IMP=0x00000000000ceeed
- (_Bool)view:(id)arg1 testAndSetPrimitiveValue:(unsigned long long)arg2 forSlot:(unsigned long long *)arg3;	// IMP=0x00000000000ceed5
- (void)view:(id)arg1 setPrimitiveValue:(unsigned long long)arg2 forSlot:(unsigned long long *)arg3;	// IMP=0x00000000000ceecc
- (unsigned long long)view:(id)arg1 primitiveValueForSlot:(unsigned long long *)arg2;	// IMP=0x00000000000ceec3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

