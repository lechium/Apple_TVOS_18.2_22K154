//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, XCTProcessSpecifier;

@protocol XCTDProcessMonitor <NSObject>
- (int)pidForBundleID:(NSString *)arg1 error:(id *)arg2;
- (XCTProcessSpecifier *)processSpecifierForPID:(int)arg1 error:(id *)arg2;
- (NSString *)bundleIDForPID:(int)arg1 error:(id *)arg2;
- (void)startMonitoringApplicationWithBundleID:(NSString *)arg1 path:(NSString *)arg2;
- (void)invalidate;
@end

