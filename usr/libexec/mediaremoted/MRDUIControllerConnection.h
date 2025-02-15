//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection;
@protocol BSServiceConnectionClient, MRUIClientProtocol, MRUIServerProtocol;

@interface MRDUIControllerConnection : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    BSServiceConnection<BSServiceConnectionClient> *_serviceConnection;	// 16 = 0x10
    id <MRUIClientProtocol> _client;	// 24 = 0x18
    CDUnknownBlockType _invalidationHandler;	// 32 = 0x20
}

+ (id)serviceInterface;	// IMP=0x0020000000093020
- (void).cxx_destruct;	// IMP=0x0020000000093160
@property(readonly, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) id <MRUIClientProtocol> client; // @synthesize client=_client;
@property(readonly, nonatomic) BSServiceConnection<BSServiceConnectionClient> *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
@property(readonly, nonatomic) id <MRUIServerProtocol> server;
- (void)dealloc;	// IMP=0x00100000000927bb
- (id)initWithClientObject:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009268e

@end

