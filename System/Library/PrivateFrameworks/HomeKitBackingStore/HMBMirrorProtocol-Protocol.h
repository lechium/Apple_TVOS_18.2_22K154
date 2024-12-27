//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/NSObject-Protocol.h>

@class HMBLocalZone, HMBProcessingOptions, NAFuture;
@protocol HMBLocalZoneID;

@protocol HMBMirrorProtocol <NSObject>
@property(readonly, nonatomic) NAFuture *startUp;
@property(readonly, nonatomic) id <HMBLocalZoneID> zoneID;
- (NAFuture *)shutdown;
- (NAFuture *)flush;
- (NAFuture *)triggerOutputForOutputRow:(unsigned long long)arg1 options:(HMBProcessingOptions *)arg2;
- (NAFuture *)destroy;
- (void)startUpWithLocalZone:(HMBLocalZone *)arg1;
@end

