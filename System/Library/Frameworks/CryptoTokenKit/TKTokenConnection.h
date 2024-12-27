//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, NSXPCListener, TKToken;

__attribute__((visibility("hidden")))
@interface TKTokenConnection : NSObject
{
    TKToken *_token;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSMapTable *_sessions;	// 24 = 0x18
    id _initialKeepAlive;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002e91d
@property(retain, nonatomic) id initialKeepAlive; // @synthesize initialKeepAlive=_initialKeepAlive;
@property(readonly, nonatomic) NSMapTable *sessions; // @synthesize sessions=_sessions;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) TKToken *token; // @synthesize token=_token;
- (void)dealloc;	// IMP=0x000000000002e868
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000002e7a5
- (void)invalidate;	// IMP=0x000000000002e78f
- (id)initWithToken:(id)arg1;	// IMP=0x000000000002e644

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

