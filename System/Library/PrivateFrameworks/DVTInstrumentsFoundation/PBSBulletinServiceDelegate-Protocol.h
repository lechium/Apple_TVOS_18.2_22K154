//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DVTInstrumentsFoundation/NSObject-Protocol.h>

@class PBSBulletin;
@protocol PBSBulletinServiceInterface;

@protocol PBSBulletinServiceDelegate <NSObject>
- (void)bulletinService:(id <PBSBulletinServiceInterface>)arg1 didDismissBulletin:(PBSBulletin *)arg2 withReason:(unsigned long long)arg3;
@end

