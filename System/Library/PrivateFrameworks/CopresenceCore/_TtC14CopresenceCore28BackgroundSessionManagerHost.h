//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC14CopresenceCore28BackgroundSessionManagerHost : NSObject
{
    MISSING_TYPE *listeners;	// 8 = 0x8
    MISSING_TYPE *clientIdentifierToDataSourceMap;	// 16 = 0x10
    MISSING_TYPE *featureFlags;	// 24 = 0x18
    MISSING_TYPE *queue;	// 32 = 0x20
    MISSING_TYPE *connections;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000148ad0
- (id)init;	// IMP=0x0000000000148e60
- (void)dealloc;	// IMP=0x0000000000148ab0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000148ea0

@end

