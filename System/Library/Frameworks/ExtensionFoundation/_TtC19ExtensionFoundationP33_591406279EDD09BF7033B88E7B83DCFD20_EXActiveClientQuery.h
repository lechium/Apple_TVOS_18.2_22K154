//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC19ExtensionFoundationP33_591406279EDD09BF7033B88E7B83DCFD20_EXActiveClientQuery : NSObject
{
    MISSING_TYPE *query;	// 8 = 0x8
    MISSING_TYPE *started;	// 16 = 0x10
    MISSING_TYPE *_observers;	// 24 = 0x18
    MISSING_TYPE *xpcListener;	// 32 = 0x20
    MISSING_TYPE *connection;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000054a40
- (id)init;	// IMP=0x00000000000549e0
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000054930
- (void)query:(id)arg1 resultDidUpdate:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000547a0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000054730

@end

