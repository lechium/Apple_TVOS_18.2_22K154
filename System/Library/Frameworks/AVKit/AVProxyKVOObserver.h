//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface AVProxyKVOObserver : NSObject
{
    id _retainedObservedObject;	// 8 = 0x8
    id _unsafeUnretainedObservedObject;	// 16 = 0x10
    _Bool _canHandleChanges;	// 24 = 0x18
    _Bool _includeInitialValue;	// 25 = 0x19
    _Bool _includeChanges;	// 26 = 0x1a
    NSString *_token;	// 32 = 0x20
    NSSet *_keyPaths;	// 40 = 0x28
    CDUnknownBlockType _changesBlock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000015d96a
@property(readonly, nonatomic) CDUnknownBlockType changesBlock; // @synthesize changesBlock=_changesBlock;
@property(readonly, nonatomic) NSSet *keyPaths; // @synthesize keyPaths=_keyPaths;
@property(readonly, nonatomic) _Bool includeChanges; // @synthesize includeChanges=_includeChanges;
@property(readonly, nonatomic) _Bool includeInitialValue; // @synthesize includeInitialValue=_includeInitialValue;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
- (void)_handleValueChangeForKeyPath:(id)arg1 ofObject:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4 context:(void *)arg5;	// IMP=0x000000000015d856
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000015d73a
- (void)stopObserving;	// IMP=0x000000000015d5d7
- (void)startObserving:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000015d242
- (id)initWithObservedObject:(id)arg1 observer:(id)arg2 keyPaths:(id)arg3 retainingObservedObject:(_Bool)arg4 includeInitialValue:(_Bool)arg5 includeChanges:(_Bool)arg6 changesBlock:(CDUnknownBlockType)arg7;	// IMP=0x000000000015d0e3

@end

