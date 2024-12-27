//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SetupAssistantUI/BFFNavigationFlowDelegate-Protocol.h>
#import <SetupAssistantUI/NSObject-Protocol.h>

@protocol BFFFlowItem;

@protocol BFFFlowItemDelegate <NSObject, BFFNavigationFlowDelegate>
- (void)flowItemDone:(id <BFFFlowItem>)arg1 nextItemClass:(Class)arg2;
- (void)flowItemDone:(id <BFFFlowItem>)arg1 nextItem:(id <BFFFlowItem>)arg2;
- (void)flowItemDone:(id <BFFFlowItem>)arg1;
- (void)flowItemCancelled:(id <BFFFlowItem>)arg1;

@optional
- (void)presentWiFiPaneForFlowItem:(id <BFFFlowItem>)arg1;
@end

