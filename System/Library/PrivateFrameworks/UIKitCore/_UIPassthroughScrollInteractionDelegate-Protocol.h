//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIEvent, _UIPassthroughScrollInteraction;

@protocol _UIPassthroughScrollInteractionDelegate <NSObject>
- (_Bool)passthroughScrollInteractionDidRecognize:(_UIPassthroughScrollInteraction *)arg1;
- (_Bool)passthroughScrollInteraction:(_UIPassthroughScrollInteraction *)arg1 shouldInteractAtLocation:(struct CGPoint)arg2 withEvent:(UIEvent *)arg3;
@end

