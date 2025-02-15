//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TKPowerMonitor : NSObject
{
    struct IONotificationPort *_portRef;	// 8 = 0x8
    unsigned int _handle;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    _Bool _awaken;	// 32 = 0x20
    unsigned int _kernelPort;	// 36 = 0x24
}

+ (id)defaultMonitor;	// IMP=0x0060000000017d44
- (void).cxx_destruct;	// IMP=0x0000000000017dbf
@property _Bool awaken; // @synthesize awaken=_awaken;
@property unsigned int kernelPort; // @synthesize kernelPort=_kernelPort;
- (id)init;	// IMP=0x0000000000017c80

@end

