//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice;
@protocol HMDHAPAccessoryTask;

__attribute__((visibility("hidden")))
@interface HMDHAPAccessoryRemoteOperationWithLocalFallbackTask
{
    HMDDevice *_remoteTaskDelegateDevice;	// 48 = 0x30
    id <HMDHAPAccessoryTask> _remoteTask;	// 56 = 0x38
    id <HMDHAPAccessoryTask> _localTask;	// 64 = 0x40
    id <HMDHAPAccessoryTask> _fallbackLocalTask;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000b9ecd3
@property(retain) id <HMDHAPAccessoryTask> fallbackLocalTask; // @synthesize fallbackLocalTask=_fallbackLocalTask;
@property(retain) id <HMDHAPAccessoryTask> localTask; // @synthesize localTask=_localTask;
@property(retain) id <HMDHAPAccessoryTask> remoteTask; // @synthesize remoteTask=_remoteTask;
@property(readonly) HMDDevice *remoteTaskDelegateDevice; // @synthesize remoteTaskDelegateDevice=_remoteTaskDelegateDevice;
- (id)_makeLocalTaskWithRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b9eb84
- (id)_makeRemoteTaskWithRequests:(id)arg1 delegateDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b9eab7
- (CDUnknownBlockType)_remoteTaskCompletionHandler;	// IMP=0x0000000000b9ea34
- (CDUnknownBlockType)completion;	// IMP=0x0000000000b9e940
- (_Bool)_shouldFallbackLocallyWithError:(id)arg1 accessory:(id)arg2;	// IMP=0x0000000000b9e637
- (void)_startScanningForSuspendedAccessoriesWithRequests:(id)arg1;	// IMP=0x0000000000b9e47a
- (void)execute;	// IMP=0x0000000000b9e139
- (id)initWithContext:(id)arg1 requests:(id)arg2 delegateDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000b9e0af

@end

