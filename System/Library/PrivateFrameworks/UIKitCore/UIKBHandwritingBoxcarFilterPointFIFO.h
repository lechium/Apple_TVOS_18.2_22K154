//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingBoxcarFilterPointFIFO
{
    NSMutableArray *_prevPoints;	// 16 = 0x10
    unsigned long long _width;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000c8db1f
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(retain, nonatomic) NSMutableArray *prevPoints; // @synthesize prevPoints=_prevPoints;
- (void)clear;	// IMP=0x0000000000c8da6d
- (void)flush;	// IMP=0x0000000000c8d8d5
- (void)addPoint:(struct)arg1;	// IMP=0x0000000000c8d67a
- (void)emitAveragedPoint;	// IMP=0x0000000000c8d3fe
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2;	// IMP=0x0000000000c8d36b

@end

