//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UNNotificationAction;

__attribute__((visibility("hidden")))
@interface CUUserNotificationCustomAction : NSObject
{
    UNNotificationAction *_action;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a4082
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) UNNotificationAction *action; // @synthesize action=_action;

@end

