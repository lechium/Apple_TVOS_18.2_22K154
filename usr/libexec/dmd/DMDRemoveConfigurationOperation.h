//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDRemoveConfigurationOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x004000000006c96c
+ (id)requiredEntitlements;	// IMP=0x001000000006c954
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000006c922
- (unsigned long long)queueGroup;	// IMP=0x002000000006c961
- (_Bool)_removeRestrictionsWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006d1f1
- (void)_removeProfile:(id)arg1 withRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006cf86
- (void)runWithRequest:(id)arg1;	// IMP=0x001000000006cadf

@end

