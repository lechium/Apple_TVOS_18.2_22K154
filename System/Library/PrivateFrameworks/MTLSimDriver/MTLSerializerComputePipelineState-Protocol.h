//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MTLSimDriver/MTLSerializerState-Protocol.h>

@protocol MTLSerializerComputePipelineState <MTLSerializerState>
- (unsigned int)pipelineRef;

@optional
- (void)getWritableInfo:(unsigned int)arg1 buffers:(unsigned int *)arg2 texturesArrayLength:(unsigned int)arg3 textures:(unsigned int *)arg4;
@end

