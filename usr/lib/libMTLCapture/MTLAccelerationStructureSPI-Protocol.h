//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUToolsCapture/MTLAccelerationStructure-Protocol.h>

@class MTLAccelerationStructureDescriptor;
@protocol MTLBuffer;

@protocol MTLAccelerationStructureSPI <MTLAccelerationStructure>
@property(readonly) unsigned long long gpuHandle;
@property(readonly, nonatomic) unsigned long long resourceIndex;
@property(readonly, nonatomic) unsigned long long bufferOffset;
@property(readonly, nonatomic) id <MTLBuffer> buffer;
@property(readonly, nonatomic) unsigned long long accelerationStructureUniqueIdentifier;
@property(readonly, nonatomic) unsigned long long uniqueIdentifier;

@optional
@property(retain, nonatomic) MTLAccelerationStructureDescriptor *descriptor;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"MTLAccelerationStructureDescriptor",?,&,N

@end

