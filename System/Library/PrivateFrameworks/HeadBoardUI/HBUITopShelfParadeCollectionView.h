//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionView.h>

@class CABasicAnimation, HBUITopShelfParadeCollectionViewLayout;

__attribute__((visibility("hidden")))
@interface HBUITopShelfParadeCollectionView : UICollectionView
{
    CABasicAnimation *_scrollAnimation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000540e
@property(readonly, nonatomic) CABasicAnimation *scrollAnimation; // @synthesize scrollAnimation=_scrollAnimation;
- (id)_customScrollAnimation;	// IMP=0x00000000000053a4
- (id)centerItemIndexPath;	// IMP=0x00000000000051ec
- (_Bool)itemAtIndexPathIsCloseToCenter:(id)arg1;	// IMP=0x0000000000005193
@property(readonly, nonatomic) HBUITopShelfParadeCollectionViewLayout *paradeLayout;
- (void)setParadeContentHidden:(_Bool)arg1 forVisibleItemsInSection:(long long)arg2;	// IMP=0x0000000000005114
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animation:(id)arg3;	// IMP=0x0000000000005079

@end

