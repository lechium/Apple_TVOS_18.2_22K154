//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CPRotatedRegion
{
    struct CGRect normalizedBounds;	// 128 = 0x80
    _Bool dirtyNormalizedBounds;	// 160 = 0xa0
}

- (void)resizeWith:(id)arg1;	// IMP=0x00000000001c791f
- (void)fitBoundsToChildren;	// IMP=0x00000000001c7572
- (double)bottom;	// IMP=0x00000000001c74dc
- (double)top;	// IMP=0x00000000001c7428
- (double)center;	// IMP=0x00000000001c73e8
- (double)right;	// IMP=0x00000000001c7339
- (double)left;	// IMP=0x00000000001c72a4
- (struct CGPoint)anchor;	// IMP=0x00000000001c7269
- (struct CGRect)normalizedBounds;	// IMP=0x00000000001c721e
- (id)init;	// IMP=0x00000000001c71c1

@end

