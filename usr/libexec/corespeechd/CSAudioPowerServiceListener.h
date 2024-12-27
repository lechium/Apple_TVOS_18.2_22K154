//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioPowerProvider, NSString, NSXPCListener;

@interface CSAudioPowerServiceListener : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    CSAudioPowerProvider *_exportedObject;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000008e696
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000008e505
- (void)listen;	// IMP=0x001000000008e428

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

