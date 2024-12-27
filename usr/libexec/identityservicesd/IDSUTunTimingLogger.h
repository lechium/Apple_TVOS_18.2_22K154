//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface IDSUTunTimingLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_timingEvents;	// 16 = 0x10
    double _lastPrintTime;	// 24 = 0x18
}

+ (id)kernelTestEventWithTimestamp:(double)arg1 kernelTime:(double)arg2 bytes:(long long)arg3;	// IMP=0x00400000003cab7e
+ (id)incomingEventWithTimestamp:(double)arg1 duration:(double)arg2 processTime:(double)arg3 compressionTime:(double)arg4 kernelTime:(double)arg5 bytes:(long long)arg6;	// IMP=0x00100000003cab13
+ (id)outgoingEventWithTimestamp:(double)arg1 duration:(double)arg2 processTime:(double)arg3 compressionTime:(double)arg4 sendTime:(double)arg5 bytes:(long long)arg6;	// IMP=0x00100000003caaa8
- (void).cxx_destruct;	// IMP=0x00200000003caf45
- (void)printCurrent;	// IMP=0x00100000003cace2
- (void)addEvent:(id)arg1;	// IMP=0x00100000003cabcb
- (id)init;	// IMP=0x00100000003caa0f

@end

