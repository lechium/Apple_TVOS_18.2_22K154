//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, TKSlotServer;
@protocol TKProtocolSlotClientNotification;

@interface TKSlotClient : NSObject
{
    TKSlotServer *_server;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSString *_slotType;	// 24 = 0x18
}

+ (_Bool)handleConnection:(id)arg1 server:(id)arg2;	// IMP=0x002000000000dac4
- (void).cxx_destruct;	// IMP=0x002000000000dd8d
@property(readonly, nonatomic) NSString *slotType; // @synthesize slotType=_slotType;
- (void)dealloc;	// IMP=0x001000000000dd29
@property(readonly, nonatomic) id <TKProtocolSlotClientNotification> notification;
- (void)reportChangesForSlotType:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000db9f

@end

