//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTLazuliMessageID;

__attribute__((visibility("hidden")))
@interface CTXPCRetrieveMessageRequest
{
}

+ (id)allowedClassesForArguments;	// IMP=0x0060000000064256
- (int)requiredEntitlement;	// IMP=0x00000000000642e4
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000064066
@property(readonly, nonatomic) CTLazuliMessageID *messageID;
- (id)initWithContext:(id)arg1 messageID:(id)arg2;	// IMP=0x0000000000063db5

@end

