//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSVoiceTriggerDataCollector : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0040000000020dab
- (void)addVTAcceptEntryAndSubmit:(id)arg1;	// IMP=0x0040000000020dc1
- (void)addVTRejectEntry:(id)arg1 truncateData:(_Bool)arg2;	// IMP=0x0010000000020dbb
- (id)fetchVoiceTriggerHeartBeatMetrics;	// IMP=0x0010000000020db3

@end

