//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC21SiriInformationSearch16VocabularyResult : NSObject
{
    MISSING_TYPE *appId;	// 8 = 0x8
    MISSING_TYPE *itemId;	// 24 = 0x18
    MISSING_TYPE *itemType;	// 40 = 0x28
    MISSING_TYPE *fieldTypes;	// 48 = 0x30
    MISSING_TYPE *score;	// 56 = 0x38
    MISSING_TYPE *spanBegin;	// 64 = 0x40
    MISSING_TYPE *spanEnd;	// 72 = 0x48
    MISSING_TYPE *semanticValue;	// 80 = 0x50
    MISSING_TYPE *fields;	// 96 = 0x60
    MISSING_TYPE *userId;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002b190
- (void).cxx_destruct;	// IMP=0x000000000002d2a0
- (id)init;	// IMP=0x000000000002d220
@property(nonatomic, readonly) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002cad0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002c650

@end

