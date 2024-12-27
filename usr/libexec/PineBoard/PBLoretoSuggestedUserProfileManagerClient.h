//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBLoretoSuggestedUserProfileManager, PBLoretoSuggestedUserProfileManagerClientRecord, PBSSuggestedUserProfileSnapshot;
@protocol PBSSuggestedUserProfileManagerClientInterface;

@interface PBLoretoSuggestedUserProfileManagerClient : NSObject
{
    PBLoretoSuggestedUserProfileManager *_manager;	// 8 = 0x8
    id <PBSSuggestedUserProfileManagerClientInterface> _delegate;	// 16 = 0x10
    PBLoretoSuggestedUserProfileManagerClientRecord *_record;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000014d683
@property(readonly, nonatomic) PBLoretoSuggestedUserProfileManagerClientRecord *record; // @synthesize record=_record;
@property(nonatomic) __weak id <PBSSuggestedUserProfileManagerClientInterface> delegate; // @synthesize delegate=_delegate;
- (void)loretoSuggestedUserProfileManagerDidUpdate:(id)arg1;	// IMP=0x001000000014d5cb
- (oneway void)clearSnapshot;	// IMP=0x001000000014d537
- (oneway void)updateSuppressedForSuggestedUserWithIdentifier:(id)arg1 suppressed:(id)arg2;	// IMP=0x001000000014d43e
- (oneway void)refreshSuggestedUserProfiles;	// IMP=0x001000000014d3aa
@property(readonly, nonatomic) PBSSuggestedUserProfileSnapshot *suggestedUserProfileSnapshot;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000014d268
- (id);	// IMP=0x001000000014d217
- (id)succinctDescriptionBuilder;	// IMP=0x001000000014d190
- (id)succinctDescription;	// IMP=0x001000000014d13f
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x001000000014d0c1
- (void)dealloc;	// IMP=0x001000000014d009
- (id)initWithRecord:(id)arg1 suggestedUserProfileManager:(id)arg2;	// IMP=0x001000000014cc6b

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

