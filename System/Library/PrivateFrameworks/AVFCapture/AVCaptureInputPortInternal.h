//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureInput, NSString;

__attribute__((visibility("hidden")))
@interface AVCaptureInputPortInternal : NSObject
{
    AVCaptureInput *input;	// 8 = 0x8
    NSString *mediaType;	// 16 = 0x10
    struct opaqueCMFormatDescription *formatDescription;	// 24 = 0x18
    struct OpaqueCMClock *clock;	// 32 = 0x20
    _Bool enabled;	// 40 = 0x28
    int changeSeed;	// 44 = 0x2c
    NSString *sourceID;	// 48 = 0x30
    NSString *sourceDeviceType;	// 56 = 0x38
    long long sourceDevicePosition;	// 64 = 0x40
}

- (void)dealloc;	// IMP=0x000000000007408f
- (id)init;	// IMP=0x0000000000074057

@end

