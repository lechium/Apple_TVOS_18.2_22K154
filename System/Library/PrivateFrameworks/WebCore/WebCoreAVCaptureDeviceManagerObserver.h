//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebCoreAVCaptureDeviceManagerObserver : NSObject
{
    void *m_callback;	// 8 = 0x8
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000ed8330
- (void)deviceConnectedDidChange:(id)arg1;	// IMP=0x0000000000ed8280
- (void)disconnect;	// IMP=0x0000000000ed8250
- (id)initWithCallback:(void *)arg1;	// IMP=0x0000000000ed8210

@end

