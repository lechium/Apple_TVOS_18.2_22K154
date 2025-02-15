//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKXStructProxyBase;

@interface CKXStructProxyChildCache : NSObject
{
    struct unordered_map<unsigned long long, CKXProxyBase *, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, CKXProxyBase *>>> fieldToProxy;	// 8 = 0x8
    CKXStructProxyBase *_proxy;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x00000000000e1bef
- (void).cxx_destruct;	// IMP=0x00000000000e1bb5
@property(readonly, nonatomic) __weak CKXStructProxyBase *proxy; // @synthesize proxy=_proxy;
- (id)structListProxyForListReference:(unsigned long long)arg1 mutable:(_Bool)arg2;	// IMP=0x00000000000e1a49
- (id)structProxyForStructReference:(unsigned long long)arg1 mutable:(_Bool)arg2;	// IMP=0x00000000000e18f3
- (void)reset;	// IMP=0x00000000000e18a4
- (id)initWithProxy:(id)arg1;	// IMP=0x00000000000e182c

@end

