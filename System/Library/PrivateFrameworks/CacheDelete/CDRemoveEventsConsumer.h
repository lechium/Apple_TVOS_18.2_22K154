//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CDRemoveEventsConsumer : NSObject
{
    _Bool _historyDone;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    CDUnknownBlockType _consumer;	// 24 = 0x18
    struct __FSEventStream *_stream;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *_sem;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_consumer_q;	// 48 = 0x30
    NSString *_volume;	// 56 = 0x38
    struct fsid _fsid;	// 64 = 0x40
    unsigned long long _since;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000002bc66
@property unsigned long long since; // @synthesize since=_since;
@property struct fsid fsid; // @synthesize fsid=_fsid;
@property _Bool historyDone; // @synthesize historyDone=_historyDone;
@property(retain, nonatomic) NSString *volume; // @synthesize volume=_volume;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *consumer_q; // @synthesize consumer_q=_consumer_q;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // @synthesize sem=_sem;
@property struct __FSEventStream *stream; // @synthesize stream=_stream;
@property(copy, nonatomic) CDUnknownBlockType consumer; // @synthesize consumer=_consumer;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)consumeStream:(struct __FSEventStream *)arg1 forVolume:(id)arg2;	// IMP=0x000000000002b6c1
- (void)callback:(id)arg1;	// IMP=0x000000000002a9d5
- (void)dealloc;	// IMP=0x000000000002a95e
- (id)initWithConsumer:(CDUnknownBlockType)arg1 identifier:(id)arg2;	// IMP=0x000000000002a871

@end

