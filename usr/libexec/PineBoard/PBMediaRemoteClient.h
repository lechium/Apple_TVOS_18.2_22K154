//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PBMediaRemoteClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)defaultClient;	// IMP=0x002000000010bf4f
- (void).cxx_destruct;	// IMP=0x002000000010c388
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)getPictureInPictureStatusForPlayer:(void *)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000010c292
- (void)getActivePlayersForOrigin:(void *)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000010c1cf
- (void)getActivePlayersForLocalOriginWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000010c1b7
- (void)getSupportedCommandsForPlayer:(void *)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000010c0a1
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000010c036

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

