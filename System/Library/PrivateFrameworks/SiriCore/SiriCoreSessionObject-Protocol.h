//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriCore/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_data;

@protocol SiriCoreSessionObject <NSObject>
@property(copy, nonatomic) NSString *refId;
@property(copy, nonatomic) NSString *aceId;
- (_Bool)siriCore_supportedByRemoteLimitedSession;
- (_Bool)siriCore_supportedByLocalSession;
- (void)siriCore_setSessionRequestId:(NSString *)arg1;
- (NSString *)siriCore_requestId;
- (NSObject<OS_dispatch_data> *)siriCore_serializedAceDataError:(id *)arg1;
- (void)siriCore_logDiagnostics;
- (_Bool)siriCore_isProvisional;
- (_Bool)siriCore_isRestartable;
- (_Bool)siriCore_isRetryable;
- (_Bool)siriCore_bufferingAllowedDuringActiveSession;
@end

