//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, PXVisualDiagnosticsTable;

__attribute__((visibility("hidden")))
@interface _PXVisualDiagnosticsTableRow : NSObject
{
    NSSet *_availableColumnIdentifiers;	// 8 = 0x8
    double _height;	// 16 = 0x10
    PXVisualDiagnosticsTable *_table;	// 24 = 0x18
    NSMutableDictionary *_cellsByColumnIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000589c8
@property(readonly, nonatomic) NSMutableDictionary *cellsByColumnIdentifier; // @synthesize cellsByColumnIdentifier=_cellsByColumnIdentifier;
@property(readonly, nonatomic) __weak PXVisualDiagnosticsTable *table; // @synthesize table=_table;
@property(nonatomic) double height; // @synthesize height=_height;
- (void)addCellForColumnWithIdentifier:(id)arg1 rendering:(CDUnknownBlockType)arg2;	// IMP=0x0000000000058797
- (void)addCellForColumnWithIdentifier:(id)arg1 text:(id)arg2;	// IMP=0x000000000005869f
- (void)addCellForColumnWithIdentifier:(id)arg1 format:(id)arg2;	// IMP=0x000000000005857f
- (id)initWithTable:(id)arg1 availableColumnIdentifiers:(id)arg2;	// IMP=0x000000000005847e

@end

