//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DEPDeviceUploadSubmitDeviceRequestPayload;

@interface CCDDeviceUploadSubmitDeviceRequest
{
    DEPDeviceUploadSubmitDeviceRequestPayload *_submitDeviceRequestPayload;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000004202
@property(retain, nonatomic) DEPDeviceUploadSubmitDeviceRequestPayload *submitDeviceRequestPayload; // @synthesize submitDeviceRequestPayload=_submitDeviceRequestPayload;
- (id)_deviceDetails;	// IMP=0x0010000000003eae
- (id)requestBody;	// IMP=0x0010000000003b48
- (id)endpointPath;	// IMP=0x0010000000003b34
- (id)httpMethod;	// IMP=0x0010000000003b27
- (long long)requestType;	// IMP=0x0010000000003b1c

@end

