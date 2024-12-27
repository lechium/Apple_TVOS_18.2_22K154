//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTLazuliGroupChatParticipantList, CTLazuliGroupChatUri, CTLazuliOperationID;

__attribute__((visibility("hidden")))
@interface CTXPCRemoveParticipantsRequest
{
}

+ (id)allowedClassesForArguments;	// IMP=0x006000000006fd7e
- (int)requiredEntitlement;	// IMP=0x000000000006fd73
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006fb8d
@property(readonly, nonatomic) CTLazuliOperationID *operationID;
@property(readonly, nonatomic) CTLazuliGroupChatParticipantList *participants;
@property(readonly, nonatomic) CTLazuliGroupChatUri *groupChatURI;
- (id)initWithContext:(id)arg1 groupChatURI:(id)arg2 participants:(id)arg3 operationID:(id)arg4;	// IMP=0x000000000006f839

@end

