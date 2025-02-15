//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, TIImageCacheClient, _UIActionWhenIdle;

__attribute__((visibility("hidden")))
@interface UIKeyboardCache : NSObject
{
    TIImageCacheClient *_store;	// 8 = 0x8
    NSSet *_layouts;	// 16 = 0x10
    NSMutableSet *_activeRenderers;	// 24 = 0x18
    _UIActionWhenIdle *_idleAction;	// 32 = 0x20
}

+ (_Bool)enabledForTraitCollection:(id)arg1;	// IMP=0x0060000000d07e27
+ (_Bool)enabled;	// IMP=0x0060000000d07cc8
+ (id)sharedInstance;	// IMP=0x0060000000d07c8b
- (void).cxx_destruct;	// IMP=0x0000000000d0aac1
@property(retain, nonatomic) _UIActionWhenIdle *idleAction; // @synthesize idleAction=_idleAction;
- (void)decrementExpectedRender:(id)arg1;	// IMP=0x0000000000d0a9c6
- (void)incrementExpectedRender:(id)arg1;	// IMP=0x0000000000d0a948
- (void)updateCacheForInputModes:(id)arg1;	// IMP=0x0000000000d0a7cd
- (id)uniqueLayoutsFromInputModes:(id)arg1;	// IMP=0x0000000000d0a627
- (void)_didIdleAndShouldWait;	// IMP=0x0000000000d0a5b2
- (void)_didIdle;	// IMP=0x0000000000d0a581
- (id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3;	// IMP=0x0000000000d08cec
- (void)drawCachedImage:(id)arg1 alpha:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x0000000000d08b8c
- (struct CGImage *)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3;	// IMP=0x0000000000d08439
- (struct CGImage *)cachedImageForKey:(id)arg1 fromLayout:(id)arg2 traitCollection:(id)arg3;	// IMP=0x0000000000d0835e
- (struct CGImage *)cachedImageForKey:(id)arg1 fromLayout:(id)arg2;	// IMP=0x0000000000d081c8
- (void)purge;	// IMP=0x0000000000d081b2
- (void)clearNonPersistentCache;	// IMP=0x0000000000d08199
- (void)commitTransaction;	// IMP=0x0000000000d08180
- (void)dealloc;	// IMP=0x0000000000d080f5
- (id)init;	// IMP=0x0000000000d07f0b

@end

