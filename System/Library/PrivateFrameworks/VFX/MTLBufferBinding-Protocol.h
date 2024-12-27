//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/MTLBinding-Protocol.h>

@class MTLPointerType, MTLStructType;

@protocol MTLBufferBinding <MTLBinding>
@property(readonly) MTLPointerType *bufferPointerType;
@property(readonly) MTLStructType *bufferStructType;
@property(readonly) unsigned long long bufferDataType;
@property(readonly) unsigned long long bufferDataSize;
@property(readonly) unsigned long long bufferAlignment;
@end

