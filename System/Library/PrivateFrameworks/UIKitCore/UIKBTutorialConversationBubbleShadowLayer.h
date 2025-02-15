//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAShapeLayer.h>

__attribute__((visibility("hidden")))
@interface UIKBTutorialConversationBubbleShadowLayer : CAShapeLayer
{
    long long _shadowType;	// 8 = 0x8
    long long _userInterfaceStyle;	// 16 = 0x10
}

@property(nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(readonly, nonatomic) long long shadowType; // @synthesize shadowType=_shadowType;
- (struct CGSize)_offsetForShadowStyle:(long long)arg1;	// IMP=0x000000000156b765
- (double)_radiusForShadowStyle:(long long)arg1;	// IMP=0x000000000156b73e
- (double)_opacityForShadowStyle:(long long)arg1;	// IMP=0x000000000156b717
- (long long)_shadowStyleForShadowType:(long long)arg1 userInterfaceStyle:(long long)arg2;	// IMP=0x000000000156b6ec
- (void)_updateShadowProperties;	// IMP=0x000000000156b64e
- (id)initWithShadowType:(long long)arg1;	// IMP=0x000000000156b56a

@end

