//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHRemoteConfiguration;

@interface SHMediaItemPresenter : NSObject
{
    SHRemoteConfiguration *_remoteConfiguration;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000003fac
- (id)bundleIdentifier;	// IMP=0x0010000000003fa2
@property(readonly, nonatomic) SHRemoteConfiguration *remoteConfiguration; // @synthesize remoteConfiguration=_remoteConfiguration;
- (id)initWithRemoteConfiguration:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0010000000003f0d
- (id)initBundleIdentifier:(id)arg1;	// IMP=0x0010000000003e78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

