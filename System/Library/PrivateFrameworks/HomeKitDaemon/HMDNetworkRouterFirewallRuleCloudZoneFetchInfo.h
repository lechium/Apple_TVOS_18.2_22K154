//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKServerChangeToken, HMBLocalZoneMirrorInput, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleCloudZoneFetchInfo
{
    NSSet *_interestedRecordIDs;	// 8 = 0x8
    CKServerChangeToken *_changeToken;	// 16 = 0x10
    CKServerChangeToken *_originalChangeToken;	// 24 = 0x18
    HMBLocalZoneMirrorInput *_mirrorInput;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000b3b4ae
- (void).cxx_destruct;	// IMP=0x0000000000b3b45b
@property(retain, nonatomic) HMBLocalZoneMirrorInput *mirrorInput; // @synthesize mirrorInput=_mirrorInput;
@property(readonly, nonatomic) CKServerChangeToken *originalChangeToken; // @synthesize originalChangeToken=_originalChangeToken;
@property(retain, nonatomic) CKServerChangeToken *changeToken; // @synthesize changeToken=_changeToken;
@property(readonly, nonatomic) NSSet *interestedRecordIDs; // @synthesize interestedRecordIDs=_interestedRecordIDs;
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000b3b361
- (id)initWithOptions:(id)arg1 changeToken:(id)arg2 promise:(id)arg3 database:(id)arg4 useAnonymousRequests:(_Bool)arg5 interestedRecordIDs:(id)arg6 mirrorInput:(id)arg7;	// IMP=0x0000000000b3b195

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

