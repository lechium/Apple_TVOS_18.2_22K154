//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSBag.h>

@class AMSBagValue;

@interface AMSBag (AskPermission)
+ (id)sharedBag;	// IMP=0x002000000002190a
@property(readonly, nonatomic) AMSBagValue *updateRequestURL;
@property(readonly, nonatomic) AMSBagValue *retrieveRequestURL;
@property(readonly, nonatomic) AMSBagValue *localeIdentifier;
@property(readonly, nonatomic) AMSBagValue *countryCode;
@end

