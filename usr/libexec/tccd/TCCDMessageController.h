//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface TCCDMessageController : NSObject
{
    NSMutableDictionary *_messageTypesToHandlers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedMessageControllerForCurrentPlatform;	// IMP=0x0040000000003d4f
- (void).cxx_destruct;	// IMP=0x0020000000004291
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *messageTypesToHandlers; // @synthesize messageTypesToHandlers=_messageTypesToHandlers;
- (void)_makeReadyToReceiveMessages;	// IMP=0x0010000000004245
- (void)_sendMessage:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004213
- (void)sendMessage:(id)arg1 ofType:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004103
- (void)setIncomingMessageType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003e42
- (id)init;	// IMP=0x0010000000003d7c

@end

