//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface RTDarwinNotificationRecord : NSObject
{
    NSString *_notificationName;	// 8 = 0x8
    NSNumber *_registrationToken;	// 16 = 0x10
    CDUnknownBlockType _handler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000829a4
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSNumber *registrationToken; // @synthesize registrationToken=_registrationToken;
@property(copy, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (id)initWithNotificationName:(id)arg1 registrationToken:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000008271e
- (id)init;	// IMP=0x00000000000826ef

@end

