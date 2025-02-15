//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EQKitEnvironment, NSData;
@protocol EQKitExpression;

__attribute__((visibility("hidden")))
@interface EQKitEquation : NSObject
{
    id <EQKitExpression> mRoot;	// 8 = 0x8
    NSData *mSource;	// 16 = 0x10
    EQKitEnvironment *mEnvironment;	// 24 = 0x18
}

+ (id)mathMLStringFromLaTeXString:(id)arg1 environment:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000007f86
+ (id)equationSourceFromXMLMetadata:(id)arg1;	// IMP=0x0060000000007cb3
+ (id)xmlMetadataFromEquationSource:(id)arg1;	// IMP=0x0060000000007b75
+ (id)equationWithXMLDoc:(struct _xmlDoc *)arg1 node:(struct _xmlNode *)arg2 environment:(id)arg3 error:(id *)arg4;	// IMP=0x0060000000007a64
+ (id)equationWithString:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x006000000000798d
+ (id)equationWithString:(id)arg1 format:(unsigned long long)arg2 environment:(id)arg3 error:(id *)arg4;	// IMP=0x00600000000078c5
+ (id)equationWithData:(id)arg1 format:(unsigned long long)arg2 environment:(id)arg3 error:(id *)arg4;	// IMP=0x0060000000006d92
+ (unsigned long long)formatFromString:(id)arg1;	// IMP=0x0060000000006912
+ (unsigned long long)formatFromData:(id)arg1;	// IMP=0x00600000000068ad
@property(readonly, nonatomic) EQKitEnvironment *environment; // @synthesize environment=mEnvironment;
@property(readonly, nonatomic) id <EQKitExpression> root; // @synthesize root=mRoot;
- (id)description;	// IMP=0x0000000000007f3d
- (void)dealloc;	// IMP=0x0000000000007eec
- (id)newLayout;	// IMP=0x0000000000007ed6
- (_Bool)isBaseFontNameUsed;	// IMP=0x0000000000007ec0
- (_Bool)exportToXMLWriter:(struct _xmlTextWriter *)arg1 ns:(const char *)arg2 prefix:(const char *)arg3 characterCount:(int *)arg4;	// IMP=0x0000000000007b45
- (id)initWithRoot:(id)arg1 source:(id)arg2;	// IMP=0x0000000000006832

@end

