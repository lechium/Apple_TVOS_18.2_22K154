//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableCollectionGetter
{
    NSKeyValueGetter *_baseGetter;	// 88 = 0x58
    NSKeyValueSetter *_baseSetter;	// 96 = 0x60
}

- (_Bool)treatNilValuesLikeEmptyCollections;	// IMP=0x00000000007c07da
- (id)baseSetter;	// IMP=0x00000000007c07c9
- (id)baseGetter;	// IMP=0x00000000007c07b8
- (void)dealloc;	// IMP=0x00000000007c073d
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 baseGetter:(id)arg3 baseSetter:(id)arg4 containerIsa:(Class)arg5 proxyClass:(Class)arg6;	// IMP=0x00000000007c0603

@end

