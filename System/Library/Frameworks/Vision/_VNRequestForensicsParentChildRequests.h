//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, VNRequest;

__attribute__((visibility("hidden")))
@interface _VNRequestForensicsParentChildRequests : NSObject
{
    VNRequest *_parentRequest;	// 8 = 0x8
    NSArray *_orderedChildRequests;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001a0e14
@property(readonly, copy, nonatomic) NSArray *orderedChildRequests; // @synthesize orderedChildRequests=_orderedChildRequests;
@property(readonly, nonatomic) VNRequest *parentRequest; // @synthesize parentRequest=_parentRequest;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a0b9e
- (unsigned long long)hash;	// IMP=0x00000000001a0b0d
- (id)description;	// IMP=0x00000000001a0a4c
- (id)initWithParentRequest:(id)arg1 orderedChildRequests:(id)arg2;	// IMP=0x00000000001a0992

@end

