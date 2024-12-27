//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSUUID, TUConversationParticipant, TUHandle, TUSimulatedParticipantUpdate;

@protocol TUSimulatedConversationControllerXPCServer <NSObject>
- (oneway void)createIncomingConversationWithHandles:(NSArray *)arg1;
- (void)removeRemoteParticipant:(TUConversationParticipant *)arg1 fromConversationWithGroupUUID:(NSUUID *)arg2;
- (void)addRemoteParticipantWithHandle:(TUHandle *)arg1 update:(TUSimulatedParticipantUpdate *)arg2 toConversationWithGroupUUID:(NSUUID *)arg3;
- (void)updateParticipant:(TUConversationParticipant *)arg1 withUpdate:(TUSimulatedParticipantUpdate *)arg2 onConversationWithGroupUUID:(NSUUID *)arg3;
@end

