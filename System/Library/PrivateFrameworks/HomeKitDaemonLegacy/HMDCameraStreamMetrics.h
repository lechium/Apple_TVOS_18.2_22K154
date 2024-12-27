//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraMetricsStreamLogEvent, NSError;

__attribute__((visibility("hidden")))
@interface HMDCameraStreamMetrics : HMFObject
{
    HMDCameraMetricsStreamLogEvent *_cameraStreamMetricsLogEvent;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000027bffc
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) HMDCameraMetricsStreamLogEvent *cameraStreamMetricsLogEvent; // @synthesize cameraStreamMetricsLogEvent=_cameraStreamMetricsLogEvent;
- (void)dealloc;	// IMP=0x000000000027becf
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(_Bool)arg3;	// IMP=0x000000000027be16

@end

