//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameKitServices/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol GKVoiceChatPeerInfoProvider <NSObject>
@property(readonly, nonatomic) NSArray *connectedPeerIDs;
@property(readonly, nonatomic) NSString *peerID;
- (NSString *)displayNameForPeer:(NSString *)arg1;
@end

