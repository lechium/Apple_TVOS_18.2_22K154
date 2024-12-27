//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATSharingDevice, NSString;
@protocol CATSharingDeviceSession;

__attribute__((visibility("hidden")))
@interface CATDeviceSessionBackedDevicePairingTerminal : NSObject
{
    id <CATSharingDeviceSession> mDeviceSession;	// 8 = 0x8
    CDUnknownBlockType mVerifyPairingCompletion;	// 16 = 0x10
    CDUnknownBlockType mBeginPairingCompletion;	// 24 = 0x18
    CDUnknownBlockType mPINPromptHandler;	// 32 = 0x20
    _Bool _invalidated;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000026801
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void)removeSessionHandlers;	// IMP=0x0000000000026777
- (void)invalidateWithError:(id)arg1;	// IMP=0x00000000000266f3
- (void)vendConnectionForCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000265ff
- (void)pairingCompleteWithError:(id)arg1;	// IMP=0x00000000000264e5
- (void)fetchStableIdentifierFinished:(id)arg1;	// IMP=0x00000000000262dd
- (void)fetchStableIdentifier;	// IMP=0x000000000002613c
- (void)sessionHasPromptedForPINWithWaitTime:(unsigned long long)arg1;	// IMP=0x0000000000026006
- (void)verifyPairingFinished:(_Bool)arg1;	// IMP=0x0000000000025e64
- (void)verifyPairing;	// IMP=0x0000000000025c5f
- (void)deviceSessionReady;	// IMP=0x0000000000025af7
- (void)deviceSessionEncounteredError:(id)arg1;	// IMP=0x0000000000025962
- (void)deviceSessionInvalidated:(id)arg1;	// IMP=0x00000000000257d0
- (void)addSessionHandlers;	// IMP=0x000000000002510b
- (void)_invalidate;	// IMP=0x0000000000024faf
- (void)_tryPIN:(id)arg1;	// IMP=0x0000000000024e64
- (void)_beginPairing:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024b23
- (void)_verifyPairingAndFetchStableIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000024a4f
- (void)invalidate;	// IMP=0x000000000002491a
- (void)tryPIN:(id)arg1;	// IMP=0x00000000000247b3
- (void)beginPairing:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000245db
- (void)verifyPairingAndFetchStableIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002443e
@property(readonly, nonatomic) CATSharingDevice *device;
- (id)initWithDeviceSession:(id)arg1;	// IMP=0x00000000000243bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

