//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface RTObserverRecord : NSObject
{
    id _observer;	// 8 = 0x8
    SEL _selector;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001e6ae8
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
- (id)initWithObserver:(id)arg1 selector:(SEL)arg2;	// IMP=0x00000000001e6a3e

@end

