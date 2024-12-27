//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface CNLinkedContactsPredicate : CNPredicate
{
    CNContact *_contact;	// 24 = 0x18
    NSString *_contactIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000f47b1
- (void).cxx_destruct;	// IMP=0x00000000000f4a77
@property(readonly, copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly, copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)description;	// IMP=0x00000000000f498d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f48ee
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f47b9
- (id)initWithContactIdentifier:(id)arg1;	// IMP=0x00000000000f4737
- (id)initWithContact:(id)arg1;	// IMP=0x00000000000f46bd

@end

