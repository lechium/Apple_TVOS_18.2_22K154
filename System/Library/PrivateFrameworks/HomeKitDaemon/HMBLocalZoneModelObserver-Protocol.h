//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMBLocalZone, HMBProcessingModelCreation, HMBProcessingModelDeletion, HMBProcessingModelUpdate, NAFuture;

@protocol HMBLocalZoneModelObserver <NSObject>
- (NAFuture *)localZone:(HMBLocalZone *)arg1 didProcessModelDeletion:(HMBProcessingModelDeletion *)arg2;
- (NAFuture *)localZone:(HMBLocalZone *)arg1 didProcessModelUpdate:(HMBProcessingModelUpdate *)arg2;
- (NAFuture *)localZone:(HMBLocalZone *)arg1 didProcessModelCreation:(HMBProcessingModelCreation *)arg2;
@end

