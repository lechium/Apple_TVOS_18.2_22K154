//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface ASCLockupFeatureSignpostTags : NSObject
{
    NSSet *_signpostTags;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002453b
- (void).cxx_destruct;	// IMP=0x00000000000248f6
@property(readonly, copy, nonatomic) NSSet *signpostTags; // @synthesize signpostTags=_signpostTags;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000024743
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000246bd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002464d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000024543
- (id)initWithSignpostTags:(id)arg1;	// IMP=0x00000000000244c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

