//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ADDeviceSyncMessagingService;

@interface ADDeviceSyncMessageSender : NSObject
{
    id <ADDeviceSyncMessagingService> _messagingService;	// 8 = 0x8
    NSString *_deviceIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002974bb
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002973ed
- (id)initWithDeviceIdentifier:(id)arg1 messagingService:(id)arg2;	// IMP=0x0010000000297349

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

