//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IXAppInstallCoordinator, NSNumber, NSOperation, NSProgress, NSString, NSUUID, _TtC9appstored12AssetPromise, _TtC9appstored6LogKey;

@interface AppInstallInfo : NSObject
{
    unsigned int _powerAssertion;	// 8 = 0x8
    _TtC9appstored12AssetPromise *_assetPromise;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    IXAppInstallCoordinator *_coordinator;	// 32 = 0x20
    NSUUID *_coordinatorID;	// 40 = 0x28
    NSProgress *_downloadProgress;	// 48 = 0x30
    NSUUID *_externalID;	// 56 = 0x38
    long long _installID;	// 64 = 0x40
    NSNumber *_itemID;	// 72 = 0x48
    _TtC9appstored6LogKey *_logKey;	// 80 = 0x50
    NSOperation *_operation;	// 88 = 0x58
    long long _packageID;	// 96 = 0x60
    unsigned long long _signpostID;	// 104 = 0x68
    id;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0020000000227cba
- (void)dealloc;	// IMP=0x0010000000227a97
- (id)init;	// IMP=0x0010000000227905

@end

