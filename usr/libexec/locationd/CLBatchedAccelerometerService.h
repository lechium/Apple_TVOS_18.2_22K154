//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CLBatchedAccelerometerService
{
    struct unique_ptr<CLBatchedAccelerometerClient::Client, std::default_delete<CLBatchedAccelerometerClient::Client>> _accel800;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x00400000009e2706
+ (id)getSilo;	// IMP=0x00100000009e26aa
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000009e2691
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000009e2634
- (id).cxx_construct;	// IMP=0x00200000009e3124
- (void).cxx_destruct;	// IMP=0x00100000009e30fc
- (void)onBatchedData:(void *)arg1 N:(int)arg2;	// IMP=0x00100000009e2d56
- (void)unregisterForData:(byref id)arg1;	// IMP=0x00100000009e2ca4
- (void)registerForData:(byref id)arg1;	// IMP=0x00100000009e288f
- (void)dealloc;	// IMP=0x00100000009e2810
- (id)init;	// IMP=0x00100000009e271f

@end

