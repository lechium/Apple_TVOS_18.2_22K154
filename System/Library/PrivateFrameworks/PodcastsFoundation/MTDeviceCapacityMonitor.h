//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface MTDeviceCapacityMonitor : NSObject
{
    MISSING_TYPE *diskAccessQueue;	// 8 = 0x8
    MISSING_TYPE *_capacityChangeObservers;	// 16 = 0x10
    MISSING_TYPE *capacityThreshold;	// 24 = 0x18
    MISSING_TYPE *url;	// 0 = 0x0
    MISSING_TYPE *vfsSource;	// 0 = 0x0
    MISSING_TYPE *___capacityLevel;	// 0 = 0x0
    MISSING_TYPE *activeObserver;	// 0 = 0x0
    MISSING_TYPE *_activeNotificationName;	// 0 = 0x0
}

+ (id)shared;	// IMP=0x00400000003f6010
- (void).cxx_destruct;	// IMP=0x00000000003f7940
- (id)init;	// IMP=0x00000000003f8ad0
- (void)removeCapacityChangeObserverWith:(long long)arg1;	// IMP=0x00000000003f7b80
- (long long)addCapacityChangeObserverWithOptions:(long long)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000003f7a40
- (void)dealloc;	// IMP=0x00000000003f7920
- (void)capacityLevel:(CDUnknownBlockType)arg1;	// IMP=0x00000000003f7730
@property(nonatomic, copy) NSString *activeNotificationName;

@end

