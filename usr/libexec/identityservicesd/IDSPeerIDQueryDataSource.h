//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSIDStatusQueryController, NSString;
@protocol IDSPeerIDManagerProtocol;

@interface IDSPeerIDQueryDataSource : NSObject
{
    id <IDSPeerIDManagerProtocol> _peerIDManager;	// 8 = 0x8
    IDSIDStatusQueryController *_IDStatusQueryController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000004c3359
@property(retain, nonatomic) IDSIDStatusQueryController *IDStatusQueryController; // @synthesize IDStatusQueryController=_IDStatusQueryController;
@property(nonatomic) __weak id <IDSPeerIDManagerProtocol> peerIDManager; // @synthesize peerIDManager=_peerIDManager;
- (_Bool)hasQueryResultsForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3;	// IMP=0x00100000004c3075
- (_Bool)hasPeerTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3;	// IMP=0x00100000004c2fd3
- (id)initWithPeerIDManager:(id)arg1 IDStatusQueryController:(id)arg2;	// IMP=0x00100000004c2ef5
- (id)initWithPeerIDManager:(id)arg1;	// IMP=0x00100000004c2ee1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

