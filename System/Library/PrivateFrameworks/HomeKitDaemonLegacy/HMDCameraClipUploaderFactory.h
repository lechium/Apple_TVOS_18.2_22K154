//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipUploaderFactory : NSObject
{
}

- (id)createFinalizeClipOperationForModelID:(id)arg1 localZone:(id)arg2;	// IMP=0x00000000009dfdcd
- (id)createAddSignificantEventOperationForClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4;	// IMP=0x00000000009dfd21
- (id)createUploadVideoSegmentOperationForModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5;	// IMP=0x00000000009dfc4e
- (id)createCreateClipWithSignificantEventOperationForClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(id)arg6 quality:(long long)arg7 encryptionManager:(id)arg8;	// IMP=0x00000000009dfb47
- (id)createCreateClipOperationForClipModelID:(id)arg1 localZone:(id)arg2 targetFragmentDuration:(double)arg3 clipStartDate:(id)arg4 quality:(long long)arg5 encryptionManager:(id)arg6;	// IMP=0x00000000009dfa8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

