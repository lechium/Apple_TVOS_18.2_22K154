//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTServiceConnection, GTServiceProperties, NSMutableDictionary, NSSet;
@protocol OS_os_log;

@interface GTMTLCaptureServiceXPCProxy : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    GTServiceConnection *_connection;	// 16 = 0x10
    NSSet *_ignoreMethods;	// 24 = 0x18
    NSMutableDictionary *_observerIdToPort;	// 32 = 0x20
    GTServiceProperties *_serviceProperties;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000011a2b
@property(readonly, retain, nonatomic) GTServiceProperties *serviceProperties; // @synthesize serviceProperties=_serviceProperties;
- (id)createCaptureDescriptor;	// IMP=0x0000000000011986
- (unsigned long long)nextRequestID;	// IMP=0x00000000000118f9
- (id)query:(id)arg1;	// IMP=0x000000000001189b
- (id)update:(id)arg1;	// IMP=0x00000000000114c8
- (id)startWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010d5d
- (void)stop;	// IMP=0x0000000000010ce4
- (void)resume;	// IMP=0x0000000000010c8b
- (void)abort;	// IMP=0x0000000000010c32
- (void)deregisterObserver:(unsigned long long)arg1;	// IMP=0x0000000000010af7
- (unsigned long long)registerObserver:(id)arg1;	// IMP=0x0000000000010961
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000108dc
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;	// IMP=0x0000000000010710

@end

