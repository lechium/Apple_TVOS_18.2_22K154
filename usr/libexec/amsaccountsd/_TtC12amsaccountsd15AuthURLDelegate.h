//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSAuthenticateRequest, AMSURLSession, NSURLSessionTask;

@interface _TtC12amsaccountsd15AuthURLDelegate : NSObject
{
}

- (id)init;	// IMP=0x0010000000082236
- (void)AMSURLSession:(AMSURLSession *)arg1 task:(NSURLSessionTask *)arg2 handleAuthenticateRequest:(AMSAuthenticateRequest *)arg3 completion:(void (^)(AMSAuthenticateResult *, NSError *))arg4;	// IMP=0x0010000000082508

@end

