//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MKCompassDirectionImageKey : NSObject
{
    NSString *_headingString;	// 8 = 0x8
    long long _compassViewStyle;	// 16 = 0x10
    struct CGSize _size;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000019fd87
@property(readonly, nonatomic) long long compassViewStyle; // @synthesize compassViewStyle=_compassViewStyle;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSString *headingString; // @synthesize headingString=_headingString;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019fd0a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019fbf2
- (unsigned long long)hash;	// IMP=0x000000000019fba2
- (id)initWithSize:(struct CGSize)arg1 headingString:(id)arg2 compassViewStyle:(long long)arg3;	// IMP=0x000000000019faf8

@end

