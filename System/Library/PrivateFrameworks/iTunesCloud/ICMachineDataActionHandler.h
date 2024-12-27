//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICMachineDataActionHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
}

+ (id)sharedHandler;	// IMP=0x00400000001d6f47
- (void).cxx_destruct;	// IMP=0x00000000001d6d72
- (void)processActionFromResponse:(id)arg1 withRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d6af7
- (void)processAction:(id)arg1 data:(id)arg2 withRequestContext:(id)arg3 version:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001d6832
- (id)init;	// IMP=0x00000000001d6779

@end

