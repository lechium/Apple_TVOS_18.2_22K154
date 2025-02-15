//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_os_log;

@interface GTLoopbackService : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000023ea7
- (void)echo:(id)arg1 repeat:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x0000000000023c4a
- (void)echo:(id)arg1 repeat:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023b11
- (void)echo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000239f3
- (id)echo:(id)arg1;	// IMP=0x00000000000238ff
- (id)init;	// IMP=0x0000000000023881

@end

