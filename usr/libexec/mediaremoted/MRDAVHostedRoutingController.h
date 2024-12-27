//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MRDAVHostedRoutingController
{
}

+ (id)_expectedSuffixForNewEndpointWithGroupLeader:(id)arg1 outputDevices:(id)arg2;	// IMP=0x0040000000076054
- (void)_logEndpointsChanged:(id)arg1 oldEndpoints:(id)arg2;	// IMP=0x00400000000761da
- (void)_onQueue_reloadWithOutputDevices:(id)arg1;	// IMP=0x0010000000076199
- (id)_createNativeGroupForLocalDeviceFromNativeOutputDevice:(id)arg1 availableOutputDevices:(id)arg2;	// IMP=0x0010000000075ce5
- (id)_sortNativeGroupToEnd:(id)arg1;	// IMP=0x0010000000075a42
- (id)_maybeAddNativeGroupToGroups:(id)arg1 availableOutputDevices:(id)arg2;	// IMP=0x00100000000756c2
- (id)_createGroupsFrom:(id)arg1 availableOutputDevices:(id)arg2;	// IMP=0x00100000000753c1
- (void)_onQueue_reloadEndpoints;	// IMP=0x001000000007459c
- (id)_onQueue_makeExternalDeviceTransportForEndpoint:(id)arg1 designatedGroupLeader:(id)arg2;	// IMP=0x001000000007417d
- (id)makeEndpointWithOutputDevices:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0010000000073cd8

@end

