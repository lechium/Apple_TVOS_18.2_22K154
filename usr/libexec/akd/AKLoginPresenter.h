//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;

@interface AKLoginPresenter : NSObject
{
    NSXPCListener *_remoteListener;	// 8 = 0x8
    CDUnknownBlockType _presentationCompletion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000040afe
@property(copy, nonatomic) CDUnknownBlockType presentationCompletion; // @synthesize presentationCompletion=_presentationCompletion;
@property(retain, nonatomic) NSXPCListener *remoteListener; // @synthesize remoteListener=_remoteListener;
- (void)_callCompletionWithResults:(id)arg1 password:(id)arg2 additionalData:(id)arg3 error:(id)arg4;	// IMP=0x00100000000409de
- (void)authenticationRequestFinishedWithResults:(id)arg1 password:(id)arg2 additionalData:(id)arg3 error:(id)arg4;	// IMP=0x0010000000040919
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000040882
- (void)presentOOPLoginUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004020a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

