//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@interface CKDFetchUserPrivacySettingsOperation : CKDOperation
{
    long long _discoverable;	// 8 = 0x8
}

@property(nonatomic) long long discoverable; // @synthesize discoverable=_discoverable;
- (void)main;	// IMP=0x0000000000378162
- (int)operationType;	// IMP=0x0000000000378157
- (void)_handleRetrievedPrivacySettings:(id)arg1;	// IMP=0x0000000000378029
- (id)activityCreate;	// IMP=0x0000000000378000
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000377fd1

@end

