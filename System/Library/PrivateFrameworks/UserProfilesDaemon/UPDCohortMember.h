//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSPersonNameComponents, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface UPDCohortMember : NSObject
{
    NSString *_altDSID;	// 8 = 0x8
    NSNumber *_dsid;	// 16 = 0x10
    NSString *_givenName;	// 24 = 0x18
    NSString *_familyName;	// 32 = 0x20
    NSString *_familyMemberIdentifier;	// 40 = 0x28
    NSUUID *_homeMemberIdentifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000b0a4
@property(readonly, copy, nonatomic) NSUUID *homeMemberIdentifier; // @synthesize homeMemberIdentifier=_homeMemberIdentifier;
@property(readonly, copy, nonatomic) NSString *familyMemberIdentifier; // @synthesize familyMemberIdentifier=_familyMemberIdentifier;
@property(readonly, copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(readonly, copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(readonly, copy, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(readonly, copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000000ae73
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000000ae23
- (id)succinctDescriptionBuilder;	// IMP=0x000000000000ad88
- (id)succinctDescription;	// IMP=0x000000000000ad38
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000a953
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a85d
@property(readonly, nonatomic, getter=isHomeMember) _Bool homeMember;
@property(readonly, nonatomic, getter=isFamilyMember) _Bool familyMember;
@property(readonly, nonatomic) NSPersonNameComponents *personNameComponents;
@property(readonly, nonatomic) unsigned long long sources;
- (id)initWithAltDSID:(id)arg1 dsid:(id)arg2 givenName:(id)arg3 familyName:(id)arg4 homeMemberIdentifier:(id)arg5 familyMemberIdentifier:(id)arg6;	// IMP=0x000000000000a114
- (id)initWithHomeMemberIdentifier:(id)arg1 altDSID:(id)arg2 givenName:(id)arg3 familyName:(id)arg4;	// IMP=0x000000000000a0f2
- (id)initWithFamilyMemberIdentifier:(id)arg1 altDSID:(id)arg2 dsid:(id)arg3 givenName:(id)arg4 familyName:(id)arg5;	// IMP=0x000000000000a0c5
- (id)initWithFamilyMember:(id)arg1;	// IMP=0x000000000001958f

// Remaining properties
@property(readonly) Class superclass;

@end

