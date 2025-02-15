//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EQKitSourceAttribution, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface EQKitMathMLMRow
{
    NSArray *mChildren;	// 16 = 0x10
    struct {
        unsigned int mImplied;
    } mFlags;	// 24 = 0x18
    EQKitSourceAttribution *mSourceAttribution;	// 32 = 0x20
}

@property(retain, nonatomic) EQKitSourceAttribution *sourceAttribution; // @synthesize sourceAttribution=mSourceAttribution;
- (id)schemataChildren;	// IMP=0x000000000004ff19
@property(readonly, copy) NSString *description;
- (_Bool)isBaseFontNameUsed;	// IMP=0x000000000004fd83
- (int)isOperatorPaddingRequired;	// IMP=0x000000000004fd78
- (id)operatorCore;	// IMP=0x000000000004fd1a
- (_Bool)isEmbellishedOperator;	// IMP=0x000000000004fcbc
- (struct Schemata)layoutSchemata;	// IMP=0x000000000004fc99
- (id)children;	// IMP=0x000000000004fc88
- (void)dealloc;	// IMP=0x000000000004fc30
- (const void *)mathMLAttributes;	// IMP=0x000000000004fc28
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;	// IMP=0x000000000004fbe5
- (id)initWithChildren:(id)arg1 node:(struct _xmlNode *)arg2;	// IMP=0x000000000004fa74
- (id)initWithChildren:(id)arg1;	// IMP=0x000000000004fa60
- (id)init;	// IMP=0x000000000004fa28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

