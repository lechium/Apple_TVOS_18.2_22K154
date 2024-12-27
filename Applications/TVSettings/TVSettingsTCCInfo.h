//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TVSettingsTCCFacade;

@interface TVSettingsTCCInfo : NSObject
{
    _Bool _allowAccess;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    TVSettingsTCCFacade *_facade;	// 32 = 0x20
}

+ (_Bool)automaticallyNotifiesObserversOfAllowAccess;	// IMP=0x00400000000b39f5
+ (id)infoWithFacade:(id)arg1 identifier:(id)arg2 allowed:(_Bool)arg3;	// IMP=0x00100000000b383f
- (void).cxx_destruct;	// IMP=0x00200000000b3a30
@property(readonly, nonatomic) __weak TVSettingsTCCFacade *facade; // @synthesize facade=_facade;
@property(nonatomic) _Bool allowAccess; // @synthesize allowAccess=_allowAccess;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end

