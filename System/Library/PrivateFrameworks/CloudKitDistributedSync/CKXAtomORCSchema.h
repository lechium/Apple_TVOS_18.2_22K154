//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CKXORCHelpers;

@interface CKXAtomORCSchema : NSObject
{
    id <CKXORCHelpers> _implementation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d072c
@property(readonly, nonatomic) id <CKXORCHelpers> implementation; // @synthesize implementation=_implementation;
- (unsigned long long)valueColumnIndexForField:(unsigned long long)arg1;	// IMP=0x00000000000d070c
- (unsigned long long)listColumnIndexForReference:(unsigned long long)arg1;	// IMP=0x00000000000d06f6
- (unsigned long long)structReferenceIndexForReference:(unsigned long long)arg1;	// IMP=0x00000000000d06e0
- (unsigned long long)topLevelIndexForStruct:(unsigned long long)arg1;	// IMP=0x00000000000d06ca
- (void)configureColumnsWithRootColumn:(void *)arg1;	// IMP=0x00000000000d06b4
- (id)generateSchema;	// IMP=0x00000000000d069e
- (id)initWithBinding:(id)arg1 formatVersion:(unsigned char)arg2;	// IMP=0x00000000000d04fb

@end

