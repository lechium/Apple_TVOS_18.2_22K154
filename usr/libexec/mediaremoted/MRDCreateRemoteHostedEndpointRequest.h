//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MRDCreateRemoteHostedEndpointRequest : NSObject
{
}

+ (void)createRemoteHostedEndpointWithGroupLeaderOutputDeviceUID:(id)arg1 withOutputDeviceUIDs:(id)arg2 timeout:(double)arg3 details:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x004000000008e8e3
- (void)_searchForGroupUID:(id)arg1 timeout:(double)arg2 details:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x004000000008fa93
- (void)_createRemoteHostedEndpointWithGroupLeaderOutputDeviceUID:(id)arg1 withOutputDeviceUIDs:(id)arg2 timeout:(double)arg3 details:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000008ea17

@end

