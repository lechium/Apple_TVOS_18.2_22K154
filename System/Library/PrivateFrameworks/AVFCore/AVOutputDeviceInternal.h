//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol AVOutputDeviceCommunicationChannelDelegate, AVOutputDeviceCommunicationChannelManager, AVOutputDeviceImpl;

__attribute__((visibility("hidden")))
@interface AVOutputDeviceInternal : NSObject
{
    id <AVOutputDeviceImpl> impl;	// 8 = 0x8
    NSString *name;	// 16 = 0x10
    NSString *ID;	// 24 = 0x18
    long long deviceType;	// 32 = 0x20
    long long deviceSubType;	// 40 = 0x28
    NSString *manufacturer;	// 48 = 0x30
    NSString *modelID;	// 56 = 0x38
    NSString *serialNumber;	// 64 = 0x40
    NSString *firmwareVersion;	// 72 = 0x48
    NSData *MACAddress;	// 80 = 0x50
    unsigned long long deviceFeatures;	// 88 = 0x58
    id <AVOutputDeviceCommunicationChannelDelegate> communicationChannelDelegate;	// 96 = 0x60
    id <AVOutputDeviceCommunicationChannelManager> commChannelManager;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000e3608

@end

