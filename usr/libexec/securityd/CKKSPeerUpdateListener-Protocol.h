//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol CKKSPeerProvider;

@protocol CKKSPeerUpdateListener <NSObject>
- (void)trustedPeerSetChanged:(id <CKKSPeerProvider>)arg1;
- (void)selfPeerChanged:(id <CKKSPeerProvider>)arg1;
@end

