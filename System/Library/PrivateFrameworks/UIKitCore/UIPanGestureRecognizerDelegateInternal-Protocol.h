//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class UIEvent, UIPanGestureRecognizer;

@protocol UIPanGestureRecognizerDelegateInternal <UIGestureRecognizerDelegate>

@optional
- (_Bool)_panGestureRecognizer:(UIPanGestureRecognizer *)arg1 shouldTryToBeginVerticallyWithEvent:(UIEvent *)arg2;
- (_Bool)_panGestureRecognizer:(UIPanGestureRecognizer *)arg1 shouldTryToBeginHorizontallyWithEvent:(UIEvent *)arg2;
@end

