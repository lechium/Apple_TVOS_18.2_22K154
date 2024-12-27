//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMSDRefreshMultiUserOptions : NSObject
{
    _Bool _ignoreThrottling;	// 8 = 0x8
    _Bool _shouldUseCloudData;	// 9 = 0x9
    NSString *_reasonDescription;	// 16 = 0x10
    unsigned long long _reasonType;	// 24 = 0x18
    double _schedulingInterval;	// 32 = 0x20
    double _throttlingInterval;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000048516
@property(nonatomic) double throttlingInterval; // @synthesize throttlingInterval=_throttlingInterval;
@property(nonatomic) _Bool shouldUseCloudData; // @synthesize shouldUseCloudData=_shouldUseCloudData;
@property(nonatomic) double schedulingInterval; // @synthesize schedulingInterval=_schedulingInterval;
@property(nonatomic) unsigned long long reasonType; // @synthesize reasonType=_reasonType;
@property(copy, nonatomic) NSString *reasonDescription; // @synthesize reasonDescription=_reasonDescription;
@property(nonatomic) _Bool ignoreThrottling; // @synthesize ignoreThrottling=_ignoreThrottling;
- (id)_stringForRefreshType:(unsigned long long)arg1;	// IMP=0x001000000004847a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000048350
@property(readonly, nonatomic) NSString *hashedDescription;
- (id)initWithReason:(id)arg1;	// IMP=0x00100000000480f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

