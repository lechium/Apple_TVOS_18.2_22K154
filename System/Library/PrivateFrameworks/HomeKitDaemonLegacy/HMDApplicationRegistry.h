//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class LSApplicationWorkspace, NSArray, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDApplicationRegistry : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_applications;	// 16 = 0x10
    LSApplicationWorkspace *_workspace;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x001000000076060d
+ (id)sharedRegistry;	// IMP=0x00100000007605dd
- (void).cxx_destruct;	// IMP=0x0000000000760154
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000000075fffc
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x000000000075fced
- (id)applicationInfoForBundleIdentifier:(id)arg1;	// IMP=0x000000000075fbd2
- (id)applicationInfoForBundleURL:(id)arg1;	// IMP=0x000000000075fae1
@property(readonly, copy) NSArray *applications;
- (void)dealloc;	// IMP=0x000000000075fa2d
- (id)init;	// IMP=0x000000000075f970

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

