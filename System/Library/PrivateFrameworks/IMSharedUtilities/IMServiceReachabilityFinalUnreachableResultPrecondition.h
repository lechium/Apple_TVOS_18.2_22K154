//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IMServiceReachabilityPrecondition.h"

@class NSString;

@interface IMServiceReachabilityFinalUnreachableResultPrecondition : IMServiceReachabilityPrecondition
{
    NSString *_serviceName;	// 8 = 0x8
}

+ (id)preconditionWithDictionary:(id)arg1;	// IMP=0x00600000000387d1
- (void).cxx_destruct;	// IMP=0x0000000000038b2c
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (unsigned long long)evaluateWithLatestResults:(id)arg1 requestedServices:(id)arg2;	// IMP=0x000000000003883e

@end

