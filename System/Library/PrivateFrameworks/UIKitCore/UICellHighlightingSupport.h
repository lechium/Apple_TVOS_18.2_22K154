//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UICellHighlightingSupport : NSObject
{
    struct __CFDictionary *_unhighlightedStates;	// 8 = 0x8
    id _cell;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005b792e
- (void)highlightView:(id)arg1;	// IMP=0x00000000005b7661
- (void)applyState:(unsigned long long)arg1 toView:(id)arg2;	// IMP=0x00000000005b7322
- (void)cacheState:(unsigned long long)arg1 forView:(id)arg2;	// IMP=0x00000000005b6f30
- (void)dealloc;	// IMP=0x00000000005b6ef1
- (id)initWithCell:(id)arg1;	// IMP=0x00000000005b6e12

@end

