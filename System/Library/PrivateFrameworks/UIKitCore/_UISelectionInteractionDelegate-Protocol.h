//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UISelectionInteraction;

@protocol _UISelectionInteractionDelegate <NSObject>
- (void)_selectionInteractionDidSelect:(_UISelectionInteraction *)arg1;

@optional
- (_Bool)_selectionInteractionShouldBegin:(_UISelectionInteraction *)arg1;
- (void)_selectionInteractionDidCancelHinting:(_UISelectionInteraction *)arg1;
- (void)_selectionInteractionDidBeginHinting:(_UISelectionInteraction *)arg1;
@end

