//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSTextHighlightShapeProvider;

__attribute__((visibility("hidden")))
@interface _NSTextHighlightCluster : NSObject
{
    NSMapTable *_bottomBordersOfRuns;	// 8 = 0x8
    NSMapTable *_topBordersOfRuns;	// 16 = 0x10
    NSTextHighlightShapeProvider *_shapeProvider;	// 24 = 0x18
    NSMutableArray *_runs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000094fcf
- (void)registerMaxYOfRun:(id)arg1;	// IMP=0x0000000000094a22
- (void)registerMinYOfRun:(id)arg1;	// IMP=0x00000000000946e0
- (void)accessBorderDict:(id)arg1 forKey:(double)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000094553
- (void)addToBorderDict:(id)arg1 key:(double)arg2 object:(struct CGRect)arg3;	// IMP=0x0000000000094438

@end

