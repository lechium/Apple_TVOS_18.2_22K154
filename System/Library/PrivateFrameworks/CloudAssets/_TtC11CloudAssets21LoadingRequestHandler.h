//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC11CloudAssets21LoadingRequestHandler : NSObject
{
    MISSING_TYPE *assetStreamHandle;	// 8 = 0x8
    MISSING_TYPE *type;	// 0 = 0x0
    MISSING_TYPE *protectedTaskMapping;	// 0 = 0x0
    MISSING_TYPE *protectedActivity;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000001d542
- (id)init;	// IMP=0x000000000001d50c
- (void)resourceLoader:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;	// IMP=0x000000000001d4c8
- (_Bool)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;	// IMP=0x000000000001d463
- (_Bool)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;	// IMP=0x000000000001d3ba
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;	// IMP=0x000000000001d33c
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;	// IMP=0x000000000001cdbc

@end

