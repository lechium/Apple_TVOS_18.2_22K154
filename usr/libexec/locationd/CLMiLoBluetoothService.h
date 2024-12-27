//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLMiLoBluetoothClient, NSString;

@interface CLMiLoBluetoothService : CLIntersiloService
{
    CLMiLoBluetoothClient *_bluetoothClient;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x00200000005a4ba1
+ (id)getSilo;	// IMP=0x00100000005a4b45
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000005a4b2c
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000005a4acf
- (void)endService;	// IMP=0x00200000005a4fca
- (void)beginService;	// IMP=0x00100000005a4eb8
- (id)init;	// IMP=0x00100000005a4e7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

