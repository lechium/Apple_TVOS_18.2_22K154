//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SCROMobileBrailleDisplayInputManagerCacheObject : NSObject
{
    NSString *_driverIdentifier;	// 8 = 0x8
    NSString *_modelIdentifier;	// 16 = 0x10
    int _brailleInputMode;	// 24 = 0x18
    NSMutableDictionary *_commandDictionary;	// 32 = 0x20
    NSMutableArray *_orderedIdentifiers;	// 40 = 0x28
    NSBundle *_bundle;	// 48 = 0x30
    NSString *_productName;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000003d3d3
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSMutableArray *orderedIdentifiers; // @synthesize orderedIdentifiers=_orderedIdentifiers;
@property(retain, nonatomic) NSMutableDictionary *commandDictionary; // @synthesize commandDictionary=_commandDictionary;
@property(retain, nonatomic) NSString *driverIdentifier; // @synthesize driverIdentifier=_driverIdentifier;
@property(nonatomic) int brailleInputMode; // @synthesize brailleInputMode=_brailleInputMode;
@property(retain, nonatomic) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;

@end

