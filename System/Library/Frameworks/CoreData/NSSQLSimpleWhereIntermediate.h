//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSExpression, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSSQLSimpleWhereIntermediate
{
    NSMutableArray *_comparisonPredicateScopedItem;	// 24 = 0x18
    NSExpression *_effectiveLeftExpression;	// 32 = 0x20
    NSExpression *_effectiveRightExpression;	// 40 = 0x28
}

- (id)generateSQLStringInContext:(id)arg1;	// IMP=0x000000000020bc11
- (id)_lastScopedItem;	// IMP=0x0000000000207a6e
- (_Bool)isWhereScoped;	// IMP=0x0000000000207a66
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2;	// IMP=0x0000000000207806
- (void)dealloc;	// IMP=0x0000000000207794

@end

