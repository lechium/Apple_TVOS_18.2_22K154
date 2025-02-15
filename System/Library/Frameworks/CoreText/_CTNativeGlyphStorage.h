//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _CTNativeGlyphStorage
{
    const long long *_attachCounts;	// 56 = 0x38
    const struct CGPoint *_origins;	// 64 = 0x40
    unsigned long long _retainCount;	// 72 = 0x48
    struct GlyphStack *_stack;	// 80 = 0x50
    long long _capacity;	// 88 = 0x58
    void *_preallocatedStorage;	// 96 = 0x60
}

+ (id)newWithCount:(long long)arg1 capacity:(long long)arg2;	// IMP=0x006000000007f29c
- (void)popGlyphAtIndex:(long long)arg1;	// IMP=0x0000000000080163
- (void)pushGlyphAtIndex:(long long)arg1;	// IMP=0x000000000008006e
- (void)initGlyphStackWithCapacity:(long long)arg1;	// IMP=0x000000000007ffec
- (void)moveGlyphsFromRange:(CDStruct_912cb5d2)arg1 toIndex:(long long)arg2;	// IMP=0x000000000007fedd
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;	// IMP=0x000000000007fe10
- (void)insertGlyphsAtRange:(CDStruct_912cb5d2)arg1;	// IMP=0x000000000007fa8d
- (void)puntStringIndicesInRange:(CDStruct_912cb5d2)arg1 by:(long long)arg2;	// IMP=0x000000000007fa67
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;	// IMP=0x000000000007fa59
- (void)setAdvance:(struct CGSize)arg1 atIndex:(long long)arg2;	// IMP=0x000000000007f9de
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;	// IMP=0x000000000007f9d0
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;	// IMP=0x000000000007f9c3
- (void)setOrigin:(struct CGPoint)arg1 atIndex:(long long)arg2;	// IMP=0x000000000007f932
- (struct CGPoint)originAtIndex:(long long)arg1;	// IMP=0x000000000007f903
- (void)resetOrigins:(CDStruct_912cb5d2)arg1;	// IMP=0x000000000007f8fd
- (_Bool)implementsOrigins;	// IMP=0x000000000007f8f5
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;	// IMP=0x000000000007f8a1
- (long long)attachmentCountAtIndex:(long long)arg1;	// IMP=0x000000000007f883
- (const struct CGSize *)allocatedAdvances;	// IMP=0x000000000007f830
- (void)dealloc;	// IMP=0x000000000007f716
- (unsigned long long)retainCount;	// IMP=0x000000000007f702
- (oneway void)release;	// IMP=0x000000000007f69d
- (id)retain;	// IMP=0x000000000007f664
- (_Bool)_isDeallocating;	// IMP=0x000000000007f65c
- (_Bool)_tryRetain;	// IMP=0x000000000007f654
- (id)copyWithRange:(CDStruct_912cb5d2)arg1;	// IMP=0x000000000007f495
- (id)initWithCount:(long long)arg1 capacity:(long long)arg2;	// IMP=0x000000000007f3b6

@end

