//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface _UIDatePickerLinkedLabelCacheKey : NSObject
{
    NSString *_text;	// 8 = 0x8
    UIFont *_font;	// 16 = 0x10
    double _height;	// 24 = 0x18
    unsigned long long _hash;	// 32 = 0x20
}

+ (id)keyWithText:(id)arg1 font:(id)arg2 height:(double)arg3;	// IMP=0x006000000094b895
- (void).cxx_destruct;	// IMP=0x000000000094baec
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000094ba34
- (unsigned long long)hash;	// IMP=0x000000000094b9be
- (id)initWithText:(id)arg1 font:(id)arg2 height:(double)arg3;	// IMP=0x000000000094b915

@end

