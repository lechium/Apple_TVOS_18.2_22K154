//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceDiscoveryUICore/NSObject-Protocol.h>

@class DDUIPairCompleteMessage, NSDictionary, NSUUID;
@protocol DDUIDevice;

@protocol DDUIEndpointPairingSession <NSObject>
@property(retain, nonatomic) NSDictionary *incomingMessage;
@property(nonatomic) unsigned long long sessionType;
@property(readonly, nonatomic) id <DDUIDevice> remoteDevice;
@property(readonly, nonatomic) NSUUID *sessionID;
- (void)invalidate;
- (void)cancelWithMessage:(DDUIPairCompleteMessage *)arg1;
@end

