//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MNNavigationServiceCallbackParameters.h"

@class MISSING_TYPE, MNNavTrayGuidanceEvent;

@interface _TtC10Navigation52MNNavigationServiceCallback_DidUpdateNavTrayGuidance : MNNavigationServiceCallbackParameters
{
    MISSING_TYPE *navTrayGuidanceEvent;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000006570
- (void).cxx_destruct;	// IMP=0x0000000000006830
- (id)init;	// IMP=0x00000000000067e0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000066f0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006630
@property(nonatomic, readonly) unsigned long long type;
- (id)initWithNavTrayGuidanceEvent:(id)arg1;	// IMP=0x0000000000006510
@property(nonatomic, readonly) MNNavTrayGuidanceEvent *navTrayGuidanceEvent; // @synthesize navTrayGuidanceEvent;

@end

