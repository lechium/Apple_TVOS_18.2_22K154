//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HMDMPCAssistantRemoteControlDestinationFactory : NSObject
{
}

- (id)mutableCopyForMPCDestination:(id)arg1;	// IMP=0x00000000008ea256
- (void)resolveMPCDestination:(id)arg1 withHashedRouteIdentifiers:(id)arg2 audioRoutingInfo:(CDStruct_8024420c)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000008ea238
- (id)systemMediaApplicationDestination;	// IMP=0x00000000008ea21f
- (id)nowPlayingApplicationDestination;	// IMP=0x00000000008ea206

@end

