//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, VUILegacyCollectionView;

@protocol VUILegacyCollectionViewDelegate <UICollectionViewDelegate>

@optional
- (_Bool)collectionViewCanBecomeFocused:(VUILegacyCollectionView *)arg1;
- (void)collectionView:(VUILegacyCollectionView *)arg1 didReceiveLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(VUILegacyCollectionView *)arg1 shouldHandleLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(VUILegacyCollectionView *)arg1 didReceivePhysicalPlayForItemAtIndexPath:(NSIndexPath *)arg2;
@end

