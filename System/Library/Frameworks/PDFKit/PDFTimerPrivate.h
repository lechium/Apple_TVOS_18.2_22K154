//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSInvocation, NSTimer;

__attribute__((visibility("hidden")))
@interface PDFTimerPrivate : NSObject
{
    NSObject *target;	// 8 = 0x8
    NSInvocation *methodInvocation;	// 16 = 0x10
    NSTimer *timer;	// 24 = 0x18
    double timeInterval;	// 32 = 0x20
    _Bool isRequested;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000008b621

@end

