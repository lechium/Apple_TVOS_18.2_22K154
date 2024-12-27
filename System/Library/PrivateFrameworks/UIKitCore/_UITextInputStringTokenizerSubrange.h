//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITextPosition;

__attribute__((visibility("hidden")))
@interface _UITextInputStringTokenizerSubrange : NSObject
{
    NSString *_substring;	// 8 = 0x8
    UITextPosition *_basePosition;	// 16 = 0x10
    long long _indexOfBase;	// 24 = 0x18
    struct _NSRange _relevantRange;	// 32 = 0x20
}

+ (id)subrangeWithSubstring:(id)arg1 basePosition:(id)arg2;	// IMP=0x0060000000f640d0
- (void).cxx_destruct;	// IMP=0x0000000000f641e8
@property(nonatomic) struct _NSRange relevantRange; // @synthesize relevantRange=_relevantRange;
@property(nonatomic) long long indexOfBase; // @synthesize indexOfBase=_indexOfBase;
@property(readonly, nonatomic) UITextPosition *basePosition; // @synthesize basePosition=_basePosition;
@property(readonly, nonatomic) NSString *substring; // @synthesize substring=_substring;
- (id)description;	// IMP=0x0000000000f64163

@end

