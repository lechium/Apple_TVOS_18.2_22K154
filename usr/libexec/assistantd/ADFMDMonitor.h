//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ADFMDMonitor : NSObject
{
    _Bool _isLostModeActive;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x004000000037167a
- (void).cxx_destruct;	// IMP=0x002000000037166a
- (_Bool)isLostModeActive;	// IMP=0x0010000000371661
- (_Bool)_fetchLostModeState;	// IMP=0x0010000000371659
- (void)dealloc;	// IMP=0x001000000037162a
- (id)init;	// IMP=0x00100000003714f2

@end

