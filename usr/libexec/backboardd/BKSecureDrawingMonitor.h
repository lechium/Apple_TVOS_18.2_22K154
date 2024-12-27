//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface BKSecureDrawingMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_reportingQueue;	// 8 = 0x8
    _Bool _secureModeEnabled;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000004a092
- (void).cxx_destruct;	// IMP=0x00200000000499d9
@property(getter=isSecureModeEnabled) _Bool secureModeEnabled; // @synthesize secureModeEnabled=_secureModeEnabled;
- (void)reportAndKillInsecureProcesses;	// IMP=0x001000000004950f
- (void)startMonitoringSecureDrawing;	// IMP=0x00100000000494bc
- (id)init;	// IMP=0x0010000000049407

@end

