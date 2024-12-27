//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDTextEditingConnection, MRTextEditingSession, NSMutableSet, NSString, NSXPCListener, RTIInputSystemService, RTIInputSystemServiceSession;
@protocol MRDTextEditingServiceDelegate, OS_dispatch_queue;

@interface MRDTextEditingService : NSObject
{
    NSMutableSet *_connections;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    id <MRDTextEditingServiceDelegate> _delegate;	// 24 = 0x18
    RTIInputSystemService *_rtiService;	// 32 = 0x20
    NSXPCListener *_xpcListener;	// 40 = 0x28
    MRDTextEditingConnection *_activeConnection;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000126824
@property(retain, nonatomic) MRDTextEditingConnection *activeConnection; // @synthesize activeConnection=_activeConnection;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) RTIInputSystemService *rtiService; // @synthesize rtiService=_rtiService;
@property(nonatomic) __weak id <MRDTextEditingServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)textEditingDidDieForConnection:(id)arg1;	// IMP=0x0010000000126700
- (void)_textEditingDidEndForConnection:(id)arg1;	// IMP=0x0010000000126628
- (void)textEditingDidEndForConnection:(id)arg1;	// IMP=0x00100000001264d5
- (void)textEditingConnection:(id)arg1 attributesDidChange:(id)arg2;	// IMP=0x0010000000126329
- (void)textEditingConnection:(id)arg1 textDidChange:(id)arg2;	// IMP=0x001000000012617d
- (void)textEditingConnection:(id)arg1 didBeginEditingText:(id)arg2 withAttributes:(id)arg3;	// IMP=0x0010000000125e9a
- (void)inputSystemService:(id)arg1 didCreateInputSession:(id)arg2;	// IMP=0x0010000000125d81
@property(readonly, nonatomic) MRTextEditingSession *currentTextEditingSession;
@property(readonly, nonatomic) RTIInputSystemServiceSession *currentRTISession;
- (_Bool)handleTextInputMessage:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000125953
- (void)stop;	// IMP=0x0010000000125914
- (void)start;	// IMP=0x0010000000125822
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (void)dealloc;	// IMP=0x0010000000125782
- (id)init;	// IMP=0x00100000001256e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

