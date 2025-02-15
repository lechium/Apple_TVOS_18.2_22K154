//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNFullTextSearchContactPredicate : CNPredicate
{
    NSString *_searchString;	// 24 = 0x18
    NSArray *_containerIdentifiers;	// 32 = 0x20
    NSArray *_groupIdentifiers;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000002811a
- (void).cxx_destruct;	// IMP=0x0000000000028571
@property(readonly, copy, nonatomic) NSArray *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property(readonly, copy, nonatomic) NSArray *containerIdentifiers; // @synthesize containerIdentifiers=_containerIdentifiers;
@property(readonly, copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (id)description;	// IMP=0x00000000000283f3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028339
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000028122
- (id)initWithSearchString:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3;	// IMP=0x000000000002801a

@end

