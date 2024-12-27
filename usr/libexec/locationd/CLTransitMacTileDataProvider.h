//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString;

@interface CLTransitMacTileDataProvider : CLIntersiloService
{
    struct unique_ptr<CLDarwinNotifier_Type::Client, std::default_delete<CLDarwinNotifier_Type::Client>> _darwinNotifierClient;	// 8 = 0x8
}

+ (id)getSilo;	// IMP=0x0020000000664515
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000006644fc
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000066449f
- (id).cxx_construct;	// IMP=0x0020000000665452
- (void).cxx_destruct;	// IMP=0x001000000066542a
- (void)onDarwinNotifierNotification:(int)arg1 data:(CDStruct_2920cfb7)arg2;	// IMP=0x0010000000664b43
- (void)fetchMacAddressesAmong:(CDUnknownBlockType)arg1 nearLatitude:(double)arg2 longitude:(double)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x00100000006649b7
- (void)endService;	// IMP=0x0010000000664812
- (void)beginService;	// IMP=0x00100000006645ae
- (id)init;	// IMP=0x0010000000664571

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

