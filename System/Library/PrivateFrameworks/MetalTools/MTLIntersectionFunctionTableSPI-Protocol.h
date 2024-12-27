//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLIntersectionFunctionTable-Protocol.h>

@protocol MTLBuffer;

@protocol MTLIntersectionFunctionTableSPI <MTLIntersectionFunctionTable>
@property(readonly) unsigned long long gpuHandle;
- (unsigned long long)bufferAddressAtIndex:(unsigned long long)arg1;

@optional
@property(nonatomic) unsigned long long globalBufferOffset;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(retain, nonatomic) id <MTLBuffer> globalBuffer;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<MTLBuffer>",?,&,N

@property(readonly) unsigned long long uniqueIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R

@property(readonly, nonatomic) unsigned long long resourceIndex;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@end

