//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol OS_dispatch_queue;

@interface IDSPushHandlerContext : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSSet *_topics;	// 16 = 0x10
    NSSet *_commands;	// 24 = 0x18
    NSSet *_wakingTopics;	// 32 = 0x20
    NSSet *_opportunisticTopics;	// 40 = 0x28
    NSSet *_nonWakingTopics;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000c73f0
@property(copy, nonatomic) NSSet *commands; // @synthesize commands=_commands;
@property(retain, nonatomic) NSSet *nonWakingTopics; // @synthesize nonWakingTopics=_nonWakingTopics;
@property(retain, nonatomic) NSSet *opportunisticTopics; // @synthesize opportunisticTopics=_opportunisticTopics;
@property(retain, nonatomic) NSSet *wakingTopics; // @synthesize wakingTopics=_wakingTopics;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)initWithQueue:(id)arg1 wakingTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4 commands:(id)arg5;	// IMP=0x00000000000c721f

@end

