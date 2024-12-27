//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSObject-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMHomePersonManagerSettings, HMIExternalPersonManagerSettings, HMIHomePersonManagerSettings, HMPhotosPersonManagerSettings;

@protocol HMDPersonManagerSettings <NSObject, NSCopying, NSSecureCoding>
@property(readonly) _Bool requiresPersistentStorage;
- (HMHomePersonManagerSettings *)createHMHomePersonManagerSettings;
- (HMPhotosPersonManagerSettings *)createHMPhotosPersonManagerSettings;
- (HMIHomePersonManagerSettings *)createHMIHomePersonManagerSettings;
- (HMIExternalPersonManagerSettings *)createHMIExternalPersonManagerSettings;
@end

