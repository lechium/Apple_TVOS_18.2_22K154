//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@interface GEOExperimentServer : GEOServer
{
}

+ (unsigned long long)launchMode;	// IMP=0x0020000000012888
+ (id)identifier;	// IMP=0x001000000001287b
- (void)fetchAssignUUIDSyncWithMessage:(id)arg1;	// IMP=0x002000000001858b
- (void)fetchAssignUUIDWithMessage:(id)arg1;	// IMP=0x0010000000018364
- (void)fetchAllExperimentsWithMessage:(id)arg1;	// IMP=0x001000000001819b
- (void)setBucketIdWithMessage:(id)arg1;	// IMP=0x0010000000018103
- (void)setActiveBranchWithMessage:(id)arg1;	// IMP=0x001000000001806b
- (void)setQuerySubstringWithMessage:(id)arg1;	// IMP=0x0010000000017efb
- (void)refreshDatasetWithMessage:(id)arg1;	// IMP=0x0010000000017e35
- (void)updateWithMessage:(id)arg1;	// IMP=0x0010000000017df1
- (id)initWithDaemon:(id)arg1;	// IMP=0x0010000000017d87
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3 signpostId:(unsigned long long)arg4;	// IMP=0x0010000000012893

@end

