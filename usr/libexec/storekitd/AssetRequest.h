//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableURLRequest.h>

@class AssetRequestProperties;

@interface AssetRequest : NSMutableURLRequest
{
    AssetRequestProperties *_properties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000062e8f
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000062e19
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000062e07
- (id)copyRequestProperties;	// IMP=0x0010000000062dea
- (void)setAllowsExpensiveNetworkAccess:(_Bool)arg1;	// IMP=0x0010000000062d96
- (void)setAllowsConstrainedNetworkAccess:(_Bool)arg1;	// IMP=0x0010000000062d42
- (void)setAllowsCellularAccess:(_Bool)arg1;	// IMP=0x0010000000062cee
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;	// IMP=0x0010000000062c92
- (id)initWithURL:(id)arg1 properties:(id)arg2;	// IMP=0x0010000000062c0e
- (id)initWithRequest:(id)arg1 properties:(id)arg2;	// IMP=0x0010000000062a84

@end

