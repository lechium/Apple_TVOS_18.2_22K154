//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/NSObject-Protocol.h>

@class AVContentKey, AVContentKeyRequest, AVContentKeySession, AVPersistableContentKeyRequest, NSArray, NSData, NSError, NSString;

@protocol AVContentKeySessionDelegate <NSObject>
- (void)contentKeySession:(AVContentKeySession *)arg1 didProvideContentKeyRequest:(AVContentKeyRequest *)arg2;

@optional
- (void)contentKeySession:(AVContentKeySession *)arg1 didProvideContentKeyRequests:(NSArray *)arg2 forInitializationData:(NSData *)arg3;
- (void)contentKeySession:(AVContentKeySession *)arg1 externalProtectionStatusDidChangeForContentKey:(AVContentKey *)arg2;
- (void)contentKeySessionDidGenerateExpiredSessionReport:(AVContentKeySession *)arg1;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(AVContentKeySession *)arg1;
- (void)contentKeySession:(AVContentKeySession *)arg1 contentKeyRequestDidSucceed:(AVContentKeyRequest *)arg2;
- (_Bool)contentKeySession:(AVContentKeySession *)arg1 shouldRetryContentKeyRequest:(AVContentKeyRequest *)arg2 reason:(NSString *)arg3;
- (void)contentKeySession:(AVContentKeySession *)arg1 contentKeyRequest:(AVContentKeyRequest *)arg2 didFailWithError:(NSError *)arg3;
- (void)contentKeySession:(AVContentKeySession *)arg1 didUpdatePersistableContentKey:(NSData *)arg2 forContentKeyIdentifier:(id)arg3;
- (void)contentKeySession:(AVContentKeySession *)arg1 didProvidePersistableContentKeyRequest:(AVPersistableContentKeyRequest *)arg2;
- (void)contentKeySession:(AVContentKeySession *)arg1 didProvideRenewingContentKeyRequest:(AVContentKeyRequest *)arg2;
@end

