//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface VSAudioSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _audioSessionIsSetUp;	// 16 = 0x10
    CDStruct_a87a0d46 _desiredState;	// 24 = 0x18
    CDStruct_a87a0d46 _cachedState;	// 40 = 0x28
    _Bool _bluetoothAllowed;	// 56 = 0x38
    struct __CFBag *_activityBag;	// 64 = 0x40
    long long _serverGeneration;	// 72 = 0x48
}

+ (long long)_VSAudioCategoryForActivity:(long long)arg1;	// IMP=0x004000000000e0d3
+ (id)sharedInstance;	// IMP=0x001000000000e0a3
- (void).cxx_destruct;	// IMP=0x002000000000d93a
- (void)_safeSetBluetoothInputAllowed:(_Bool)arg1;	// IMP=0x001000000000d8ec
- (void)_safeSetActive:(_Bool)arg1 withActivity:(long long)arg2;	// IMP=0x001000000000d7de
- (void)_safeSetCategoryForActivity:(long long)arg1;	// IMP=0x001000000000d78f
- (long long)_safeServerGeneration;	// IMP=0x001000000000d703
- (void)_safeSetupAudioSession;	// IMP=0x001000000000d6b8
- (long long)_nextActivityForActive:(_Bool)arg1 activity:(long long)arg2 serverActivity:(long long)arg3;	// IMP=0x001000000000d4c9
- (void)_setCategoryForActivity:(long long)arg1;	// IMP=0x001000000000d16e
- (void)_setupAudioSession;	// IMP=0x001000000000cfdf
- (void)_mediaServicesWereReset:(id)arg1;	// IMP=0x001000000000cf94
- (void)_audioSessionInterrupted:(id)arg1;	// IMP=0x001000000000cecd
- (void)dealloc;	// IMP=0x001000000000ce4a
- (id)init;	// IMP=0x001000000000cd5f

@end

