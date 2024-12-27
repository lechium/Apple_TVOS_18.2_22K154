//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBLoretoUserProfileManagerClientPermission;

@interface PBLoretoUserProfileManagerClientRecord : NSObject
{
    int _pid;	// 8 = 0x8
    PBLoretoUserProfileManagerClientPermission *_readUserProfiles;	// 16 = 0x10
    PBLoretoUserProfileManagerClientPermission *_writeUserProfiles;	// 24 = 0x18
    PBLoretoUserProfileManagerClientPermission *_writeGroupRecommendationsConsent;	// 32 = 0x20
    PBLoretoUserProfileManagerClientPermission *_writeGroupRecommendationsSession;	// 40 = 0x28
    PBLoretoUserProfileManagerClientPermission *_selectUserProfile;	// 48 = 0x30
    PBLoretoUserProfileManagerClientPermission *_sendAccountNotifications;	// 56 = 0x38
    NSString *_bundleIdentifier;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000001b084e
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) PBLoretoUserProfileManagerClientPermission *sendAccountNotifications; // @synthesize sendAccountNotifications=_sendAccountNotifications;
@property(readonly, nonatomic) PBLoretoUserProfileManagerClientPermission *selectUserProfile; // @synthesize selectUserProfile=_selectUserProfile;
@property(readonly, nonatomic) PBLoretoUserProfileManagerClientPermission *writeGroupRecommendationsSession; // @synthesize writeGroupRecommendationsSession=_writeGroupRecommendationsSession;
@property(readonly, nonatomic) PBLoretoUserProfileManagerClientPermission *writeGroupRecommendationsConsent; // @synthesize writeGroupRecommendationsConsent=_writeGroupRecommendationsConsent;
@property(readonly, nonatomic) PBLoretoUserProfileManagerClientPermission *writeUserProfiles; // @synthesize writeUserProfiles=_writeUserProfiles;
@property(readonly, nonatomic) PBLoretoUserProfileManagerClientPermission *readUserProfiles; // @synthesize readUserProfiles=_readUserProfiles;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00100000001b0682
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00100000001b0631
- (id)succinctDescriptionBuilder;	// IMP=0x00100000001b05b3
- (id)succinctDescription;	// IMP=0x00100000001b0562
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001b050e
@property(readonly, nonatomic, getter=isEntitled) _Bool entitled;
- (id)initWithProcessHandle:(id)arg1;	// IMP=0x00100000001b012a

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

