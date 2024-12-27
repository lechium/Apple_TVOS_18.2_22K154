//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSMutableArray, PDFPageIconLayer, PDFThumbnailView;

__attribute__((visibility("hidden")))
@interface PDFIconsView : UIView
{
    PDFThumbnailView *_thumbnailView;	// 8 = 0x8
    NSMutableArray *_icons;	// 16 = 0x10
    PDFPageIconLayer *_activeIcon;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006e43d
- (void)_updateScrubberForPageIndex:(int)arg1 goToPage:(_Bool)arg2;	// IMP=0x000000000006db9c
- (void)_updateScrubberAtViewLocation:(struct CGPoint)arg1;	// IMP=0x000000000006d906
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000006d8f4
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000006d898
- (struct CGSize)_iconsLayoutSize;	// IMP=0x000000000006d7b4
- (int)_iconsLayoutIconCount;	// IMP=0x000000000006d5e3
- (void)layoutSubviews;	// IMP=0x000000000006cda6
- (void)pageChanged:(id)arg1;	// IMP=0x000000000006cb37
- (void)currentPageChanged:(id)arg1;	// IMP=0x000000000006ca6f
- (void)documentMutated:(id)arg1;	// IMP=0x000000000006ca41
- (void)documentChanged:(id)arg1;	// IMP=0x000000000006ca2f
- (id)currentPage;	// IMP=0x000000000006c99f
- (void)updateIconsImages;	// IMP=0x000000000006c870
- (id)initFromThumbnailView:(id)arg1;	// IMP=0x000000000006c79f

@end

