//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SDStatusMonitor;
@protocol SDAirDropInformationDelegate;

@interface SDAirDropInformation : NSObject
{
    _Bool _started;	// 8 = 0x8
    SDStatusMonitor *_monitor;	// 16 = 0x10
    NSMutableDictionary *_properties;	// 24 = 0x18
    id <SDAirDropInformationDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000aac8f
@property __weak id <SDAirDropInformationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stop;	// IMP=0x00100000000aac4a
- (void)start;	// IMP=0x00100000000aac0d
- (void)removeObservers;	// IMP=0x00100000000aabba
- (void)addObservers;	// IMP=0x00100000000aaa81
- (void)somethingChanged:(id)arg1;	// IMP=0x00100000000aaa6f
- (void)setInformationAndNotify;	// IMP=0x00100000000aa724
- (void)setProperty:(void *)arg1 forKey:(id)arg2;	// IMP=0x00100000000aa60b
- (_Bool)boolValue:(void *)arg1;	// IMP=0x00100000000aa5ce
- (void)dealloc;	// IMP=0x00100000000aa590
- (id)init;	// IMP=0x00100000000aa507

@end

