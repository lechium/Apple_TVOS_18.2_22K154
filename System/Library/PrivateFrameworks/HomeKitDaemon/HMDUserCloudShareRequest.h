//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHome, NSDate, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDUserCloudShareRequest : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
    NSDate *_startDate;	// 16 = 0x10
    NSString *_containerID;	// 24 = 0x18
    HMDHome *_home;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000841bec
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) NSString *containerID; // @synthesize containerID=_containerID;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)initWithStartDate:(id)arg1 containerID:(id)arg2 home:(id)arg3;	// IMP=0x0000000000841aa4

@end

