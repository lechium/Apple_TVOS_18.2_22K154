//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;
@protocol AVOutputDeviceAuthorizationRequestImpl, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVOutputDeviceAuthorizationRequestInternal : NSObject
{
    id <AVOutputDeviceAuthorizationRequestImpl> impl;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *ivarAccessQueue;	// 16 = 0x10
    long long status;	// 24 = 0x18
    NSError *error;	// 32 = 0x20
}

@end

