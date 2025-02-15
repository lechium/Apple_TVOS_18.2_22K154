//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKUIWindowSceneObserver : NSObject
{
    struct WeakPtr<WebKit::ApplicationStateTracker, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> _parent;	// 8 = 0x8
    struct WeakObjCPtr<UIWindow> _window;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000255f01
- (void).cxx_destruct;	// IMP=0x0000000000255ec0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000255da9
- (void)setObservedWindow:(id)arg1;	// IMP=0x0000000000255c7f
- (id)initWithParent:(void *)arg1;	// IMP=0x0000000000255c06

@end

