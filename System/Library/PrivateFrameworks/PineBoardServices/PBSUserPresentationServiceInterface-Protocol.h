//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/NSObject-Protocol.h>

@class NSDictionary, PBSUserPresentationRequest;

@protocol PBSUserPresentationServiceInterface <NSObject>
- (void)dismissUIWithRequest:(PBSUserPresentationRequest *)arg1;
- (void)messageUIWithRequest:(PBSUserPresentationRequest *)arg1 message:(NSDictionary *)arg2 reply:(void (^)(_Bool, id <NSSecureCoding>, NSError *))arg3;
- (void)presentUIWithRequest:(PBSUserPresentationRequest *)arg1 completion:(void (^)(unsigned long long, id <NSSecureCoding>, NSError *))arg2;
@end

