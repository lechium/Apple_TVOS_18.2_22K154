//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface ExternalPurchaseLinkResponse : NSObject
{
    NSURL *_single;	// 8 = 0x8
    NSArray *_multi;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000017e10
- (void).cxx_destruct;	// IMP=0x0000000000017fe3
@property(readonly, nonatomic) NSArray *multi; // @synthesize multi=_multi;
@property(readonly, nonatomic) NSURL *single; // @synthesize single=_single;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000017ec6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000017e18
- (id)initWithSingle:(id)arg1 multi:(id)arg2;	// IMP=0x0000000000017d88

@end

