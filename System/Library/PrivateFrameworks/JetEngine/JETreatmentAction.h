//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface JETreatmentAction : NSObject
{
    _Bool _blacklisted;	// 8 = 0x8
    NSString *_field;	// 16 = 0x10
    NSString *_sourceField;	// 24 = 0x18
    id _overrideFieldValue;	// 32 = 0x20
    NSArray *_blacklistedFields;	// 40 = 0x28
    NSArray *_whitelistedFields;	// 48 = 0x30
    NSDictionary *_fieldsMap;	// 56 = 0x38
    NSDictionary *_extractAndReplaceConfig;	// 64 = 0x40
    NSArray *_destinationKeyPath;	// 72 = 0x48
    NSArray *_sourceKeyPath;	// 80 = 0x50
}

+ (id)treatmentActionWithField:(id)arg1 configuration:(id)arg2 topic:(id)arg3;	// IMP=0x0060000000041a62
- (void).cxx_destruct;	// IMP=0x0000000000042f78
- (id)performAction:(id)arg1 context:(id)arg2;	// IMP=0x0000000000042720
- (void)performActionWithContext:(id)arg1;	// IMP=0x00000000000420fa
- (id)initWithField:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000041c8e

@end

