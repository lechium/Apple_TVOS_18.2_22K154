//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTLazuliDestination, CTLazuliGroupChatUri, CTLazuliMessageID, CTLazuliMessageText;

__attribute__((visibility("hidden")))
@interface CTXPCSendTextMessageRequest
{
}

+ (_Bool)isSensitiveMessage;	// IMP=0x0060000000069069
+ (id)allowedClassesForArguments;	// IMP=0x0060000000068f3c
- (int)requiredEntitlement;	// IMP=0x0000000000068f31
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000068c67
@property(readonly, nonatomic) CTLazuliGroupChatUri *groupChatURI;
@property(readonly, nonatomic) CTLazuliDestination *destination;
@property(readonly, nonatomic) CTLazuliMessageText *message;
@property(readonly, nonatomic) CTLazuliMessageID *messageID;
- (id)initWithContext:(id)arg1 groupChatURI:(id)arg2 messageID:(id)arg3 message:(id)arg4;	// IMP=0x0000000000068712
- (id)initWithContext:(id)arg1 destination:(id)arg2 messageID:(id)arg3 message:(id)arg4;	// IMP=0x0000000000068598

@end

