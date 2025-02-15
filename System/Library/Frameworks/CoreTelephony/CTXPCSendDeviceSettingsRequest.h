//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTLazuliDestination, CTLazuliMessageID, CTLazuliSuggestedActionSettings;

__attribute__((visibility("hidden")))
@interface CTXPCSendDeviceSettingsRequest
{
}

+ (id)allowedClassesForArguments;	// IMP=0x006000000006e893
- (int)requiredEntitlement;	// IMP=0x000000000006e888
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006e6a2
@property(readonly, nonatomic) CTLazuliSuggestedActionSettings *settings;
@property(readonly, nonatomic) CTLazuliMessageID *messageID;
@property(readonly, nonatomic) CTLazuliDestination *destination;
- (id)initWithContext:(id)arg1 destination:(id)arg2 messageID:(id)arg3 settings:(id)arg4;	// IMP=0x000000000006e24f

@end

