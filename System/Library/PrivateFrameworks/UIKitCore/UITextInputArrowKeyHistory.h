//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITextPosition;

__attribute__((visibility("hidden")))
@interface UITextInputArrowKeyHistory : NSObject
{
    UITextPosition *startPosition;	// 8 = 0x8
    long long amount;	// 16 = 0x10
    int anchor;	// 24 = 0x18
    UITextPosition *start;	// 32 = 0x20
    UITextPosition *end;	// 40 = 0x28
    UITextPosition *cursor;	// 48 = 0x30
    _Bool affinityDownstream;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000f60493
@property(nonatomic) long long amount; // @synthesize amount;
@property(nonatomic) _Bool affinityDownstream; // @synthesize affinityDownstream;
@property(retain, nonatomic) UITextPosition *end; // @synthesize end;
@property(retain, nonatomic) UITextPosition *start; // @synthesize start;
@property(retain, nonatomic) UITextPosition *cursor; // @synthesize cursor;
@property(nonatomic) int anchor; // @synthesize anchor;
@property(retain, nonatomic) UITextPosition *startPosition; // @synthesize startPosition;

@end

