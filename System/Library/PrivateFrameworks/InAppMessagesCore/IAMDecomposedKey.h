//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCompoundPredicate, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface IAMDecomposedKey : NSObject
{
    NSMutableArray *rawPredicateConditions;	// 8 = 0x8
    NSCompoundPredicate *compoundPredicate;	// 16 = 0x10
    _Bool compoundPredicateNeedsInitialization;	// 24 = 0x18
    NSMutableDictionary *_ruleDestructuredIdentifiers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000002c50
@property(retain, nonatomic) NSMutableDictionary *ruleDestructuredIdentifiers; // @synthesize ruleDestructuredIdentifiers=_ruleDestructuredIdentifiers;
- (void)constructCompoundPredicateIfNeeded;	// IMP=0x0000000000002a80
- (_Bool)predicatesMatchFigaroEventProperties:(id)arg1;	// IMP=0x0000000000002a0d
- (_Bool)hasPredicates;	// IMP=0x00000000000029f0
- (void)addPredicateCondition:(id)arg1;	// IMP=0x00000000000029a1
- (id)init;	// IMP=0x0000000000002913

@end

