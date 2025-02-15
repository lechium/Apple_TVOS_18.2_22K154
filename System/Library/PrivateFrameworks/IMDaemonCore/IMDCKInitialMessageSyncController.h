//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IMDCKMessageSyncController.h"

@class CKServerChangeToken;

@interface IMDCKInitialMessageSyncController : IMDCKMessageSyncController
{
    CKServerChangeToken *_syncToken;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001e77ec
@property(retain, nonatomic) CKServerChangeToken *syncToken; // @synthesize syncToken=_syncToken;
- (id)ckUtilities;	// IMP=0x00000000001e77ae
- (_Bool)_kickOffWriteIfNeededForSyncType:(long long)arg1 activity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e766a
- (_Bool)_deviceConditionsAllowsMessageSyncForActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 currentBatchCount:(long long)arg3 maxBatchCount:(long long)arg4;	// IMP=0x00000000001e74e7
- (_Bool)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;	// IMP=0x00000000001e737f
- (id)latestSyncToken;	// IMP=0x00000000001e736d
- (void)setLatestSyncToken:(id)arg1 forSyncType:(id)arg2;	// IMP=0x00000000001e735b
- (void)setLatestSyncToken:(id)arg1;	// IMP=0x00000000001e7349
- (void)syncMessagesWithSyncType:(long long)arg1 deviceConditionsToCheck:(unsigned long long)arg2 activity:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e72b7

@end

