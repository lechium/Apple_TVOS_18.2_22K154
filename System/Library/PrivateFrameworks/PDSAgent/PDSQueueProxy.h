//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PDSQueueProxy : NSProxy
{
    id _target;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    unsigned long long _mode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000951b
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000009270
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000009211
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000091cf
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000009161
- (id)initWithTarget:(id)arg1 queue:(id)arg2 mode:(unsigned long long)arg3;	// IMP=0x0000000000008fdf

@end

