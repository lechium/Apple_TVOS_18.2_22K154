//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

__attribute__((visibility("hidden")))
@interface IPXPCEventSubscriptionBlackhole : NSObject
{
    NSString *_streamName;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_xpc_event_publisher> *_publisher;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000005b92
- (void)resume;	// IMP=0x000000000000598e
- (id)initWithStreamName:(id)arg1;	// IMP=0x00000000000058d8

@end

