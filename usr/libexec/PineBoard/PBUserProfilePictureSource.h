//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UPProfileIdentity, UPProfilePictureRequest;

@interface PBUserProfilePictureSource : NSObject
{
    UPProfileIdentity *_profileIdentity;	// 8 = 0x8
    NSString *_userIdentifier;	// 16 = 0x10
    NSString *_altDSID;	// 24 = 0x18
}

+ (id)sourceForAltDSID:(id)arg1;	// IMP=0x0020000000177da0
+ (id)sourceForProfileIdentity:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x0010000000177ad5
- (void).cxx_destruct;	// IMP=0x00200000001784e3
@property(readonly, copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(readonly, copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(readonly, copy, nonatomic) UPProfileIdentity *profileIdentity; // @synthesize profileIdentity=_profileIdentity;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000178431
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00100000001783e0
- (id)succinctDescriptionBuilder;	// IMP=0x0010000000178360
- (id)succinctDescription;	// IMP=0x001000000017830f
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001780a1
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000177ff5
@property(readonly, nonatomic) UPProfilePictureRequest *profilePictureRequest;
- (id)initWithProfileIdentity:(id)arg1 userIdentifier:(id)arg2 altDSID:(id)arg3;	// IMP=0x0010000000177737

// Remaining properties
@property(readonly) Class superclass;

@end

