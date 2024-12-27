//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AUAudioUnit;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AUHostDelegate : NSObject
{
    NSObject<OS_dispatch_queue> *mParameterQueue;	// 8 = 0x8
    AUAudioUnit *_audioUnit;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000148de3
@property(nonatomic) __weak AUAudioUnit *audioUnit; // @synthesize audioUnit=_audioUnit;
- (void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;	// IMP=0x0000000000148d23
- (void)speechSynthesisMetadataAvailable:(id)arg1 speechRequest:(id)arg2;	// IMP=0x0000000000148c0e
- (void)MIDICIProfileChanged:(unsigned char)arg1 channel:(unsigned char)arg2 profile:(id)arg3 enabled:(_Bool)arg4;	// IMP=0x0000000000148b16
- (void)propertiesChanged:(id)arg1;	// IMP=0x0000000000148897
- (id)init;	// IMP=0x0000000000148803

@end

