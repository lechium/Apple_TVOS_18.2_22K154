//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/SCROIOElementProtocol-Protocol.h>

@class CBCentralManager, CBPeripheral, NSString;

@protocol SCROIOBTLESerialElementProtocol <SCROIOElementProtocol>
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *address;
@property(readonly, nonatomic) CBPeripheral *peripheral;
@property(readonly, nonatomic) CBCentralManager *central;
@end

