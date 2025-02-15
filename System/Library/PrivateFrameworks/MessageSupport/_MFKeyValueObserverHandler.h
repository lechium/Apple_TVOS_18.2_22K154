//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MFKeyValueObserverHandler : NSObject
{
    id _object;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    CDUnknownBlockType _block;	// 24 = 0x18
    _Bool _observing;	// 32 = 0x20
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000022d0
- (void)stopObserving;	// IMP=0x0000000000002297
- (void)startObservingWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000002261
- (void)dealloc;	// IMP=0x000000000000220a
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002189

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

