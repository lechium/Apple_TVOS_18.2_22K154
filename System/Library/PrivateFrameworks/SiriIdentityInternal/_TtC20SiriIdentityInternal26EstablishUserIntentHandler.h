//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UserIdentifyIntent;

@interface _TtC20SiriIdentityInternal26EstablishUserIntentHandler : NSObject
{
    MISSING_TYPE *userIdentity;	// 8 = 0x8
    MISSING_TYPE *currentRequest;	// 16 = 0x10
    MISSING_TYPE *currentDevice;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003d2a2
- (void)handleUserIdentify:(UserIdentifyIntent *)arg1 completion:(void (^)(UserIdentifyIntentResponse *))arg2;	// IMP=0x000000000003d1dd
- (void)confirmUserIdentify:(UserIdentifyIntent *)arg1 completion:(void (^)(UserIdentifyIntentResponse *))arg2;	// IMP=0x000000000003cfbf
- (void)resolveIdentityForUserIdentify:(UserIdentifyIntent *)arg1 withCompletion:(void (^)(UserIdentifyIdentityResolutionResult *))arg2;	// IMP=0x000000000003cd98
- (id)init;	// IMP=0x000000000003c662

@end

