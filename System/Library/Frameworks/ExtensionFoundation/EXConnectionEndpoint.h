//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnectionEndpoint, MISSING_TYPE, NSString;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface EXConnectionEndpoint : NSObject
{
    MISSING_TYPE *identifier;	// 8 = 0x8
    MISSING_TYPE *bsServiceConnectionEndpoint;	// 24 = 0x18
    MISSING_TYPE *xpcEndpoint;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000074a20
- (void).cxx_destruct;	// IMP=0x0000000000074ce0
- (id)init;	// IMP=0x0000000000074c80
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000074c40
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000074bf0
- (id)initWithIdentifier:(id)arg1 xpcEndpoint:(id)arg2;	// IMP=0x0000000000074980
- (id)initWithIdentifier:(id)arg1 bsServiceConnectionEndpoint:(id)arg2;	// IMP=0x00000000000748d0
@property(nonatomic, retain) id <OS_xpc_object> xpcEndpoint; // @synthesize xpcEndpoint;
@property(nonatomic, readonly) BSServiceConnectionEndpoint *bsServiceConnectionEndpoint; // @synthesize bsServiceConnectionEndpoint;
@property(nonatomic, readonly) NSString *service;
@property(nonatomic, readonly) NSString *identifier;

@end

