//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC18DoNotDisturbServer19FindMyLocateSession : NSObject
{
    MISSING_TYPE *meDeviceUpdateCallback;	// 8 = 0x8
    MISSING_TYPE *isInitialized;	// 24 = 0x18
    MISSING_TYPE *initContinuations;	// 32 = 0x20
    MISSING_TYPE *preferenceChangesTask;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000cc050
- (id)init;	// IMP=0x00000000000cbfb0
- (void)getActiveLocationSharingDeviceWithCompletionHandler:(void (^)(_TtC18DoNotDisturbServer11DNDFMDevice *, NSError *))arg1;	// IMP=0x00000000000cbcf0
- (void)stopMonitoringPreferenceChangesWithCompletionHandler:(void (^)(NSError *))arg1;	// IMP=0x00000000000cbad0
- (void)startMonitoringPreferencesChangesWithCompletionHandler:(void (^)(NSError *))arg1;	// IMP=0x00000000000cb970
@property(nonatomic, copy) CDUnknownBlockType meDeviceUpdateCallback;

@end

