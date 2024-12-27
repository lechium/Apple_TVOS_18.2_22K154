//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAPSupportedDiagnosticsSnapshot, HMDService, NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessoryDiagnosticsSettings : NSObject
{
    HMDService *_diagnosticsService;	// 8 = 0x8
    HAPSupportedDiagnosticsSnapshot *_currentSnapshot;	// 16 = 0x10
    NSString *_transport;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000008ebb15
@property(readonly) NSString *transport; // @synthesize transport=_transport;
@property(retain) HAPSupportedDiagnosticsSnapshot *currentSnapshot; // @synthesize currentSnapshot=_currentSnapshot;
@property(readonly) HMDService *diagnosticsService; // @synthesize diagnosticsService=_diagnosticsService;
- (id)attributeDescriptions;	// IMP=0x00000000008eb9fe
- (id)initWithService:(id)arg1;	// IMP=0x00000000008eb97e

@end

