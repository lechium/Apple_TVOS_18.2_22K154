//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputUI/NSObject-Protocol.h>

@class NSLocale, TUIAssistantButtonBarView, UIBarButtonItemGroup, UITextInputAssistantItem, _UIButtonBarButton;

@protocol TUIAssistantButtonBarViewDelegate <NSObject>
@property(readonly, nonatomic) UITextInputAssistantItem *inputAssistantItem;
@property(retain, nonatomic) NSLocale *locale;
- (void)assistantButtonBarView:(TUIAssistantButtonBarView *)arg1 wantsToShowCollapsedItemGroup:(UIBarButtonItemGroup *)arg2 fromButton:(_UIButtonBarButton *)arg3;
@end

