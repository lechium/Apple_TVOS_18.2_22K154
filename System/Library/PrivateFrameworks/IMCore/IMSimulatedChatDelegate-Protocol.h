//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/NSObject-Protocol.h>

@class IMMessageItem, IMSimulatedChat;

@protocol IMSimulatedChatDelegate <NSObject>
- (void)simulatedChat:(IMSimulatedChat *)arg1 didHandleItem:(IMMessageItem *)arg2;
- (void)simulatedChat:(IMSimulatedChat *)arg1 didSendMessage:(IMMessageItem *)arg2;
@end

