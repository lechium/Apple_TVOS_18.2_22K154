//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIInteraction-Protocol.h>

@class UIWindow;
@protocol UIInteractionEffect;

@protocol UIInteraction_Private <UIInteraction>

@optional
@property(retain, nonatomic) id <UIInteractionEffect> interactionEffect;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<UIInteractionEffect>",?,&,N

- (void)_didMoveFromWindow:(UIWindow *)arg1 toWindow:(UIWindow *)arg2;
@end

