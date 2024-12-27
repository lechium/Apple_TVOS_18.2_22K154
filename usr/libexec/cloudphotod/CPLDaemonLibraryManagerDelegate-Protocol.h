//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CPLDaemonLibraryManager, CPLEngineWrapper, NSString, NSURL;

@protocol CPLDaemonLibraryManagerDelegate <NSObject>
- (void)enumerateDaemonLibraryManagersWithLibraryIdentifier:(NSString *)arg1 block:(void (^)(CPLDaemonLibraryManager *, _Bool *))arg2;
- (CPLDaemonLibraryManager *)daemonLibraryManagerOtherLibraryManager:(CPLDaemonLibraryManager *)arg1 withLibraryIdentifier:(NSString *)arg2;
- (void)startSyncTaskForDaemonLibraryManager:(CPLDaemonLibraryManager *)arg1;
- (void)daemonLibraryManagerWantsToExitNow:(CPLDaemonLibraryManager *)arg1;
- (void)daemonLibraryManagerHasBeenDisconnected:(CPLDaemonLibraryManager *)arg1;
- (void)daemonLibraryManager:(CPLDaemonLibraryManager *)arg1 wantsToExitAfterResettingParametersForLibraryWithIdentifier:(NSString *)arg2;
- (CPLEngineWrapper *)daemonLibraryManager:(CPLDaemonLibraryManager *)arg1 engineWrapperWithClientLibraryBaseURL:(NSURL *)arg2 cloudLibraryStateStorageURL:(NSURL *)arg3 cloudLibraryResourceStorageURL:(NSURL *)arg4 libraryIdentifier:(NSString *)arg5 mainScopeIdentifier:(NSString *)arg6 options:(unsigned long long)arg7 error:(id *)arg8;
@end

