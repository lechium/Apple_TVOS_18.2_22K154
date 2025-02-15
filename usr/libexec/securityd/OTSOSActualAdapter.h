//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSListenerCollection, NSString;

@interface OTSOSActualAdapter : NSObject
{
    _Bool _essential;	// 8 = 0x8
    NSString *_providerID;	// 16 = 0x10
    CKKSListenerCollection *_peerChangeListeners;	// 24 = 0x18
}

+ (id)sosCKKSViewList;	// IMP=0x0020000000092ce9
- (void).cxx_destruct;	// IMP=0x0020000000091ef0
@property(retain) CKKSListenerCollection *peerChangeListeners; // @synthesize peerChangeListeners=_peerChangeListeners;
@property(readonly) NSString *providerID; // @synthesize providerID=_providerID;
@property _Bool essential; // @synthesize essential=_essential;
- (_Bool)resetToOffering:(id *)arg1;	// IMP=0x0010000000091d74
- (_Bool)joinAfterRestore:(id *)arg1;	// IMP=0x0010000000091c43
- (_Bool)safariViewSyncingEnabled:(id *)arg1;	// IMP=0x0010000000091b8f
- (id)currentState;	// IMP=0x0010000000091aae
- (void)sendTrustedPeerSetChangedUpdate;	// IMP=0x0010000000091a30
- (void)sendSelfPeerChangedUpdate;	// IMP=0x00100000000919b2
- (void)registerForPeerChangeUpdates:(id)arg1;	// IMP=0x0010000000091949
- (_Bool)updateCKKS4AllStatus:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000009175d
- (_Bool)updateOctagonKeySetWithAccount:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000090e39
- (_Bool)preloadOctagonKeySetOnAccount:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000090655
- (id)fetchTrustedPeers:(id *)arg1;	// IMP=0x00100000000903fd
- (id)fetchSelfPeers:(id *)arg1;	// IMP=0x0010000000090335
- (id)currentSOSSelf:(id *)arg1;	// IMP=0x001000000008fcfa
- (int)circleStatus:(id *)arg1;	// IMP=0x001000000008fc50
@property(readonly, copy) NSString *description;
- (id)initAsEssential:(_Bool)arg1;	// IMP=0x001000000008fad3
@property(readonly, nonatomic) _Bool sosEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

