//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol _UIUpdateHIDAbstractInput;

__attribute__((visibility("hidden")))
@interface _UIEventBus : NSObject
{
    NSMutableArray *_events;	// 8 = 0x8
    id <_UIUpdateHIDAbstractInput> _inputs[3];	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000011f4d86
- (id)init;	// IMP=0x00000000011f4530

@end

