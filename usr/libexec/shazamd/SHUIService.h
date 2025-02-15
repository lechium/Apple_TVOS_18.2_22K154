//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHMediaItemPresenter, SHMediaLibraryPresenter;
@protocol SHServiceDelegate;

@interface SHUIService : NSObject
{
    SHMediaItemPresenter *_mediaItemPresenter;	// 8 = 0x8
    SHMediaLibraryPresenter *_mediaLibraryPresenter;	// 16 = 0x10
    id <SHServiceDelegate> _serviceDelegate;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
}

+ (void)initializeGlobalServiceState;	// IMP=0x00200000000047ca
+ (id)machServiceName;	// IMP=0x00100000000047b6
- (void).cxx_destruct;	// IMP=0x0020000000004807
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) __weak id <SHServiceDelegate> serviceDelegate; // @synthesize serviceDelegate=_serviceDelegate;
- (void)shutdownService;	// IMP=0x00100000000047d0
@property(readonly, nonatomic) SHMediaLibraryPresenter *mediaLibraryPresenter; // @synthesize mediaLibraryPresenter=_mediaLibraryPresenter;
@property(readonly, nonatomic) SHMediaItemPresenter *mediaItemPresenter; // @synthesize mediaItemPresenter=_mediaItemPresenter;
- (id)initBundleIdentifier:(id)arg1;	// IMP=0x001000000000464f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

