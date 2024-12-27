//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IKJSObject.h"

@class IKHandle, IKJSDataObservable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _IKJSDataDictionaryExporter : IKJSObject
{
    IKHandle *_dataDictionaryHandle;	// 8 = 0x8
    NSMutableArray *_touchedPropertyPaths;	// 16 = 0x10
    IKJSDataObservable *_dataObservable;	// 24 = 0x18
}

+ (id)_updatedDataDictionaryObject:(id)arg1 fromValue:(id)arg2 forPropertyPaths:(id)arg3 inContext:(id)arg4;	// IMP=0x0060000000025db2
+ (id)_dataDictionaryObjectFromObject:(id)arg1 forAccessorSequence:(id)arg2;	// IMP=0x0060000000025af2
+ (id)_dataDictionaryObjectFromValueRef:(struct OpaqueJSValue *)arg1 inContextRef:(struct OpaqueJSContext *)arg2;	// IMP=0x0060000000025550
+ (id)_dataDictionaryObjectFromValue:(id)arg1 inContext:(id)arg2;	// IMP=0x00600000000254da
- (void).cxx_destruct;	// IMP=0x00000000000269f8
@property(readonly, nonatomic) __weak IKJSDataObservable *dataObservable; // @synthesize dataObservable=_dataObservable;
- (void)touchPropertyPath:(id)arg1;	// IMP=0x00000000000254bd
- (id)dataDictionaryObject;	// IMP=0x00000000000252f6
- (id)initWithAppContext:(id)arg1 dataObservable:(id)arg2;	// IMP=0x0000000000024df2

@end

