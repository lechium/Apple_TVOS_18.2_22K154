//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, TVSBluetoothRemoteInfo;
@protocol TVSSBluetoothRemoteManagingDelegate;

@interface TVSSBluetoothRemoteManager : NSObject
{
    id <TVSSBluetoothRemoteManagingDelegate> _delegate;	// 8 = 0x8
}

+ (MISSING_TYPE *)sharedInstance;	// IMP=0x00200000000cfd30
- (void).cxx_destruct;	// IMP=0x00200000000d05d0
@property(nonatomic) __weak id <TVSSBluetoothRemoteManagingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegate;	// IMP=0x00100000000d0510
@property(readonly, nonatomic) TVSBluetoothRemoteInfo *connectedBluetoothRemote;
- (void)_handleBluetoothRemotePowerSourceLimitedSourceDidChangeNotification:(id)arg1;	// IMP=0x00100000000d03e0
- (void)_handleBluetoothRemotePowerSourceInfoDidChangeNotification:(id)arg1;	// IMP=0x00100000000d02e0
- (void)_handleBluetoothRemoteDidDisconnectNotification:(id)arg1;	// IMP=0x00100000000d01e0
- (void)_handleBluetoothRemoteDidConnectNotification:(id)arg1;	// IMP=0x00100000000d00e0
- (void)dealloc;	// IMP=0x00100000000cffc0
- (id)init;	// IMP=0x00100000000cfe20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

