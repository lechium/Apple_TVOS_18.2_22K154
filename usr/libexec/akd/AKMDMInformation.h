//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AKMDMInformation : NSObject
{
    NSString *_deviceManagedState;	// 8 = 0x8
    NSString *_organizationToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000027109
@property(readonly, nonatomic) NSString *organizationToken; // @synthesize organizationToken=_organizationToken;
@property(readonly, nonatomic) NSString *deviceManagedState; // @synthesize deviceManagedState=_deviceManagedState;
- (id)initWithDeviceManagedState:(unsigned long long)arg1 organizationToken:(id)arg2;	// IMP=0x001000000002702c

@end

