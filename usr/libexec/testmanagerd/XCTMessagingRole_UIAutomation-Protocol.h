//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSError, NSSet, NSString, NSURL;

@protocol XCTMessagingRole_UIAutomation
- (id)_XCT_getProgressForLaunch:(id)arg1;
- (id)_XCT_terminateProcess:(id)arg1;
- (id)_XCT_openURL:(NSURL *)arg1 processPath:(NSString *)arg2 bundleID:(NSString *)arg3 arguments:(NSArray *)arg4 environmentVariables:(NSDictionary *)arg5;
- (id)_XCT_launchProcessWithPath:(NSString *)arg1 bundleID:(NSString *)arg2 arguments:(NSArray *)arg3 environmentVariables:(NSDictionary *)arg4;
- (id)_XCT_requestDiagnosticsForAdditionalDevices:(NSSet *)arg1;
- (id)_XCT_initializationForUITestingDidFailWithError:(NSError *)arg1;
- (id)_XCT_didBeginInitializingForUITesting;
@end

