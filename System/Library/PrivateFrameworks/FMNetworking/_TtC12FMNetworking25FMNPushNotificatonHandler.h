//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12FMNetworking25FMNPushNotificatonHandler : NSObject
{
    MISSING_TYPE *topic;	// 8 = 0x8
    MISSING_TYPE *namedDelegatePort;	// 24 = 0x18
    MISSING_TYPE *apsQueue;	// 40 = 0x28
    MISSING_TYPE *pendingTopicTokenFutures;	// 48 = 0x30
    MISSING_TYPE *topicAPSToken;	// 56 = 0x38
    MISSING_TYPE *publicAPSToken;	// 72 = 0x48
    MISSING_TYPE *_apsConnection;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_apsConnection;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000030b70
- (id)init;	// IMP=0x0000000000031450
- (void)dealloc;	// IMP=0x0000000000030b50
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000000031ef0
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x0000000000031ce0
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000000031be0

@end

