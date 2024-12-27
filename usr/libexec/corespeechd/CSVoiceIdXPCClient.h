//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface CSVoiceIdXPCClient : NSObject
{
    NSObject<OS_xpc_object> *_xpcConnection;	// 8 = 0x8
}

+ (void)notifyImplicitUtterance:(id)arg1 audioDeviceType:(id)arg2 audioRecordType:(id)arg3 voiceTriggerEventInfo:(id)arg4 otherCtxt:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00400000000ee425
- (void).cxx_destruct;	// IMP=0x00200000000ee3a1
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)_decodeError:(id)arg1;	// IMP=0x00100000000ee2bc
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ee169
- (void)_notifyImplicitUtterance:(id)arg1 audioDeviceType:(id)arg2 audioRecordType:(id)arg3 voiceTriggerEventInfo:(id)arg4 otherCtxt:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000edcb7
- (void)_handleListenerError:(id)arg1;	// IMP=0x00100000000edb39
- (void)_handleListenerEvent:(id)arg1;	// IMP=0x00100000000eda04
- (void)dealloc;	// IMP=0x00100000000ed9c6
- (void)disconnect;	// IMP=0x00100000000ed990
- (void)connect;	// IMP=0x00100000000ed8e1
- (id)init;	// IMP=0x00100000000ed882

@end

