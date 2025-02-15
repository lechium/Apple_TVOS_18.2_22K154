//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, NSString;

@interface CLMicroLocationGeofence : NSObject
{
    NSString *_regionId;	// 8 = 0x8
    CLLocation *_regionCenterLocation;	// 16 = 0x10
}

@property(retain, nonatomic) CLLocation *regionCenterLocation; // @synthesize regionCenterLocation=_regionCenterLocation;
@property(retain, nonatomic) NSString *regionId; // @synthesize regionId=_regionId;
- (void)dealloc;	// IMP=0x001000000005975b
- (id)init;	// IMP=0x001000000005972c

@end

