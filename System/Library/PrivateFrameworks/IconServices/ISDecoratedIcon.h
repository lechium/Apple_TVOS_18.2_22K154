//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISIcon, NSArray;

__attribute__((visibility("hidden")))
@interface ISDecoratedIcon
{
    NSArray *_decorations;	// 16 = 0x10
    ISIcon *_icon;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000002e4cb
- (void).cxx_destruct;	// IMP=0x000000000002f139
@property(readonly) ISIcon *icon; // @synthesize icon=_icon;
- (id)symbol;	// IMP=0x000000000002f106
- (id)makeResourceProvider;	// IMP=0x000000000002ec6c
@property(readonly) NSArray *decorations;
- (id)description;	// IMP=0x000000000002eafc
- (id)iconWithDecorations:(id)arg1;	// IMP=0x000000000002ea45
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002e98e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002e7c0
- (id)initWithIcon:(id)arg1 decorations:(id)arg2;	// IMP=0x000000000002e4d3

@end

