//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKCAContextDestination, BKSHIDEventBaseAttributes;

@interface BKHIDCollectedEvent : NSObject
{
    struct __IOHIDEvent *_event;	// 8 = 0x8
    BKSHIDEventBaseAttributes *_attributes;	// 16 = 0x10
    BKCAContextDestination *_context;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001ea6e
- (void)dealloc;	// IMP=0x001000000001ea2f

@end

