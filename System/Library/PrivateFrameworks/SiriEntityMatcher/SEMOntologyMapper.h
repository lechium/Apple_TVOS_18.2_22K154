//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SEMOntologyMapper : NSObject
{
}

+ (id)_radioStationSignalTypeAsString:(unsigned int)arg1;	// IMP=0x0080000000041200
+ (void)_appendSpanProperties:(id)arg1 forHomeServiceAreaMatch:(id)arg2 entityInfo:(id)arg3;	// IMP=0x0080000000040d0f
+ (void)_appendSpanProperties:(id)arg1 forLearnedMediaEntityMatch:(id)arg2 entityInfo:(id)arg3;	// IMP=0x0080000000040b2e
+ (void)_appendSpanProperties:(id)arg1 forLearnedContactMatch:(id)arg2 entityInfo:(id)arg3;	// IMP=0x00800000000409f9
+ (void)_appendSpanProperties:(id)arg1 forGlobalTermMatch:(id)arg2 entityInfo:(id)arg3;	// IMP=0x0080000000040706
+ (void)_appendSpanProperties:(id)arg1 forRadioStationMatch:(id)arg2 entityInfo:(id)arg3;	// IMP=0x0080000000040201
+ (void)_appendSpanProperties:(id)arg1 forAppShortcutEntityMatch:(id)arg2 entityInfo:(id)arg3;	// IMP=0x008000000003ffd2
+ (void)_appendSpanProperties:(id)arg1 forAppShortcutPhraseMatch:(id)arg2 entityInfo:(id)arg3;	// IMP=0x008000000003fdf1
+ (void)_appendSpanProperties:(id)arg1 forHomeMatch:(id)arg2 entityInfo:(id)arg3;	// IMP=0x008000000003f95e
+ (void)_appendSpanProperties:(id)arg1 forInstalledAppMatch:(id)arg2;	// IMP=0x008000000003f858
+ (void)_appendSpanProperties:(id)arg1 forContactMatch:(id)arg2 entityInfo:(id)arg3;	// IMP=0x008000000003f3e0
+ (void)_appendSpanProperties:(id)arg1 forCustomTermMatch:(id)arg2 entityInfo:(id)arg3;	// IMP=0x008000000003f0e5
+ (id)_entitySpanForCascadeMatch:(id)arg1 startIndex:(unsigned int)arg2 endIndex:(unsigned int)arg3 label:(id)arg4;	// IMP=0x008000000003eb0b
+ (void)_setIdentifiersOnEdgeNode:(id)arg1 entitySpan:(id)arg2 spanInfo:(id)arg3 probability:(float)arg4;	// IMP=0x008000000003e514
+ (optional_039dfea1)_ontologyMappingFromFieldType:(unsigned short)arg1;	// IMP=0x008000000003da16
+ (optional_039dfea1)_ontologyMappingFromCascadeSpanMatch:(id)arg1;	// IMP=0x008000000003d3dd
+ (id)ontologyGraphFromSpanMatch:(id)arg1;	// IMP=0x008000000003cd5c

@end

