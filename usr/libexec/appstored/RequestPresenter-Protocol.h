//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AMSDialogRequest, AMSEngagementRequest, AMSProcessInfo, MISSING_TYPE;

@protocol RequestPresenter <NSObject>
- (void)presentEngagementRequest:(AMSEngagementRequest *)arg1 withClientInfo:(AMSProcessInfo *)arg2 resultHandler:(void (^)(AMSEngagementResult *, NSError *))arg3;
- (void)presentDialogRequest:(AMSDialogRequest *)arg1 resultHandler:(void (^)(AMSDialogResult *, NSError *))arg2;
- (MISSING_TYPE *)presentAuthenticateRequest:resultHandler: /* Error: Ran out of types for this method. */;
@end

