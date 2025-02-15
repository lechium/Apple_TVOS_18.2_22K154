//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKRotationCoordinatorObserver : NSObject
{
    struct WeakPtr<WebKit::UserMediaPermissionRequestManagerProxy, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> _managerProxy;	// 8 = 0x8
    struct HashMap<WTF::String, WTF::RetainPtr<AVCaptureDeviceRotationCoordinator>, WTF::DefaultHash<String>, WTF::HashTraits<String>, WTF::HashTraits<WTF::RetainPtr<AVCaptureDeviceRotationCoordinator>>, WTF::HashTableTraits> m_coordinators;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000040b455
- (void).cxx_destruct;	// IMP=0x000000000040b3a0
- (void)stop:(const void *)arg1;	// IMP=0x000000000040b1a6
- (optional_89c99cf8)start:(const void *)arg1 layer:(id)arg2;	// IMP=0x000000000040aecd
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000040ac5b
- (id)initWithRequestManagerProxy:(void *)arg1;	// IMP=0x000000000040abee

@end

