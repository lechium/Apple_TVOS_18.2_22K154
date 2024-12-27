//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLPressureCalibrationDatabaseAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000008e6e50
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000008e6e37
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000008e6dda
+ (_Bool)isSupported;	// IMP=0x00100000008e706f
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00200000008e7047
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000008e701a
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000008e6ff2
- (void *)adaptee;	// IMP=0x00100000008e6fbc
- (void)endService;	// IMP=0x00100000008e6fa1
- (void)beginService;	// IMP=0x00100000008e6ee9
- (id)init;	// IMP=0x00100000008e6eac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

