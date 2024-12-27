//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAccessQueueTimer;

__attribute__((visibility("hidden")))
@interface AXPostConnectionTask : NSObject
{
    _Bool _didTimeout;	// 8 = 0x8
    CDUnknownBlockType _postConnectionBlock;	// 16 = 0x10
    AXAccessQueueTimer *_timeoutTimer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002bfd6
@property(nonatomic) _Bool didTimeout; // @synthesize didTimeout=_didTimeout;
@property(retain, nonatomic) AXAccessQueueTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType postConnectionBlock; // @synthesize postConnectionBlock=_postConnectionBlock;
- (void)_performTask;	// IMP=0x000000000002becb
- (void)performTask;	// IMP=0x000000000002be73
- (id)initWithConnectBlock:(CDUnknownBlockType)arg1 timeout:(double)arg2 accessQueue:(id)arg3;	// IMP=0x000000000002bcb4

@end

