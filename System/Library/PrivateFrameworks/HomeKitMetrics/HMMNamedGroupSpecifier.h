//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMMNamedGroupSpecifier : NSObject
{
    NSString *_groupName;	// 8 = 0x8
}

+ (id)type;	// IMP=0x0010000000017803
- (void).cxx_destruct;	// IMP=0x00000000000177f3
@property(readonly, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToGroupNameSpecifier:(id)arg1;	// IMP=0x00000000000176c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017655
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001764a
- (id)coreDataGroupUsingContext:(id)arg1;	// IMP=0x0000000000017259
@property(readonly, nonatomic) NSDictionary *descriptor;
- (id)initWithGroupName:(id)arg1;	// IMP=0x0000000000017130

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

