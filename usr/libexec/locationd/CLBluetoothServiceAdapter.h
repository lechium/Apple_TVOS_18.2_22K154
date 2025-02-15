//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLBluetoothServiceAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x002000000089c8b0
+ (id)getSilo;	// IMP=0x001000000089c69c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000089c683
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000089c626
- (void)fetchIsBluetoothPoweredWithReply:(CDUnknownBlockType)arg1;	// IMP=0x002000000089c95c
- (void)scan;	// IMP=0x001000000089c949
- (_Bool)syncgetHasConnectedDevices;	// IMP=0x001000000089c92b
- (void)fetchHasConnectedDevicesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000089c8f6
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000089c888
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000089c85b
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000089c833
- (void *)adaptee;	// IMP=0x001000000089c800
- (void)endService;	// IMP=0x001000000089c7e5
- (void)beginService;	// IMP=0x001000000089c735
- (id)init;	// IMP=0x001000000089c6f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

