//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CLLocation, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDLocationClusterGroup : HMFObject
{
    CLLocation *_center;	// 8 = 0x8
    NSMutableArray *_locations;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000cc880f
@property(readonly) NSMutableArray *locations; // @synthesize locations=_locations;
@property(readonly, copy) CLLocation *center; // @synthesize center=_center;
- (id)attributeDescriptions;	// IMP=0x0000000000cc86a1
- (id)initWithCenter:(id)arg1;	// IMP=0x0000000000cc85ed

@end

