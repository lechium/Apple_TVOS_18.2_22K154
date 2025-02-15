//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TVHKBonjourServiceConfiguration, TVHKMediaServerIdentifier;

__attribute__((visibility("hidden")))
@interface TVHKMediaServer : NSObject
{
    TVHKMediaServerIdentifier *_identifier;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSString *_homeSharingGroupIdentifier;	// 24 = 0x18
    TVHKBonjourServiceConfiguration *_bonjourServiceConfiguration;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
}

+ (id)new;	// IMP=0x0010000000096e76
- (void).cxx_destruct;	// IMP=0x0000000000097529
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) TVHKBonjourServiceConfiguration *bonjourServiceConfiguration; // @synthesize bonjourServiceConfiguration=_bonjourServiceConfiguration;
@property(readonly, copy, nonatomic) NSString *homeSharingGroupIdentifier; // @synthesize homeSharingGroupIdentifier=_homeSharingGroupIdentifier;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) TVHKMediaServerIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009746f
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000972a4
@property(readonly) unsigned long long hash;
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000009719d
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000097025
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000097011
- (id)succinctDescription;	// IMP=0x0000000000096fff
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 homeSharingGroupIdentifier:(id)arg3 bonjourServiceConfiguration:(id)arg4;	// IMP=0x0000000000096f14
- (id)init;	// IMP=0x0000000000096ea5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

