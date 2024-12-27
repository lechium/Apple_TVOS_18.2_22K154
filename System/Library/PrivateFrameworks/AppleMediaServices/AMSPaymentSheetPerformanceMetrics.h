//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSBag;

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetPerformanceMetrics : NSObject
{
    double _primaryDataResponseStartTime;	// 8 = 0x8
    double _primaryDataResponseEndTime;	// 16 = 0x10
    double _primaryDataParseStartTime;	// 24 = 0x18
    double _primaryDataParseEndTime;	// 32 = 0x20
    double _resourceRequestStartTime;	// 40 = 0x28
    double _resourceRequestEndTime;	// 48 = 0x30
    AMSBag *_bag;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000466739
@property(readonly, nonatomic) AMSBag *bag; // @synthesize bag=_bag;
@property(nonatomic) double resourceRequestEndTime; // @synthesize resourceRequestEndTime=_resourceRequestEndTime;
@property(nonatomic) double resourceRequestStartTime; // @synthesize resourceRequestStartTime=_resourceRequestStartTime;
@property(nonatomic) double primaryDataParseEndTime; // @synthesize primaryDataParseEndTime=_primaryDataParseEndTime;
@property(nonatomic) double primaryDataParseStartTime; // @synthesize primaryDataParseStartTime=_primaryDataParseStartTime;
@property(nonatomic) double primaryDataResponseEndTime; // @synthesize primaryDataResponseEndTime=_primaryDataResponseEndTime;
@property(nonatomic) double primaryDataResponseStartTime; // @synthesize primaryDataResponseStartTime=_primaryDataResponseStartTime;
- (void)enqueueMetricsEventWithOverlay:(id)arg1;	// IMP=0x00000000004662ea
- (id)initWithBag:(id)arg1;	// IMP=0x000000000046627f

@end

