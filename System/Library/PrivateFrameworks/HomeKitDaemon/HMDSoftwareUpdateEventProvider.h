//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDSoftwareUpdateEventProviderContext, HMFTimer, HMSoftwareUpdateDescriptor, HMSoftwareUpdateProgress, HMSoftwareUpdateProgressEvent, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDSoftwareUpdateEventProvider : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMSoftwareUpdateDescriptor *_lastSentSoftwareUpdateDescriptor;	// 16 = 0x10
    HMSoftwareUpdateProgress *_lastSentSoftwareUpdateProgress;	// 24 = 0x18
    HMDSoftwareUpdateEventProviderContext *_context;	// 32 = 0x20
    NSMutableArray *_scanFutures;	// 40 = 0x28
    CDUnknownBlockType _scanOptionsFactory;	// 48 = 0x30
    HMFTimer *_progressDebounceTimer;	// 56 = 0x38
    HMSoftwareUpdateProgressEvent *_debouncedProgressEvent;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x001000000012b38b
- (void).cxx_destruct;	// IMP=0x000000000012aa89
@property(retain) HMSoftwareUpdateProgressEvent *debouncedProgressEvent; // @synthesize debouncedProgressEvent=_debouncedProgressEvent;
@property(retain) HMFTimer *progressDebounceTimer; // @synthesize progressDebounceTimer=_progressDebounceTimer;
@property(copy) CDUnknownBlockType scanOptionsFactory; // @synthesize scanOptionsFactory=_scanOptionsFactory;
@property(retain) NSMutableArray *scanFutures; // @synthesize scanFutures=_scanFutures;
@property(readonly) HMDSoftwareUpdateEventProviderContext *context; // @synthesize context=_context;
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000012a966
- (void)manager:(id)arg1 didFinishInstallation:(id)arg2;	// IMP=0x000000000012a84f
- (void)manager:(id)arg1 didFailInstallation:(id)arg2 withError:(id)arg3;	// IMP=0x000000000012a6d5
- (void)manager:(id)arg1 didFinishDownload:(id)arg2 willProceedWithInstallation:(_Bool)arg3 waitingForAdmissionControl:(_Bool)arg4 denialReasons:(id)arg5;	// IMP=0x000000000012a5a2
- (void)manager:(id)arg1 didFinishDownload:(id)arg2 willProceedWithInstallation:(_Bool)arg3 waitingForAdmissionControl:(_Bool)arg4;	// IMP=0x000000000012a48b
- (void)manager:(id)arg1 didFinishDownload:(id)arg2;	// IMP=0x000000000012a374
- (void)manager:(id)arg1 didFailDownload:(id)arg2 withError:(id)arg3;	// IMP=0x000000000012a1fa
- (void)manager:(id)arg1 didChangeProgressOnDownload:(id)arg2;	// IMP=0x000000000012a0ba
- (void)manager:(id)arg1 scanRequestPostponed:(id)arg2 error:(id)arg3;	// IMP=0x0000000000129f21
- (void)manager:(id)arg1 scanRequestDidLocateUpdate:(id)arg2 error:(id)arg3;	// IMP=0x0000000000129d88
- (void)respondToScanFuturesWithError:(id)arg1;	// IMP=0x0000000000129cb6
- (void)forwardDebouncedProgressEvent;	// IMP=0x0000000000129aac
- (void)forwardProgressEventWithProgress:(id)arg1;	// IMP=0x00000000001295f2
- (id)descriptorFromControllerStatus:(id)arg1 controllerDescriptor:(id)arg2 errorCode:(id)arg3;	// IMP=0x0000000000129240
- (void)forwardDescriptorEventWithErrorCode:(id)arg1;	// IMP=0x00000000001290bf
@property(readonly) HMSoftwareUpdateProgress *lastSentSoftwareUpdateProgress; // @synthesize lastSentSoftwareUpdateProgress=_lastSentSoftwareUpdateProgress;
@property(retain) HMSoftwareUpdateDescriptor *lastSentSoftwareUpdateDescriptor; // @synthesize lastSentSoftwareUpdateDescriptor=_lastSentSoftwareUpdateDescriptor;
- (void)scanWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000128d46
- (id)initWithContext:(id)arg1 scanOptionsFactory:(CDUnknownBlockType)arg2 timerFactory:(CDUnknownBlockType)arg3;	// IMP=0x0000000000128b3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

