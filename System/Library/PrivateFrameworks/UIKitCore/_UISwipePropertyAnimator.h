//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewPropertyAnimator.h"

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface _UISwipePropertyAnimator : UIViewPropertyAnimator
{
    NSHashTable *_viewsToAnimateAdditively;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000ea6d78
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ea6d0e
- (void)addViewsToAnimateAdditively:(id)arg1;	// IMP=0x0000000000ea6b5e
- (_Bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000000ea6b41

@end

