//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MTLSimDriver/MTLHeap-Protocol.h>

@class MTLResourceAddressRangeArray, NSString;
@protocol MTLAccelerationStructure;

@protocol MTLHeapSPI <MTLHeap>
@property(readonly) unsigned long long unfilteredResourceOptions;
- (id <MTLAccelerationStructure>)newAccelerationStructureWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2 resourceIndex:(unsigned long long)arg3;
- (id <MTLAccelerationStructure>)newAccelerationStructureWithSize:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;
- (NSString *)formattedDescription:(unsigned long long)arg1;

@optional
@property(readonly, nonatomic) unsigned long long protectionOptions;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@property(readonly, nonatomic) unsigned long long gpuAddress;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

- (_Bool)replaceBackingWithRanges:(MTLResourceAddressRangeArray *)arg1 readOnly:(_Bool)arg2;
- (_Bool)detachBacking;
@end

