//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UAPBIRSandboxExtConverter : NSObject
{
}

+ (void)registerConverter;	// IMP=0x001000000001c70e
- (id)convertIRDataToPlatform:(id)arg1;	// IMP=0x000000000001c77d
- (id)convertPlatformDataToIR:(id)arg1;	// IMP=0x000000000001c775
- (id)typeString;	// IMP=0x000000000001c768

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

