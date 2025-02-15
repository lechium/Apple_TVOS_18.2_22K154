//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDictationToken : NSObject
{
    _Bool _removeSpaceBefore;	// 8 = 0x8
    _Bool _removeSpaceAfter;	// 9 = 0x9
    NSString *_text;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000d9adf5
- (void).cxx_destruct;	// IMP=0x0000000000d9b1e8
@property(readonly, nonatomic) _Bool removeSpaceAfter; // @synthesize removeSpaceAfter=_removeSpaceAfter;
@property(nonatomic) _Bool removeSpaceBefore; // @synthesize removeSpaceBefore=_removeSpaceBefore;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)_descriptionExtra;	// IMP=0x0000000000d9b1a7
- (id)description;	// IMP=0x0000000000d9b0c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d9affc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000d9af72
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000d9ae93
- (id)initWithText:(id)arg1 removeSpaceBefore:(_Bool)arg2 removeSpaceAfter:(_Bool)arg3;	// IMP=0x0000000000d9adfd

@end

