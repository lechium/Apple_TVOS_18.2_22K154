//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKGrandslamTokenUpdater : NSObject
{
}

+ (_Bool)shouldUpdateSynchronouslyWith:(id)arg1;	// IMP=0x00400000000c7bca
- (_Bool)_isTouchIDRequiredForGrandSlamServiceTokenWithID:(id)arg1;	// IMP=0x00400000000c8b1f
- (void)_updateCredentialForSavedAIDAAccount:(id)arg1 accountStore:(id)arg2 withNewTokens:(id)arg3;	// IMP=0x00100000000c8541
- (void)_updateWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000c7c78
- (void)updateGrandSlamServiceTokensWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000c7ac1

@end

