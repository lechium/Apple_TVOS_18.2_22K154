//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNBoundingSphere : NSObject
{
    struct SCNVector3 center;	// 8 = 0x8
    double radius;	// 24 = 0x18
}

@property(nonatomic) double radius; // @synthesize radius;
@property(nonatomic) struct SCNVector3 center; // @synthesize center;
- (id)description;	// IMP=0x0000000000294e2f

@end

