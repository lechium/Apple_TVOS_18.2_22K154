//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITransform;

__attribute__((visibility("hidden")))
@interface _UITransformToReasonAssociation : NSObject
{
    UITransform *_transform;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
}

+ (id)association:(id)arg1 reason:(id)arg2;	// IMP=0x0060000000a1ad07
- (void).cxx_destruct;	// IMP=0x0000000000a1af05
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) UITransform *transform; // @synthesize transform=_transform;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a1ae5a
- (unsigned long long)hash;	// IMP=0x0000000000a1ae12
- (id)initWithTransform:(id)arg1 reason:(id)arg2;	// IMP=0x0000000000a1ad79

@end

