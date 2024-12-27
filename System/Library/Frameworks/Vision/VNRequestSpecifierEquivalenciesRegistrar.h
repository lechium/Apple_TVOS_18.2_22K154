//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNRequestSpecifierEquivalenciesRegistrar : NSObject
{
    NSMutableDictionary *_equivalenciesLookup;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000035d602
- (_Bool)registerRequestSpecifier:(id)arg1 equivalencyToRequestSpecifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000035d3cc
- (_Bool)registerRequestClassName:(id)arg1 revision:(unsigned long long)arg2 equivalencyToRequestClassName:(id)arg3 revision:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x000000000035d2f3
- (_Bool)registerRequestClassName:(id)arg1 revision:(unsigned long long)arg2 equivalencyToRevision:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000035d21e
- (_Bool)registerRequestClass:(Class)arg1 revision:(unsigned long long)arg2 equivalencyToRevision:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000035d154
- (id)equivalenciesForRequestSpecifier:(id)arg1;	// IMP=0x000000000035d0f3
- (_Bool)isRequestSpecifier:(id)arg1 equivalentToRequestSpecifier:(id)arg2;	// IMP=0x000000000035cff5
- (id)init;	// IMP=0x000000000035cf9f

@end

