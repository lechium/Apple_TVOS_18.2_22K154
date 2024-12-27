//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AXIPCServerMessageHandlerContext : NSObject
{
    _Bool _async;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    id _target;	// 24 = 0x18
    SEL _selector;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000267ee
@property(readonly, nonatomic) _Bool async; // @synthesize async=_async;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 async:(_Bool)arg3;	// IMP=0x0000000000026727
- (id)initWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000266a1

@end

