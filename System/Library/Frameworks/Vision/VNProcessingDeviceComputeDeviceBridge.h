//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VNProcessingDevice;
@protocol MLComputeDeviceProtocol;

__attribute__((visibility("hidden")))
@interface VNProcessingDeviceComputeDeviceBridge : NSObject
{
    VNProcessingDevice *_processingDevice;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000401a79
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000004019e9
@property(readonly, copy) NSString *description;
@property(readonly) id <MLComputeDeviceProtocol> computeDevice;
@property(readonly) VNProcessingDevice *processingDevice;
- (id)initWithProcessingDevice:(id)arg1;	// IMP=0x0000000000401897

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

