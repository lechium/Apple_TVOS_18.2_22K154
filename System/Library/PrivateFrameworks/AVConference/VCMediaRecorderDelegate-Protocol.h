//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class NSDictionary, NSError;

@protocol VCMediaRecorderDelegate <NSObject>
- (void)streamToken:(long long)arg1 didUpdateCapabilities:(unsigned int)arg2;
- (void)streamTokenDidCleanupAllRequests:(long long)arg1;
- (void)streamToken:(long long)arg1 didFinishRequest:(NSDictionary *)arg2 didSucceed:(_Bool)arg3;
- (void)streamToken:(long long)arg1 didEndProcessingRequest:(NSDictionary *)arg2 urlContext:(const struct tagVCMediaRecorderDelegateURLContext *)arg3 error:(NSError *)arg4;
- (void)streamToken:(long long)arg1 didStartProcessingRequest:(NSDictionary *)arg2 error:(NSError *)arg3;
@end

