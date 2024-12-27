//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class HKSharedSummaryTransaction, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _HKSharedSummaryQueryServerConfiguration : HKQueryServerConfiguration
{
    HKSharedSummaryTransaction *_transaction;	// 8 = 0x8
    NSString *_package;	// 16 = 0x10
    NSSet *_includedIdentifiers;	// 24 = 0x18
    NSSet *_includedObjectTypes;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001b0d52
- (void).cxx_destruct;	// IMP=0x00000000001b10aa
@property(copy, nonatomic) NSSet *includedObjectTypes; // @synthesize includedObjectTypes=_includedObjectTypes;
@property(copy, nonatomic) NSSet *includedIdentifiers; // @synthesize includedIdentifiers=_includedIdentifiers;
@property(copy, nonatomic) NSString *package; // @synthesize package=_package;
@property(copy, nonatomic) HKSharedSummaryTransaction *transaction; // @synthesize transaction=_transaction;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b0f4d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b0d5a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b0cac

@end

