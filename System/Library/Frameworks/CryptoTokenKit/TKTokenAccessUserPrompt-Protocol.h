//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CryptoTokenKit/NSObject-Protocol.h>

@class TKTokenAccessRequest;

@protocol TKTokenAccessUserPrompt <NSObject>
- (long long)promptUserToEvaluateRequest:(TKTokenAccessRequest *)arg1 error:(id *)arg2;
- (long long)preflightStatus;
@end

