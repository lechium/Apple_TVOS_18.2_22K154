//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosensitivityProcessing/NSObject-Protocol.h>

@class MTLCommandBufferDescriptor, NSString;
@protocol MTLCommandBuffer, MTLDevice, MTLResidencySet;

@protocol MTLCommandQueue <NSObject>
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;
- (void)removeResidencySets:(const id *)arg1 count:(unsigned long long)arg2;
- (void)removeResidencySet:(id <MTLResidencySet>)arg1;
- (void)addResidencySets:(const id *)arg1 count:(unsigned long long)arg2;
- (void)addResidencySet:(id <MTLResidencySet>)arg1;
- (void)insertDebugCaptureBoundary;
- (id <MTLCommandBuffer>)commandBufferWithUnretainedReferences;
- (id <MTLCommandBuffer>)commandBufferWithDescriptor:(MTLCommandBufferDescriptor *)arg1;
- (id <MTLCommandBuffer>)commandBuffer;
@end

