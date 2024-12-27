//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSTwoFactorEntryTextField : NSObject
{
    _Bool _autoShowKeyboard;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    unsigned long long _expectedLength;	// 24 = 0x18
    NSString *_text;	// 32 = 0x20
    long long _keyboardType;	// 40 = 0x28
    long long _autocapitalizationType;	// 48 = 0x30
    long long _autocorrectionType;	// 56 = 0x38
    long long _returnKeyType;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000048036
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool autoShowKeyboard; // @synthesize autoShowKeyboard=_autoShowKeyboard;
@property(nonatomic) unsigned long long expectedLength; // @synthesize expectedLength=_expectedLength;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (id)init;	// IMP=0x0000000000047f31

@end

