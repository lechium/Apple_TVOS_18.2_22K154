//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class UICollectionViewCell, _TVCarouselView;

@protocol TVCarouselViewDataSource <NSObject>
- (UICollectionViewCell *)carouselView:(_TVCarouselView *)arg1 cellForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInCarouselView:(_TVCarouselView *)arg1;
@end

