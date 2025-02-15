//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface TVISCostMatrix : NSObject
{
    struct {
        _Bool isOptimumIndexPathEvaluated;
    } _flags;	// 8 = 0x8
    NSIndexPath *_optimumIndexPath;	// 16 = 0x10
    unsigned long long _dimension;	// 24 = 0x18
    char *_matrix;	// 32 = 0x20
}

+ (id)_defaultIndexPathForDimension:(unsigned long long)arg1;	// IMP=0x00600000000459d0
+ (id)costMatrixWithContentsOfFileAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000045b10
- (void).cxx_destruct;	// IMP=0x0000000000045ae0
@property(readonly, nonatomic) char *matrix; // @synthesize matrix=_matrix;
@property(readonly, nonatomic) unsigned long long dimension; // @synthesize dimension=_dimension;
- (id)_calculateOptimumIndexPath;	// IMP=0x00000000000454d0
- (id)costMatrixForSubsetIndexes:(id)arg1;	// IMP=0x0000000000044fd0
- (id)costMatrixByAddingCostMatrix:(id)arg1;	// IMP=0x0000000000044ea0
@property(readonly, nonatomic) NSIndexPath *optimumIndexPath; // @synthesize optimumIndexPath=_optimumIndexPath;
- (void)dealloc;	// IMP=0x0000000000044de0
- (id)initWithMatrix:(char *)arg1 dimension:(unsigned long long)arg2;	// IMP=0x0000000000044d40
- (id)initWithElements:(char *)arg1 dimension:(unsigned long long)arg2;	// IMP=0x0000000000044c00

@end

