//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PBIssueDataReporter : NSObject
{
}

- (void)_uploadSysdiagnoseAtPath:(id)arg1 toURL:(id)arg2 deleteAfterUpload:(_Bool)arg3;	// IMP=0x004000000016dbfb
- (id)_latestSysdiagnoseFilePath;	// IMP=0x001000000016d23b
- (void)reportIssueDataAtPath:(id)arg1;	// IMP=0x001000000016cdc2
- (void)_reportLatestIssueDataWithRemainingAttempts:(long long)arg1;	// IMP=0x001000000016cc53
- (void)reportLatestIssueData;	// IMP=0x001000000016cc3b

@end

