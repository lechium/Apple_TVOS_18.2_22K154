//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestExpectedResult : NSObject
{
    NSMutableDictionary *_textFieldTagToTextFieldType;	// 8 = 0x8
    long long _formType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000bb0b79
@property(nonatomic) long long formType; // @synthesize formType=_formType;
- (void)setType:(long long)arg1 forTextFieldWithTag:(long long)arg2;	// IMP=0x0000000000bb0ad6
- (long long)typeForTextFieldWithTag:(long long)arg1;	// IMP=0x0000000000bb0a5a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000bb09e9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000bb092c
- (id)init;	// IMP=0x0000000000bb08b4

@end

