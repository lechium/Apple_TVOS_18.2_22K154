//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSUUID;

@interface HKUserDomainConceptLinkStructWrapper : NSObject
{
    MISSING_TYPE *value;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000002b5670
- (id)init;	// IMP=0x00000000002b5630
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b54a0
@property(nonatomic, readonly) NSString *description;
- (id)initWithTarget:(id)arg1 type:(long long)arg2;	// IMP=0x00000000002b50e0
@property(nonatomic, readonly) NSUUID *target;
@property(nonatomic, readonly) long long type;
- (id)initWithLink:(id)arg1;	// IMP=0x000000000011e441

@end

