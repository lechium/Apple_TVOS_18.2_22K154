//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SADeviceCarDNDHintContext;
@protocol SiriUICarDNDContextProviderDelegate;

__attribute__((visibility("hidden")))
@interface SiriUICarDNDContextProvider : NSObject
{
    id <SiriUICarDNDContextProviderDelegate> _delegate;	// 8 = 0x8
    SADeviceCarDNDHintContext *_hintContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000f102
@property(copy, nonatomic, setter=_setHintContext:) SADeviceCarDNDHintContext *hintContext; // @synthesize hintContext=_hintContext;
@property(nonatomic) __weak id <SiriUICarDNDContextProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getCurrentContext;	// IMP=0x000000000000f021
- (_Bool)allowContextProvider:(id)arg1;	// IMP=0x000000000000f019

@end

