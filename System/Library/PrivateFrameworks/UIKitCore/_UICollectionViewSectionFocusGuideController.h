//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSMapTable, NSUUID, UICollectionView;

__attribute__((visibility("hidden")))
@interface _UICollectionViewSectionFocusGuideController : NSObject
{
    UICollectionView *_collectionView;	// 8 = 0x8
    NSMapTable *_focusGuideFromSectionMap;	// 16 = 0x10
    NSMapTable *_focusGuideToSectionMap;	// 24 = 0x18
    NSUUID *_lastUpdateIdentifier;	// 32 = 0x20
    NSIndexPath *_focusedIndexPath;	// 40 = 0x28
    long long _pivotSection;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000b40709
@property(nonatomic) long long pivotSection; // @synthesize pivotSection=_pivotSection;
@property(retain, nonatomic) NSIndexPath *focusedIndexPath; // @synthesize focusedIndexPath=_focusedIndexPath;
@property(retain, nonatomic) NSUUID *lastUpdateIdentifier; // @synthesize lastUpdateIdentifier=_lastUpdateIdentifier;
@property(retain, nonatomic) NSMapTable *focusGuideToSectionMap; // @synthesize focusGuideToSectionMap=_focusGuideToSectionMap;
@property(retain, nonatomic) NSMapTable *focusGuideFromSectionMap; // @synthesize focusGuideFromSectionMap=_focusGuideFromSectionMap;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)_focusGuides;	// IMP=0x0000000000b405dd
- (struct CGRect)_sectionEndFrameForSection:(long long)arg1 layout:(id)arg2;	// IMP=0x0000000000b4021c
- (struct CGRect)_sectionFrameForSection:(long long)arg1 layout:(id)arg2;	// IMP=0x0000000000b40126
- (void)_layoutSectionFocusGuide:(id)arg1 forSection:(long long)arg2 withFrame:(struct CGRect)arg3;	// IMP=0x0000000000b3fea1
- (void)_layoutSectionFocusGuide:(id)arg1 forSection:(long long)arg2 inLayout:(id)arg3;	// IMP=0x0000000000b3fe1d
- (void)_removeSectionFocusGuidesForSection:(long long)arg1;	// IMP=0x0000000000b3fb9e
- (void)_updateSectionEndFocusGuideForSection:(long long)arg1 inPackage:(id)arg2 layout:(id)arg3;	// IMP=0x0000000000b3f9a0
- (id)_createOrUpdateSectionFocusGuidePackageForSection:(long long)arg1;	// IMP=0x0000000000b3f4f4
- (id)_sectionFocusGuidePackageForSection:(long long)arg1;	// IMP=0x0000000000b3f45a
- (id)_sectionsToLoad;	// IMP=0x0000000000b3f263
- (void)_updatePivotSection;	// IMP=0x0000000000b3efca
- (void)cleanupSectionFocusGuides;	// IMP=0x0000000000b3edc8
- (void)updateFocusedIndexPath:(id)arg1 immediatelyReevaluatePivotIndex:(_Bool)arg2;	// IMP=0x0000000000b3ecbe
- (void)updateFocusedIndexPath:(id)arg1;	// IMP=0x0000000000b3eca7
- (void)reloadSectionFocusGuides;	// IMP=0x0000000000b3ea79
- (void)performLayout;	// IMP=0x0000000000b3e6a2
- (id)initWithCollectionView:(id)arg1;	// IMP=0x0000000000b3e5cf

@end

