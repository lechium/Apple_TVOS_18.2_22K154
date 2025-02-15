//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ADRadarManagerDraft : NSObject
{
    _Bool _isUserInitiated;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_problemDescription;	// 24 = 0x18
    NSArray *_deviceIDs;	// 32 = 0x20
    NSString *_componentName;	// 40 = 0x28
    NSString *_componentVersion;	// 48 = 0x30
    long long _componentIdentifier;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001aaaaf
@property(nonatomic) long long componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
@property(copy, nonatomic) NSString *componentVersion; // @synthesize componentVersion=_componentVersion;
@property(copy, nonatomic) NSString *componentName; // @synthesize componentName=_componentName;
@property(copy, nonatomic) NSArray *deviceIDs; // @synthesize deviceIDs=_deviceIDs;
@property(nonatomic) _Bool isUserInitiated; // @synthesize isUserInitiated=_isUserInitiated;
@property(copy, nonatomic) NSString *problemDescription; // @synthesize problemDescription=_problemDescription;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

