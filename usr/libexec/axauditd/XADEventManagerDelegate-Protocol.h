//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXElement, AXUIElement, NSString, XADEventManager;

@protocol XADEventManagerDelegate
- (void)eventManager:(XADEventManager *)arg1 notificationReceived:(int)arg2 notification:(NSString *)arg3 traits:(NSString *)arg4 label:(NSString *)arg5 value:(NSString *)arg6 hint:(NSString *)arg7 identifier:(NSString *)arg8;
- (void)eventManager:(XADEventManager *)arg1 systemFocusDidMoveToElement:(AXElement *)arg2;
- (void)eventManager:(XADEventManager *)arg1 stoppedSnarfingEvents:(_Bool)arg2;
- (void)eventManager:(XADEventManager *)arg1 eventToHighlightElement:(AXUIElement *)arg2;
- (void)eventManager:(XADEventManager *)arg1 eventToHighlightPoint:(struct CGPoint)arg2;
@end

