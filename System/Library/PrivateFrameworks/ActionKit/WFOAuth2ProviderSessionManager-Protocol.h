//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/NSObject-Protocol.h>

@class NSString, NSURLSessionConfiguration;

@protocol WFOAuth2ProviderSessionManager <NSObject>
- (id)initWithSessionConfiguration:(NSURLSessionConfiguration *)arg1 clientID:(NSString *)arg2 clientSecret:(NSString *)arg3;
- (id)initWithClientID:(NSString *)arg1 clientSecret:(NSString *)arg2;
@end

