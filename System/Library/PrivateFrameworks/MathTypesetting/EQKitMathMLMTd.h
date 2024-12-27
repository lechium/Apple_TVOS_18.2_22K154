//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EQKitSourceAttribution, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface EQKitMathMLMTd
{
    NSArray *mChildren;	// 16 = 0x10
    EQKitSourceAttribution *mSourceAttribution;	// 24 = 0x18
}

@property(retain, nonatomic) EQKitSourceAttribution *sourceAttribution; // @synthesize sourceAttribution=mSourceAttribution;
- (struct Schemata)layoutSchemata;	// IMP=0x0000000000052949
- (id)schemataChildren;	// IMP=0x0000000000052938
@property(readonly, copy) NSString *description;
- (_Bool)isBaseFontNameUsed;	// IMP=0x00000000000527c8
- (int)isOperatorPaddingRequired;	// IMP=0x00000000000527bd
- (void)dealloc;	// IMP=0x0000000000052765
- (const void *)mathMLAttributes;	// IMP=0x00000000000526f4
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;	// IMP=0x0000000000052684
- (id)initWithChildren:(id)arg1 node:(struct _xmlNode *)arg2;	// IMP=0x0000000000052529
- (id)initWithChildren:(id)arg1;	// IMP=0x0000000000052515
- (id)init;	// IMP=0x00000000000524dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

