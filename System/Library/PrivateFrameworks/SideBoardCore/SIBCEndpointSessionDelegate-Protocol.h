//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, SIBCEndpointSession;

@protocol SIBCEndpointSessionDelegate
- (void)endpointSessionDidCancel:(SIBCEndpointSession *)arg1;
- (void)endpointSessionDidInvalidate:(SIBCEndpointSession *)arg1 error:(NSError *)arg2 permanent:(_Bool)arg3;
@end

