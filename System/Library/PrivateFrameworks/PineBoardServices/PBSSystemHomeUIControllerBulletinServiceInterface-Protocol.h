//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/NSObject-Protocol.h>

@class NSDictionary, NSUUID, PBSBulletin;
@protocol PBSSystemHomeUIControllerObserver;

@protocol PBSSystemHomeUIControllerBulletinServiceInterface <NSObject>
- (void)dismissBulletin:(PBSBulletin *)arg1;
- (void)updateBulletin:(PBSBulletin *)arg1 withMessage:(NSDictionary *)arg2 completion:(void (^)(PBSBulletin *, _Bool, NSError *))arg3;
- (void)presentBulletinIfNecessary:(PBSBulletin *)arg1 forHomeKitObjectUniqueIdentifier:(NSUUID *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)removeObserver:(id <PBSSystemHomeUIControllerObserver>)arg1;
- (void)addObserver:(id <PBSSystemHomeUIControllerObserver>)arg1;
@end

