//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKDeviceListRequestContext;

@interface AKDeviceListRequestProvider
{
    AKDeviceListRequestContext *_deviceRequestContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000038a51
@property(retain, nonatomic) AKDeviceListRequestContext *deviceRequestContext; // @synthesize deviceRequestContext=_deviceRequestContext;
- (unsigned long long)expectedResponseType;	// IMP=0x0010000000038a21
- (void)requestURLWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003851f

@end

