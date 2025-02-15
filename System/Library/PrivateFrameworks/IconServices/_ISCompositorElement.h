//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol ISCompositorRecipe, ISCompositorResourceProvider;

__attribute__((visibility("hidden")))
@interface _ISCompositorElement : NSObject
{
    id <ISCompositorRecipe> _recipe;	// 8 = 0x8
    NSMutableDictionary *_resourceByName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001f909
@property(readonly) NSMutableDictionary *resourceByName; // @synthesize resourceByName=_resourceByName;
@property(retain) id <ISCompositorRecipe> recipe; // @synthesize recipe=_recipe;
- (id)resourceNamed:(id)arg1;	// IMP=0x000000000001f858
- (void)clearResources;	// IMP=0x000000000001f81f
- (void)addResourcesFromDictionary:(id)arg1;	// IMP=0x000000000001f7b6
- (void)setResource:(id)arg1 forName:(id)arg2;	// IMP=0x000000000001f712
@property(readonly) id <ISCompositorResourceProvider> resourceProvider;
- (id)initWithRecipe:(id)arg1 resources:(id)arg2;	// IMP=0x000000000001f64d
- (id)init;	// IMP=0x000000000001f5d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

