//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BannerKit/BNPresentableIdentifying-Protocol.h>
#import <BannerKit/BNPresentableUniquelyIdentifying-Protocol.h>

@protocol BNPresentableSpecifying <BNPresentableIdentifying, BNPresentableUniquelyIdentifying>
@property(readonly, nonatomic) struct UIEdgeInsets contentOutsets;
@property(readonly, nonatomic) struct CGSize preferredContentSize;
@property(readonly, nonatomic) long long presentableBehavior;
@property(readonly, nonatomic) long long contentBehavior;
@end

