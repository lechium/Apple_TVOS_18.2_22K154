//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TVSPRow;

__attribute__((visibility("hidden")))
@interface _TVSPCollectionViewSectionInfo : NSObject
{
    NSString *_sectionID;	// 8 = 0x8
    NSArray *_layoutIdentifiers;	// 16 = 0x10
    NSArray *_itemIdentifiers;	// 24 = 0x18
    TVSPRow *_orthogonalRow;	// 32 = 0x20
}

+ (id)orthogonalSectionInfoWithSectionID:(id)arg1 row:(id)arg2 layoutIdentifier:(id)arg3 itemIdentifiers:(id)arg4;	// IMP=0x0060000000080aa0
+ (id)sectionInfoWithSectionID:(id)arg1 identifiers:(id)arg2;	// IMP=0x00600000000809f0
- (void).cxx_destruct;	// IMP=0x0000000000080cb0
@property(readonly, nonatomic) TVSPRow *orthogonalRow; // @synthesize orthogonalRow=_orthogonalRow;
@property(readonly, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(readonly, nonatomic) NSArray *layoutIdentifiers; // @synthesize layoutIdentifiers=_layoutIdentifiers;
@property(readonly, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(readonly, nonatomic) _Bool isOrthogonalSection;
- (id)initWithSectionID:(id)arg1 row:(id)arg2 layoutIdentifiers:(id)arg3 itemIdentifiers:(id)arg4;	// IMP=0x0000000000080860

@end

