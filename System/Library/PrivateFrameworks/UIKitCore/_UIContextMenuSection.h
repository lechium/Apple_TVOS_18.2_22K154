//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _UIContextMenuSection : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
    _Bool _overridesCellSizeForLargeText;	// 16 = 0x10
    _Bool _isRoot;	// 17 = 0x11
    _Bool _wantsSectionSeparator;	// 18 = 0x12
    _Bool _isMultiColorPalette;	// 19 = 0x13
    NSString *_title;	// 24 = 0x18
    long long _preferredCellSize;	// 32 = 0x20
    long long _layout;	// 40 = 0x28
    unsigned long long _actionLineLimit;	// 48 = 0x30
}

+ (id)sectionWithMenu:(id)arg1;	// IMP=0x00600000005a15a1
- (void).cxx_destruct;	// IMP=0x00000000005a1e7e
@property(readonly, nonatomic) _Bool isMultiColorPalette; // @synthesize isMultiColorPalette=_isMultiColorPalette;
@property(readonly, nonatomic) unsigned long long actionLineLimit; // @synthesize actionLineLimit=_actionLineLimit;
@property(readonly, nonatomic) long long layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) long long preferredCellSize; // @synthesize preferredCellSize=_preferredCellSize;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool wantsSectionSeparator; // @synthesize wantsSectionSeparator=_wantsSectionSeparator;
@property(nonatomic) _Bool isRoot; // @synthesize isRoot=_isRoot;
- (unsigned long long)hash;	// IMP=0x00000000005a1e13
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005a1db8
- (long long)cellSizeGivenTraits:(id)arg1;	// IMP=0x00000000005a1d32

@end

