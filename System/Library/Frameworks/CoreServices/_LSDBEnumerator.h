//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LSEnumerator.h"

__attribute__((visibility("hidden")))
@interface _LSDBEnumerator : LSEnumerator
{
    struct Context _context;	// 32 = 0x20
    unsigned long long _index;	// 64 = 0x40
    id _lastFastObject;	// 72 = 0x48
    unsigned int _hasReachedEnd:1;	// 80 = 0x50
    unsigned int _hasTriedToPrepare:1;	// 80 = 0x50
    unsigned int _hasPrepared:1;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x00000000000e07f4
- (void).cxx_destruct;	// IMP=0x00000000000e074e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e068a
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000e061c
- (id)nextObject;	// IMP=0x00000000000e060a
- (id)swift_firstWhere:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e0589
- (void)swift_forEach:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e022a
- (_Bool)_getObject:(id *)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext *)arg3;	// IMP=0x00000000000e0221
- (_Bool)_prepareWithContext:(struct LSContext *)arg1 error:(id *)arg2;	// IMP=0x00000000000e0218
- (id)_initWithContext:(struct LSContext *)arg1;	// IMP=0x00000000000dfe20

@end

