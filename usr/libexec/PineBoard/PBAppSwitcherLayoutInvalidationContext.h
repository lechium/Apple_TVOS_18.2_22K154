//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@class NSIndexPath;

@interface PBAppSwitcherLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
{
    double _swipeUpProgress;	// 8 = 0x8
    NSIndexPath *_swipeUpItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a0245
@property(copy, nonatomic) NSIndexPath *swipeUpItem; // @synthesize swipeUpItem=_swipeUpItem;
@property(nonatomic) double swipeUpProgress; // @synthesize swipeUpProgress=_swipeUpProgress;

@end

