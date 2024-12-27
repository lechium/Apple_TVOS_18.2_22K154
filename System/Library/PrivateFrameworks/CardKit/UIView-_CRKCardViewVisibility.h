//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString;
@protocol CRKComposableView;

@interface UIView (_CRKCardViewVisibility)
+ (struct CGSize)sizeThatFitsCardSection:(id)arg1 boundingSize:(struct CGSize)arg2;	// IMP=0x0010000000011fa9
- (_Bool)_crk_subviewIsVisible:(id)arg1;	// IMP=0x0010000000009ab3
- (_Bool)_crk_otherSubviewsOccludeSubview:(id)arg1;	// IMP=0x0010000000009853
- (void)removeFromComposedSuperview;	// IMP=0x0010000000011f5d
@property(nonatomic) __weak UIView<CRKComposableView> *composedSuperview; // @dynamic composedSuperview;
@property(copy, nonatomic) NSString *cardSectionViewIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

