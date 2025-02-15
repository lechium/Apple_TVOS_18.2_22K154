//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCWifiAssistManager : NSObject
{
    unsigned char _wifiAssistState;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x006000000013431f
@property(readonly) unsigned char wifiAssistState; // @synthesize wifiAssistState=_wifiAssistState;
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000013432d
- (void)addDelegate:(id)arg1;	// IMP=0x0000000000134327
@property(readonly) _Bool isAvailable;
- (id)init;	// IMP=0x0000000000134309

@end

