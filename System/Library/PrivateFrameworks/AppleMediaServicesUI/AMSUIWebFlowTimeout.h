//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSUIWebFlowTimeout : NSObject
{
    CDUnknownBlockType _enqueuedBlock;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSDate *_startTime;	// 32 = 0x20
    double _timeout;	// 40 = 0x28
    double _timeRemaining;	// 48 = 0x30
}

+ (id)timeoutWithTimeout:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00600000000925a1
- (void).cxx_destruct;	// IMP=0x0000000000092e02
@property(nonatomic) double timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) CDUnknownBlockType enqueuedBlock; // @synthesize enqueuedBlock=_enqueuedBlock;
- (void)reset;	// IMP=0x0000000000092c40
- (void)pause;	// IMP=0x0000000000092a11
- (void)start;	// IMP=0x0000000000092629
- (id)initWithTimeout:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000924e4

@end

