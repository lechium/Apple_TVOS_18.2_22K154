//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID, NSXPCListenerEndpoint, _EXLaunchConfiguration, _EXQuery;

@protocol _TtP19ExtensionFoundation18_EXServiceProtocol_
- (void)photoServiceAuthorizationStatusForExtensionUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)invalidateLaunchAssertionsForExtensionAuditToken:(CDStruct_4c969caf)arg1 reply:(void (^)(void))arg2;
- (void)prepareWithLaunchConfiguration:(_EXLaunchConfiguration *)arg1 reply:(void (^)(_EXExtensionProcessHandle *, NSError *))arg2;
- (void)beginExtensionsQuery:(_EXQuery *)arg1 listenerEndpoint:(NSXPCListenerEndpoint *)arg2 reply:(void (^)(NSError *))arg3;
- (void)extensionsWith:(_EXQuery *)arg1 reply:(void (^)(_EXQueryResult *, NSError *))arg2;
@end

