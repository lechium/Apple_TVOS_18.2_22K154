//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIButtonConfigurationStyleBehaviors : NSObject
{
    long long _style;	// 8 = 0x8
    NSString *_styleDescription;	// 16 = 0x10
    CDUnknownBlockType _calculateForegroundColor;	// 24 = 0x18
    CDUnknownBlockType _calculateBackgroundColor;	// 32 = 0x20
    CDUnknownBlockType _calculateBackgroundVisualEffect;	// 40 = 0x28
    long long _selectionStyle;	// 48 = 0x30
    long long _automaticMacIdiomStyle;	// 56 = 0x38
    long long _cornerStyle;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000acae89
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000000ac8be1

@end

