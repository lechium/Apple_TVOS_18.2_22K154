//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSCountableTextLocation.h"

@class NSTextElement;
@protocol NSTextLocation;

__attribute__((visibility("hidden")))
@interface _NSTextElementLocation : NSCountableTextLocation
{
    NSTextElement *_textElement;	// 8 = 0x8
    id <NSTextLocation> _baseLocation;	// 16 = 0x10
    long long _offset;	// 24 = 0x18
}

@property(readonly) long long offset; // @synthesize offset=_offset;
@property(readonly) id <NSTextLocation> baseLocation; // @synthesize baseLocation=_baseLocation;
@property NSTextElement *textElement; // @synthesize textElement=_textElement;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008b8e0
- (_Bool)isEqualToTextLocation:(id)arg1;	// IMP=0x000000000008b8c7
- (long long)compare:(id)arg1;	// IMP=0x000000000008b83e
- (void)updateBaseLocation;	// IMP=0x000000000008b763
- (void)dealloc;	// IMP=0x000000000008b707
- (id)initWithTextElement:(id)arg1 baseLocation:(id)arg2 offset:(long long)arg3;	// IMP=0x000000000008b602

@end

