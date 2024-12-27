//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSProgress, NSString, SDAirDropClient;
@protocol OS_os_transaction, SDAirDropSessionDelegate;

@interface SDAirDropSession : NSObject
{
    NSMutableArray *_airDropClients;	// 8 = 0x8
    _Bool;	// 16 = 0x10
    NSString *_clientBundleID;	// 24 = 0x18
    _Bool _conversionActive;	// 32 = 0x20
    _Bool _conversionNotified;	// 33 = 0x21
    _Bool _conversionObserver;	// 34 = 0x22
    NSProgress *_conversionProgress;	// 40 = 0x28
    NSMutableArray *_currentNames;	// 48 = 0x30
    NSDictionary *_discoveryMetrics;	// 56 = 0x38
    _Bool _hadConversion;	// 64 = 0x40
    NSArray *_items;	// 72 = 0x48
    long long _lastEvent;	// 80 = 0x50
    struct __SFNode *_person;	// 88 = 0x58
    NSProgress *_progress;	// 96 = 0x60
    _Bool _progressObserver;	// 104 = 0x68
    NSMutableDictionary *_properties;	// 112 = 0x70
    SDAirDropClient *_responseClient;	// 120 = 0x78
    NSMutableDictionary *_results;	// 128 = 0x80
    NSString *_rootNodeName;	// 136 = 0x88
    NSDictionary *_sandboxExtensions;	// 144 = 0x90
    NSMutableArray *_sandboxExtensionHandles;	// 152 = 0x98
    NSMutableArray *_siblingNodes;	// 160 = 0xa0
    NSProgress *_transferProgress;	// 168 = 0xa8
    NSObject<OS_os_transaction> *_transaction;	// 176 = 0xb0
    int _clientPid;	// 184 = 0xb8
    id <SDAirDropSessionDelegate> _delegate;	// 192 = 0xc0
    CDStruct_4c969caf _auditToken;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x002000000000b827
@property __weak id <SDAirDropSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property int clientPid; // @synthesize clientPid=_clientPid;
@property CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000000b369
- (void)handleConversionProgress:(id)arg1;	// IMP=0x001000000000b291
- (void)startProgress;	// IMP=0x001000000000afea
- (void)postNotificationForTransferStatus:(long long)arg1 progress:(double)arg2;	// IMP=0x001000000000afe4
- (void)airDropClient:(id)arg1 event:(long long)arg2 withResults:(id)arg3;	// IMP=0x001000000000a7dc
- (void)removeClientAlerts;	// IMP=0x001000000000a6a7
- (void)dealloc;	// IMP=0x001000000000a626
- (void)stop;	// IMP=0x001000000000a41b
- (void)addClientForNode:(struct __SFNode *)arg1 shouldPublishProgress:(_Bool)arg2;	// IMP=0x001000000000a0ab
- (void)serversChanged:(id)arg1;	// IMP=0x0010000000009d33
- (_Bool)send;	// IMP=0x0010000000009bea
- (void)start;	// IMP=0x00100000000098e4
- (void)releaseSandboxExtensions;	// IMP=0x00100000000097ad
- (void)consumeSandboxExtensions;	// IMP=0x00100000000094d5
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000094a9
- (id)initWithPerson:(struct __SFNode *)arg1 items:(id)arg2 sandboxExtensions:(id)arg3;	// IMP=0x001000000000927c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

