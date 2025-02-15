//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIBarcodeDescriptor, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVMetadataMachineReadableCodeObjectInternal : NSObject
{
    NSArray *corners;	// 8 = 0x8
    NSString *stringValue;	// 16 = 0x10
    NSDictionary *basicDescriptor;	// 24 = 0x18
    _Bool decoded;	// 32 = 0x20
    CIBarcodeDescriptor *descriptor;	// 40 = 0x28
}

@property(retain) CIBarcodeDescriptor *descriptor; // @synthesize descriptor;
@property _Bool decoded; // @synthesize decoded;
@property(retain) NSDictionary *basicDescriptor; // @synthesize basicDescriptor;
@property(retain) NSString *stringValue; // @synthesize stringValue;
@property(retain) NSArray *corners; // @synthesize corners;
- (void)dealloc;	// IMP=0x00000000000dca34

@end

