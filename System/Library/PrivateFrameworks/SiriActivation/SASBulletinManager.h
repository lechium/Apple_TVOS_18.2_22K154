//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BBObserver, NSMutableDictionary, NSString, SASBulletinCache;
@protocol SASBulletinManagerDelegate;

__attribute__((visibility("hidden")))
@interface SASBulletinManager : NSObject
{
    BBObserver *_observer;	// 8 = 0x8
    SASBulletinCache *_bulletinCache;	// 16 = 0x10
    NSMutableDictionary *_bulletinsOnLockScreen;	// 24 = 0x18
    id <SASBulletinManagerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002ca6e
@property(nonatomic) __weak id <SASBulletinManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;	// IMP=0x000000000002c8fd
- (void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2;	// IMP=0x000000000002c7ee
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3;	// IMP=0x000000000002c694
- (void)observer:(id)arg1 removeBulletin:(id)arg2;	// IMP=0x000000000002c61c
- (void)modifyBulletinCompletionWithBulletin:(id)arg1;	// IMP=0x000000000002c52d
- (void)observer:(id)arg1 modifyBulletin:(id)arg2;	// IMP=0x000000000002c326
- (void)addBulletinCompletionWithBulletin:(id)arg1 forFeed:(unsigned long long)arg2;	// IMP=0x000000000002c1b0
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;	// IMP=0x000000000002c0ec
- (id)bulletinForIdentifier:(id)arg1;	// IMP=0x000000000002c05e
- (id)bulletinsOnLockScreen;	// IMP=0x000000000002c048
- (id)allBulletins;	// IMP=0x000000000002bff4
- (id)_displayNameForBulletin:(id)arg1;	// IMP=0x000000000002bf43
- (void)_bulletinsDidChange;	// IMP=0x000000000002bef7
- (void)dealloc;	// IMP=0x000000000002be8b
- (void)_setupObserver;	// IMP=0x000000000002be2d
- (id)init;	// IMP=0x000000000002bda8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

